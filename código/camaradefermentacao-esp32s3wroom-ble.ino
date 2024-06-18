
//    Video: https://www.youtube.com/watch?v=oCMOYS71NIU
 //   Based on Neil Kolban example for IDF: https://github.com/nkolban/esp32-snippets/blob/master/cpp_utils/tests/BLE%20Tests/SampleNotify.cpp
 //   Ported to Arduino ESP32 by Evandro Copercini
  //  updated by chegewara
//MHZCO2.h Credits for https://github.com/RobTillaart/MHZCO2/tree/master

//To receive data, you must follow the configuration in the www.phyphox.org/editor

//ESP32 S3 DEV Module
#include <BLEDevice.h>
#include <BLEServer.h>
#include <BLEUtils.h>
#include <BLE2902.h>
//Incluindo Bibliotecas bmp280 e MH Z19B---------------------
#include <Wire.h>
#include <Adafruit_BMP280.h>
#include "SoftwareSerial.h"
#include "Arduino.h"
#include "MHZCO2.h"
#include <OneWire.h>
#include <DallasTemperature.h>
//----------------------------------------bluetooth-----------------
BLEServer* pServer = NULL;
BLECharacteristic* pCharacteristic = NULL;
bool deviceConnected = false;
bool oldDeviceConnected = false;
uint32_t value = 0;

// See the following for generating UUIDs:
// https://www.uuidgenerator.net/

#define SERVICE_UUID        "50cf1bc4-2188-4618-8b94-d5fe302ba5c5"
#define CHARACTERISTIC_UUID "760e96d1-fb4c-4f5d-a3a3-95ea50bfba6e"

#define ONE_WIRE_BUS 21
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

class MyServerCallbacks: public BLEServerCallbacks {
    void onConnect(BLEServer* pServer) {
      deviceConnected = true;
    };

    void onDisconnect(BLEServer* pServer) {
      deviceConnected = false;
    }
};

//------------bmp280----------------------------------------
Adafruit_BMP280 bmp; //I2C portas ref esp32 s3 8 e 9 8 SDA 9 SCL ESP32 S3 A4 A5 ARDUINO UNO

//-----------instruções MH z19b--------------------------
//const 
int TXmh = 17; //porta ref esp32 s3
//const 
int RXmh = 18;//porta ref esp32 s3
SoftwareSerial ss(TXmh, RXmh);
MHZ19B MHZ19B;
//-----------------------

void setup() {
  Serial.begin(115200); //ESP32
  //Serial.begin(9600); //ESP32
  analogReadResolution(10);

  // Create the BLE Device
  BLEDevice::init("ESP32");

  // Create the BLE Server
  pServer = BLEDevice::createServer();
  pServer->setCallbacks(new MyServerCallbacks());

  // Create the BLE Service
  BLEService *pService = pServer->createService(SERVICE_UUID);

  // Create a BLE Characteristic
  pCharacteristic = pService->createCharacteristic(
                      CHARACTERISTIC_UUID,
                      BLECharacteristic::PROPERTY_READ   |
                      BLECharacteristic::PROPERTY_WRITE  |
                      BLECharacteristic::PROPERTY_NOTIFY |
                      BLECharacteristic::PROPERTY_INDICATE
                    );

  // https://www.bluetooth.com/specifications/gatt/viewer?attributeXmlFile=org.bluetooth.descriptor.gatt.client_characteristic_configuration.xml
  // Create a BLE Descriptor
  pCharacteristic->addDescriptor(new BLE2902());

  // Start the service
  pService->start();

  // Start advertising
  BLEAdvertising *pAdvertising = BLEDevice::getAdvertising();
  pAdvertising->addServiceUUID(SERVICE_UUID);
  pAdvertising->setScanResponse(false);
  pAdvertising->setMinPreferred(0x0);  // set value to 0x00 to not advertise this parameter
  BLEDevice::startAdvertising();
  Serial.println("Waiting a client connection to notify...");

//Iniciando a comunicação serial
  
  // Imprimindo Mensagem de teste no Monitor Serial
  Serial.println(F("BMP280 teste"));
  
  if (!bmp.begin(0x76)) { /*Definindo o endereço I2C como 0x76. Mudar, se necessário, para (0x77)*/
    
    //Imprime mensagem de erro no caso de endereço invalido ou não localizado. Modifique o valor 
    Serial.println(F(" Não foi possível encontrar um sensor BMP280 válido, verifique a fiação ou "
                     "tente outro endereço!"));
    while (1) delay(10);
  }
//-------------------------------setup MH Z19B----------------
  Serial.println(__FILE__);
  Serial.print("MHZCO2_LIB_VERSION: ");
  Serial.println(MHZCO2_LIB_VERSION);

  MHZ19B.begin(&ss); // MH Z19B
  ss.begin(9600);
  //MHZ19B.setPPM(5000); default is 5000 ppm
  MHZ19B.calibrateAuto(false); //Read the manual before change it
//-------------------Analog red pins-------------------------------------
analogReadResolution(10);
sensors.begin();


}//do void setup

void loop() {
    // notify changed value

    
    if (deviceConnected) {
     
      int analog = analogRead(4)*(5000/1023);
      
      int bmptemp = bmp.readTemperature();
      
      
      int bmppress = bmp.readPressure();
      MHZ19B.measure();
      int mhco2 = MHZ19B.getCO2();
      //float mhmin = MHZ19B.getMinCO2();
      int mhtemp = MHZ19B.getTemperature();
      //float mhaccu =MHZ19B.getAccuracy();

      sensors.requestTemperatures(); // Send the command to get temperatures
      int temp = sensors.getTempCByIndex(0);
  
  //delay(500);
  
    // print out the values you read:
      char buffer[60];
      //sprintf(buffer, "%d, %d, %d,%d, %d, %d,", bmptemp, bmppress, mhco2, mhmin, mhtemp, mhaccu);
       //Serial.println("SSD[" + String(mhco2) + "," + String(mhtemp) + "," + String(bmppress) + ","  + String(analog) + "]");
       sprintf(buffer, "%d,%d,%d,%d,", analog,mhco2, bmppress, temp);//
        
        Serial.println(buffer);
      pCharacteristic->setValue(buffer);
      pCharacteristic->notify();
       
        delay(500); // bluetooth stack will go into congestion, if too many packets are sent, in 6 hours test i was able to go as low as 3ms
    }
    // disconnecting
    if (!deviceConnected && oldDeviceConnected) {
        delay(200); // give the bluetooth stack the chance to get things ready
        pServer->startAdvertising(); // restart advertising
        Serial.println("start advertising");
        oldDeviceConnected = deviceConnected;
    }
    // connecting
    if (deviceConnected && !oldDeviceConnected) {
        // do stuff here on connecting
        oldDeviceConnected = deviceConnected;
    }
}