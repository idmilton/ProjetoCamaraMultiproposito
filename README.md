# Projeto Camara Multiproposito para estudo de gases

Descrição da construção e montagem de uma Câmara de Fermentação. Neste projeto um pote de vidro de 120 mL será utilizado como base. Uma tampa feita sob medida e produzida em impressora 3D servirá de base para os sensores que serão utilizados: MH Z19B (Dióxido de carbono), MQ 3 (Álcool) e BMP280 (pressão atmosférica).
Na pasta do projeto serão compartilhados:

- O desenho da tampa foi atualizado no segundo semestre de 2024 para uma estrutura mais robusta e sem riscos de tombamento.
- O código em C para compilar a placa ESP32
- O código e QR code para instalar a rotina do phyphox
- Acesso ao download do phyphox via play store:
https://play.google.com/store/apps/details?id=de.rwth_aachen.phyphox&utm_source=global_co&utm_medium=prtnr&utm_content=Mar2515&utm_campaign=PartBadge&pcampaignid=MKT-Other-global-all-co-prtnr-py-PartBadge-Mar2515-1

- Link para instalar a rotina da câmara no phyphox: ![qrcode-phyphox-280525](https://github.com/user-attachments/assets/7050a9a6-9e33-4e7b-a300-562f2dfef23c)
(https://github.com/idmilton/ProjetoCamaradeFermentacao/assets/4228326/e061c921-623e-4f2c-89c7-9f63ed6b066a)

![fotoscamara (3)](https://github.com/idmilton/ProjetoCamaradeFermentacao/assets/4228326/5dbb51f3-493a-44f2-afb9-c6ecbfd7944e)
![montagem-circuitocamara (2)](https://github.com/idmilton/ProjetoCamaradeFermentacao/assets/4228326/3fa8d567-22db-42ee-a831-a6bbfb32cff8)

[Uploasolid CATIA STL
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  7.500000e+001  2.000000e+001  3.000000e+001
      vertex  7.000000e+001  2.500000e+001  3.000000e+001
      vertex  5.000000e+000  2.000000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.000000e+000  2.000000e+001  3.000000e+001
      vertex  7.000000e+001  2.500000e+001  3.000000e+001
      vertex  1.000000e+001  2.500000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.000000e+000  2.000000e+001  3.000000e+001
      vertex  1.000000e+001  2.500000e+001  3.000000e+001
      vertex  5.000000e+000  1.000000e+002  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.000000e+000  1.000000e+002  3.000000e+001
      vertex  1.000000e+001  2.500000e+001  3.000000e+001
      vertex  1.000000e+001  9.500000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  5.000000e+000  1.000000e+002  3.000000e+001
      vertex  1.000000e+001  9.500000e+001  3.000000e+001
      vertex  7.500000e+001  1.000000e+002  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  7.500000e+001  1.000000e+002  3.000000e+001
      vertex  1.000000e+001  9.500000e+001  3.000000e+001
      vertex  7.000000e+001  9.500000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  7.500000e+001  1.000000e+002  3.000000e+001
      vertex  7.000000e+001  9.500000e+001  3.000000e+001
      vertex  7.500000e+001  2.000000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  7.500000e+001  2.000000e+001  3.000000e+001
      vertex  7.000000e+001  9.500000e+001  3.000000e+001
      vertex  7.000000e+001  2.500000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.000000e+001  0.000000e+000  3.000000e+001
      vertex  7.700000e+001  1.800000e+001  3.000000e+001
      vertex  0.000000e+000  0.000000e+000  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  0.000000e+000  0.000000e+000  3.000000e+001
      vertex  7.700000e+001  1.800000e+001  3.000000e+001
      vertex  3.000000e+000  1.800000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  0.000000e+000  0.000000e+000  3.000000e+001
      vertex  3.000000e+000  1.800000e+001  3.000000e+001
      vertex  0.000000e+000  1.200000e+002  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  0.000000e+000  1.200000e+002  3.000000e+001
      vertex  3.000000e+000  1.800000e+001  3.000000e+001
      vertex  3.000000e+000  1.020000e+002  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  0.000000e+000  1.200000e+002  3.000000e+001
      vertex  3.000000e+000  1.020000e+002  3.000000e+001
      vertex  8.000000e+001  1.200000e+002  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.000000e+001  1.200000e+002  3.000000e+001
      vertex  3.000000e+000  1.020000e+002  3.000000e+001
      vertex  7.700000e+001  1.020000e+002  3.000000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.000000e+001  1.200000e+002  3.000000e+001
      vertex  7.700000e+001  1.020000e+002  3.000000e+001
      vertex  8.000000e+001  0.000000e+000  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.000000e+001  0.000000e+000  3.000000e+001
      vertex  7.700000e+001  1.020000e+002  3.000000e+001
      vertex  7.700000e+001  1.800000e+001  3.000000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  5.000000e+000  1.000000e+002  2.500000e+001
      vertex  5.000000e+000  2.000000e+001  2.500000e+001
      vertex  5.000000e+000  1.000000e+002  3.000000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  5.000000e+000  1.000000e+002  3.000000e+001
      vertex  5.000000e+000  2.000000e+001  2.500000e+001
      vertex  5.000000e+000  2.000000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  -0.000000e+000
    outer loop
      vertex  7.500000e+001  2.000000e+001  2.500000e+001
      vertex  7.500000e+001  2.000000e+001  3.000000e+001
      vertex  5.000000e+000  2.000000e+001  2.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  5.000000e+000  2.000000e+001  2.500000e+001
      vertex  7.500000e+001  2.000000e+001  3.000000e+001
      vertex  5.000000e+000  2.000000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  7.500000e+001  2.000000e+001  2.500000e+001
      vertex  7.500000e+001  1.000000e+002  2.500000e+001
      vertex  7.500000e+001  2.000000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  7.500000e+001  2.000000e+001  3.000000e+001
      vertex  7.500000e+001  1.000000e+002  2.500000e+001
      vertex  7.500000e+001  1.000000e+002  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  5.000000e+000  1.000000e+002  2.500000e+001
      vertex  5.000000e+000  1.000000e+002  3.000000e+001
      vertex  7.500000e+001  1.000000e+002  2.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  -0.000000e+000
    outer loop
      vertex  7.500000e+001  1.000000e+002  2.500000e+001
      vertex  5.000000e+000  1.000000e+002  3.000000e+001
      vertex  7.500000e+001  1.000000e+002  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  3.000000e+000  1.020000e+002  2.500000e+001
      vertex  7.700000e+001  1.020000e+002  2.500000e+001
      vertex  3.000000e+000  1.020000e+002  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  3.000000e+000  1.020000e+002  3.000000e+001
      vertex  7.700000e+001  1.020000e+002  2.500000e+001
      vertex  7.700000e+001  1.020000e+002  3.000000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  7.700000e+001  1.800000e+001  2.500000e+001
      vertex  7.700000e+001  1.800000e+001  3.000000e+001
      vertex  7.700000e+001  1.020000e+002  2.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  7.700000e+001  1.020000e+002  2.500000e+001
      vertex  7.700000e+001  1.800000e+001  3.000000e+001
      vertex  7.700000e+001  1.020000e+002  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  7.700000e+001  1.800000e+001  2.500000e+001
      vertex  3.000000e+000  1.800000e+001  2.500000e+001
      vertex  7.700000e+001  1.800000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  7.700000e+001  1.800000e+001  3.000000e+001
      vertex  3.000000e+000  1.800000e+001  2.500000e+001
      vertex  3.000000e+000  1.800000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  3.000000e+000  1.020000e+002  2.500000e+001
      vertex  3.000000e+000  1.020000e+002  3.000000e+001
      vertex  3.000000e+000  1.800000e+001  2.500000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  3.000000e+000  1.800000e+001  2.500000e+001
      vertex  3.000000e+000  1.020000e+002  3.000000e+001
      vertex  3.000000e+000  1.800000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  7.700000e+001  1.800000e+001  2.500000e+001
      vertex  7.500000e+001  2.000000e+001  2.500000e+001
      vertex  3.000000e+000  1.800000e+001  2.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  3.000000e+000  1.800000e+001  2.500000e+001
      vertex  7.500000e+001  2.000000e+001  2.500000e+001
      vertex  5.000000e+000  2.000000e+001  2.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  3.000000e+000  1.800000e+001  2.500000e+001
      vertex  5.000000e+000  2.000000e+001  2.500000e+001
      vertex  3.000000e+000  1.020000e+002  2.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  3.000000e+000  1.020000e+002  2.500000e+001
      vertex  5.000000e+000  2.000000e+001  2.500000e+001
      vertex  5.000000e+000  1.000000e+002  2.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  3.000000e+000  1.020000e+002  2.500000e+001
      vertex  5.000000e+000  1.000000e+002  2.500000e+001
      vertex  7.700000e+001  1.020000e+002  2.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  7.700000e+001  1.020000e+002  2.500000e+001
      vertex  5.000000e+000  1.000000e+002  2.500000e+001
      vertex  7.500000e+001  1.000000e+002  2.500000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  7.700000e+001  1.020000e+002  2.500000e+001
      vertex  7.500000e+001  1.000000e+002  2.500000e+001
      vertex  7.700000e+001  1.800000e+001  2.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  7.700000e+001  1.800000e+001  2.500000e+001
      vertex  7.500000e+001  1.000000e+002  2.500000e+001
      vertex  7.500000e+001  2.000000e+001  2.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  7.000000e+001  9.500000e+001  3.000000e+001
      vertex  7.000000e+001  9.500000e+001  1.500000e+001
      vertex  7.000000e+001  5.780351e+001  1.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  7.000000e+001  9.500000e+001  3.000000e+001
      vertex  7.000000e+001  5.780351e+001  1.500000e+001
      vertex  7.000000e+001  4.180351e+001  1.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  7.000000e+001  9.500000e+001  3.000000e+001
      vertex  7.000000e+001  4.180351e+001  1.500000e+001
      vertex  7.000000e+001  2.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  7.000000e+001  9.500000e+001  3.000000e+001
      vertex  7.000000e+001  2.500000e+001  1.500000e+001
      vertex  7.000000e+001  2.500000e+001  3.000000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  7.000000e+001  5.780351e+001  9.000000e+000
      vertex  7.000000e+001  4.180351e+001  9.000000e+000
      vertex  7.000000e+001  5.780351e+001  1.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  7.000000e+001  5.780351e+001  1.500000e+001
      vertex  7.000000e+001  4.180351e+001  9.000000e+000
      vertex  7.000000e+001  4.180351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  5.700000e+001  5.780351e+001  1.500000e+001
      vertex  5.700000e+001  4.180351e+001  1.500000e+001
      vertex  5.700000e+001  4.180351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  5.700000e+001  5.780351e+001  1.500000e+001
      vertex  5.700000e+001  4.180351e+001  9.000000e+000
      vertex  5.700000e+001  4.780351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  5.700000e+001  5.780351e+001  1.500000e+001
      vertex  5.700000e+001  4.780351e+001  9.000000e+000
      vertex  5.700000e+001  5.180351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  5.700000e+001  5.780351e+001  1.500000e+001
      vertex  5.700000e+001  5.180351e+001  9.000000e+000
      vertex  5.700000e+001  5.780351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  5.700000e+001  5.180351e+001  9.000000e+000
      vertex  5.700000e+001  4.780351e+001  9.000000e+000
      vertex  5.700000e+001  5.180351e+001  5.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  5.700000e+001  5.180351e+001  5.000000e+000
      vertex  5.700000e+001  4.780351e+001  9.000000e+000
      vertex  5.700000e+001  4.780351e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  5.700000e+001  5.780351e+001  9.000000e+000
      vertex  7.000000e+001  5.780351e+001  9.000000e+000
      vertex  5.700000e+001  5.780351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  5.700000e+001  5.780351e+001  1.500000e+001
      vertex  7.000000e+001  5.780351e+001  9.000000e+000
      vertex  7.000000e+001  5.780351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.700000e+001  5.780351e+001  9.000000e+000
      vertex  5.700000e+001  5.180351e+001  9.000000e+000
      vertex  7.000000e+001  5.780351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  7.000000e+001  5.780351e+001  9.000000e+000
      vertex  5.700000e+001  5.180351e+001  9.000000e+000
      vertex  6.300000e+001  5.180351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  7.000000e+001  5.780351e+001  9.000000e+000
      vertex  6.300000e+001  5.180351e+001  9.000000e+000
      vertex  7.000000e+001  4.180351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  7.000000e+001  4.180351e+001  9.000000e+000
      vertex  6.300000e+001  5.180351e+001  9.000000e+000
      vertex  6.300000e+001  4.780351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  7.000000e+001  4.180351e+001  9.000000e+000
      vertex  6.300000e+001  4.780351e+001  9.000000e+000
      vertex  5.700000e+001  4.180351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.700000e+001  4.180351e+001  9.000000e+000
      vertex  6.300000e+001  4.780351e+001  9.000000e+000
      vertex  5.700000e+001  4.780351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  7.000000e+001  4.180351e+001  9.000000e+000
      vertex  5.700000e+001  4.180351e+001  9.000000e+000
      vertex  7.000000e+001  4.180351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  7.000000e+001  4.180351e+001  1.500000e+001
      vertex  5.700000e+001  4.180351e+001  9.000000e+000
      vertex  5.700000e+001  4.180351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  9.999999e-001
    outer loop
      vertex  3.400000e+001  5.800000e+001  1.500000e+001
      vertex  4.000000e+001  5.900000e+001  1.500000e+001
      vertex  3.369248e+001  5.906560e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  3.400000e+001  5.800000e+001  1.500000e+001
      vertex  3.341422e+001  5.658578e+001  1.500000e+001
      vertex  4.000000e+001  5.900000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.700000e+001  5.780351e+001  1.500000e+001
      vertex  7.000000e+001  5.780351e+001  1.500000e+001
      vertex  4.600000e+001  5.900000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.700000e+001  5.780351e+001  1.500000e+001
      vertex  4.600000e+001  5.900000e+001  1.500000e+001
      vertex  4.600000e+001  5.700000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  9.999999e-001
    outer loop
      vertex  5.700000e+001  5.780351e+001  1.500000e+001
      vertex  4.600000e+001  5.700000e+001  1.500000e+001
      vertex  5.500000e+001  5.596556e+001  1.500000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.700000e+001  5.780351e+001  1.500000e+001
      vertex  5.500000e+001  5.596556e+001  1.500000e+001
      vertex  5.500000e+001  3.496556e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.700000e+001  5.780351e+001  1.500000e+001
      vertex  5.500000e+001  3.496556e+001  1.500000e+001
      vertex  5.700000e+001  4.180351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  3.200000e+001  5.600000e+001  1.500000e+001
      vertex  1.500000e+001  5.596556e+001  1.500000e+001
      vertex  5.500000e+001  5.596556e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  3.200000e+001  5.600000e+001  1.500000e+001
      vertex  5.500000e+001  5.596556e+001  1.500000e+001
      vertex  4.600000e+001  5.700000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  3.200000e+001  5.600000e+001  1.500000e+001
      vertex  4.600000e+001  5.700000e+001  1.500000e+001
      vertex  4.000000e+001  5.700000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  3.200000e+001  5.600000e+001  1.500000e+001
      vertex  4.000000e+001  5.700000e+001  1.500000e+001
      vertex  4.000000e+001  5.900000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  9.999999e-001
    outer loop
      vertex  3.200000e+001  5.600000e+001  1.500000e+001
      vertex  4.000000e+001  5.900000e+001  1.500000e+001
      vertex  3.341422e+001  5.658578e+001  1.500000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  3.286450e+001  5.980351e+001  1.500000e+001
      vertex  3.369248e+001  5.906560e+001  1.500000e+001
      vertex  4.000000e+001  5.900000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  3.286450e+001  5.980351e+001  1.500000e+001
      vertex  4.000000e+001  5.900000e+001  1.500000e+001
      vertex  4.600000e+001  5.900000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  -0.000000e+000  9.999999e-001
    outer loop
      vertex  3.286450e+001  5.980351e+001  1.500000e+001
      vertex  4.600000e+001  5.900000e+001  1.500000e+001
      vertex  7.000000e+001  5.780351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  3.286450e+001  5.980351e+001  1.500000e+001
      vertex  7.000000e+001  5.780351e+001  1.500000e+001
      vertex  5.650000e+001  5.980351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  5.596556e+001  1.500000e+001
      vertex  3.200000e+001  5.600000e+001  1.500000e+001
      vertex  3.058579e+001  5.658578e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  5.596556e+001  1.500000e+001
      vertex  3.058579e+001  5.658578e+001  1.500000e+001
      vertex  3.000000e+001  5.800000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  9.999999e-001
    outer loop
      vertex  1.500000e+001  5.596556e+001  1.500000e+001
      vertex  3.000000e+001  5.800000e+001  1.500000e+001
      vertex  3.030752e+001  5.906560e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  5.596556e+001  1.500000e+001
      vertex  3.030752e+001  5.906560e+001  1.500000e+001
      vertex  3.113550e+001  5.980351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  5.596556e+001  1.500000e+001
      vertex  3.113550e+001  5.980351e+001  1.500000e+001
      vertex  2.150000e+001  5.980351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  9.999999e-001
    outer loop
      vertex  1.500000e+001  5.596556e+001  1.500000e+001
      vertex  2.150000e+001  5.980351e+001  1.500000e+001
      vertex  2.150000e+001  8.480350e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  5.596556e+001  1.500000e+001
      vertex  2.150000e+001  8.480350e+001  1.500000e+001
      vertex  1.000000e+001  9.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  5.596556e+001  1.500000e+001
      vertex  1.000000e+001  9.500000e+001  1.500000e+001
      vertex  1.000000e+001  2.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  5.596556e+001  1.500000e+001
      vertex  1.000000e+001  2.500000e+001  1.500000e+001
      vertex  1.500000e+001  3.496556e+001  1.500000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  7.000000e+001  4.180351e+001  1.500000e+001
      vertex  5.700000e+001  4.180351e+001  1.500000e+001
      vertex  7.000000e+001  2.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  7.000000e+001  2.500000e+001  1.500000e+001
      vertex  5.700000e+001  4.180351e+001  1.500000e+001
      vertex  5.500000e+001  3.496556e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  7.000000e+001  2.500000e+001  1.500000e+001
      vertex  5.500000e+001  3.496556e+001  1.500000e+001
      vertex  1.000000e+001  2.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.000000e+001  2.500000e+001  1.500000e+001
      vertex  5.500000e+001  3.496556e+001  1.500000e+001
      vertex  1.500000e+001  3.496556e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.650000e+001  5.980351e+001  1.500000e+001
      vertex  7.000000e+001  5.780351e+001  1.500000e+001
      vertex  5.650000e+001  8.480350e+001  1.500000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  9.999999e-001
    outer loop
      vertex  5.650000e+001  8.480350e+001  1.500000e+001
      vertex  7.000000e+001  5.780351e+001  1.500000e+001
      vertex  7.000000e+001  9.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  9.999999e-001
    outer loop
      vertex  5.650000e+001  8.480350e+001  1.500000e+001
      vertex  7.000000e+001  9.500000e+001  1.500000e+001
      vertex  2.150000e+001  8.480350e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  2.150000e+001  8.480350e+001  1.500000e+001
      vertex  7.000000e+001  9.500000e+001  1.500000e+001
      vertex  1.000000e+001  9.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  5.700000e+001  5.180351e+001  9.000000e+000
      vertex  5.700000e+001  5.180351e+001  5.000000e+000
      vertex  6.300000e+001  5.180351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  -0.000000e+000
    outer loop
      vertex  6.300000e+001  5.180351e+001  9.000000e+000
      vertex  5.700000e+001  5.180351e+001  5.000000e+000
      vertex  6.300000e+001  5.180351e+001  5.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  6.300000e+001  4.780351e+001  9.000000e+000
      vertex  6.300000e+001  5.180351e+001  9.000000e+000
      vertex  6.300000e+001  4.780351e+001  5.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  6.300000e+001  4.780351e+001  5.000000e+000
      vertex  6.300000e+001  5.180351e+001  9.000000e+000
      vertex  6.300000e+001  5.180351e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  -0.000000e+000
    outer loop
      vertex  6.300000e+001  4.780351e+001  9.000000e+000
      vertex  6.300000e+001  4.780351e+001  5.000000e+000
      vertex  5.700000e+001  4.780351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  5.700000e+001  4.780351e+001  9.000000e+000
      vertex  6.300000e+001  4.780351e+001  5.000000e+000
      vertex  5.700000e+001  4.780351e+001  5.000000e+000
    endloop
  endfacet
  facet normal  9.238796e-001 -3.826833e-001  0.000000e+000
    outer loop
      vertex  3.000000e+001  5.800000e+001  5.000000e+000
      vertex  3.058579e+001  5.941422e+001  5.000000e+000
      vertex  3.000000e+001  5.800000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  9.606514e-001 -2.772319e-001  1.706714e-002
    outer loop
      vertex  3.000000e+001  5.800000e+001  1.500000e+001
      vertex  3.058579e+001  5.941422e+001  5.000000e+000
      vertex  3.030752e+001  5.906560e+001  1.500000e+001
    endloop
  endfacet
  facet normal  6.246091e-001 -7.808756e-001 -9.841772e-003
    outer loop
      vertex  3.058579e+001  5.941422e+001  5.000000e+000
      vertex  3.113550e+001  5.980351e+001  9.000000e+000
      vertex  3.030752e+001  5.906560e+001  1.500000e+001
    endloop
  endfacet
  facet normal  6.653332e-001 -7.465466e-001  0.000000e+000
    outer loop
      vertex  3.030752e+001  5.906560e+001  1.500000e+001
      vertex  3.113550e+001  5.980351e+001  9.000000e+000
      vertex  3.113550e+001  5.980351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  3.824164e-001 -9.232369e-001  3.729757e-002
    outer loop
      vertex  3.200000e+001  6.000000e+001  5.000000e+000
      vertex  3.113550e+001  5.980351e+001  9.000000e+000
      vertex  3.058579e+001  5.941422e+001  5.000000e+000
    endloop
  endfacet
  facet normal  2.216365e-001 -9.751294e-001  0.000000e+000
    outer loop
      vertex  3.113550e+001  5.980351e+001  9.000000e+000
      vertex  3.200000e+001  6.000000e+001  5.000000e+000
      vertex  3.200000e+001  6.000000e+001  9.000000e+000
    endloop
  endfacet
  facet normal -3.826822e-001 -9.238800e-001  -0.000000e+000
    outer loop
      vertex  3.200000e+001  6.000000e+001  9.000000e+000
      vertex  3.200000e+001  6.000000e+001  5.000000e+000
      vertex  3.341422e+001  5.941422e+001  5.000000e+000
    endloop
  endfacet
  facet normal -2.211778e-001 -9.731109e-001  6.431019e-002
    outer loop
      vertex  3.200000e+001  6.000000e+001  9.000000e+000
      vertex  3.341422e+001  5.941422e+001  5.000000e+000
      vertex  3.286450e+001  5.980351e+001  9.000000e+000
    endloop
  endfacet
  facet normal -6.246083e-001 -7.808760e-001 -9.841925e-003
    outer loop
      vertex  3.286450e+001  5.980351e+001  9.000000e+000
      vertex  3.341422e+001  5.941422e+001  5.000000e+000
      vertex  3.369248e+001  5.906560e+001  1.500000e+001
    endloop
  endfacet
  facet normal -6.653332e-001 -7.465466e-001  0.000000e+000
    outer loop
      vertex  3.286450e+001  5.980351e+001  9.000000e+000
      vertex  3.369248e+001  5.906560e+001  1.500000e+001
      vertex  3.286450e+001  5.980351e+001  1.500000e+001
    endloop
  endfacet
  facet normal -9.606514e-001 -2.772319e-001  1.706696e-002
    outer loop
      vertex  3.369248e+001  5.906560e+001  1.500000e+001
      vertex  3.341422e+001  5.941422e+001  5.000000e+000
      vertex  3.400000e+001  5.800000e+001  1.500000e+001
    endloop
  endfacet
  facet normal -9.238800e-001 -3.826822e-001  -0.000000e+000
    outer loop
      vertex  3.400000e+001  5.800000e+001  1.500000e+001
      vertex  3.341422e+001  5.941422e+001  5.000000e+000
      vertex  3.400000e+001  5.800000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  2.650000e+001  8.280350e+001  5.000000e+000
      vertex  5.350000e+001  8.280350e+001  5.000000e+000
      vertex  2.650000e+001  8.280350e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  2.650000e+001  8.280350e+001  9.000000e+000
      vertex  5.350000e+001  8.280350e+001  5.000000e+000
      vertex  5.350000e+001  8.280350e+001  9.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  2.650000e+001  8.280350e+001  9.000000e+000
      vertex  2.650000e+001  6.180351e+001  9.000000e+000
      vertex  2.650000e+001  8.280350e+001  5.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  2.650000e+001  8.280350e+001  5.000000e+000
      vertex  2.650000e+001  6.180351e+001  9.000000e+000
      vertex  2.650000e+001  6.180351e+001  5.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  5.350000e+001  6.180351e+001  9.000000e+000
      vertex  5.350000e+001  8.280350e+001  9.000000e+000
      vertex  5.350000e+001  6.180351e+001  5.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  5.350000e+001  6.180351e+001  5.000000e+000
      vertex  5.350000e+001  8.280350e+001  9.000000e+000
      vertex  5.350000e+001  8.280350e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  5.350000e+001  6.180351e+001  5.000000e+000
      vertex  2.650000e+001  6.180351e+001  5.000000e+000
      vertex  5.350000e+001  6.180351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  5.350000e+001  6.180351e+001  9.000000e+000
      vertex  2.650000e+001  6.180351e+001  5.000000e+000
      vertex  2.650000e+001  6.180351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  1.950591e-001  9.806266e-001 -1.797991e-002
    outer loop
      vertex  2.394516e+001  3.699986e+001  5.000000e+000
      vertex  2.355585e+001  3.715064e+001  9.000000e+000
      vertex  2.700000e+001  3.646556e+001  9.000000e+000
    endloop
  endfacet
  facet normal  8.073469e-001  5.896398e-001  2.271582e-002
    outer loop
      vertex  2.100000e+001  3.875735e+001  5.000000e+000
      vertex  1.878416e+001  4.179132e+001  5.000000e+000
      vertex  2.063604e+001  3.910160e+001  9.000000e+000
    endloop
  endfacet
  facet normal  5.554478e-001  8.312863e-001 -2.100070e-002
    outer loop
      vertex  2.100000e+001  3.875735e+001  5.000000e+000
      vertex  2.063604e+001  3.910160e+001  9.000000e+000
      vertex  2.355585e+001  3.715064e+001  9.000000e+000
    endloop
  endfacet
  facet normal  5.123566e-001  8.585945e-001  1.750208e-002
    outer loop
      vertex  2.100000e+001  3.875735e+001  5.000000e+000
      vertex  2.355585e+001  3.715064e+001  9.000000e+000
      vertex  2.394516e+001  3.699986e+001  5.000000e+000
    endloop
  endfacet
  facet normal  1.539651e-001  9.879715e-001  1.438509e-002
    outer loop
      vertex  2.394516e+001  3.699986e+001  5.000000e+000
      vertex  2.700000e+001  3.646556e+001  9.000000e+000
      vertex  2.733395e+001  3.647176e+001  5.000000e+000
    endloop
  endfacet
  facet normal -1.950693e-001  9.806782e-001 -1.476589e-002
    outer loop
      vertex  2.733395e+001  3.647176e+001  5.000000e+000
      vertex  2.700000e+001  3.646556e+001  9.000000e+000
      vertex  3.044415e+001  3.715064e+001  9.000000e+000
    endloop
  endfacet
  facet normal -2.268189e-001  9.738740e-001  1.107583e-002
    outer loop
      vertex  2.733395e+001  3.647176e+001  5.000000e+000
      vertex  3.044415e+001  3.715064e+001  9.000000e+000
      vertex  3.067423e+001  3.724972e+001  5.000000e+000
    endloop
  endfacet
  facet normal -5.555344e-001  8.314160e-001 -1.136083e-002
    outer loop
      vertex  3.067423e+001  3.724972e+001  5.000000e+000
      vertex  3.044415e+001  3.715064e+001  9.000000e+000
      vertex  3.336396e+001  3.910160e+001  9.000000e+000
    endloop
  endfacet
  facet normal -5.746887e-001  8.183370e-001  7.574250e-003
    outer loop
      vertex  3.067423e+001  3.724972e+001  5.000000e+000
      vertex  3.336396e+001  3.910160e+001  9.000000e+000
      vertex  3.348095e+001  3.922078e+001  5.000000e+000
    endloop
  endfacet
  facet normal -8.314447e-001  5.555533e-001 -7.765222e-003
    outer loop
      vertex  3.348095e+001  3.922078e+001  5.000000e+000
      vertex  3.336396e+001  3.910160e+001  9.000000e+000
      vertex  3.531491e+001  4.202141e+001  9.000000e+000
    endloop
  endfacet
  facet normal -8.391153e-001  5.439399e-001  3.882849e-003
    outer loop
      vertex  3.348095e+001  3.922078e+001  5.000000e+000
      vertex  3.531491e+001  4.202141e+001  9.000000e+000
      vertex  3.534651e+001  4.209871e+001  5.000000e+000
    endloop
  endfacet
  facet normal -9.807774e-001  1.950892e-001 -3.977477e-003
    outer loop
      vertex  3.534651e+001  4.209871e+001  5.000000e+000
      vertex  3.531491e+001  4.202141e+001  9.000000e+000
      vertex  3.600000e+001  4.546556e+001  9.000000e+000
    endloop
  endfacet
  facet normal -9.816796e-001  1.905388e-001  0.000000e+000
    outer loop
      vertex  3.534651e+001  4.209871e+001  5.000000e+000
      vertex  3.600000e+001  4.546556e+001  9.000000e+000
      vertex  3.600000e+001  4.546556e+001  5.000000e+000
    endloop
  endfacet
  facet normal  8.314158e-001  5.555345e-001 -1.136084e-002
    outer loop
      vertex  2.063604e+001  3.910160e+001  9.000000e+000
      vertex  1.878416e+001  4.179132e+001  5.000000e+000
      vertex  1.868508e+001  4.202141e+001  9.000000e+000
    endloop
  endfacet
  facet normal  9.779021e-001  2.087059e-001  1.221748e-002
    outer loop
      vertex  1.868508e+001  4.202141e+001  9.000000e+000
      vertex  1.878416e+001  4.179132e+001  5.000000e+000
      vertex  1.800000e+001  4.546556e+001  5.000000e+000
    endloop
  endfacet
  facet normal  9.807853e-001  1.950902e-001  -0.000000e+000
    outer loop
      vertex  1.868508e+001  4.202141e+001  9.000000e+000
      vertex  1.800000e+001  4.546556e+001  5.000000e+000
      vertex  1.800000e+001  4.546556e+001  9.000000e+000
    endloop
  endfacet
  facet normal  1.950896e-001 -9.807855e-001  0.000000e+000
    outer loop
      vertex  2.700000e+001  5.446556e+001  5.000000e+000
      vertex  2.355585e+001  5.378048e+001  9.000000e+000
      vertex  2.355585e+001  5.378048e+001  5.000000e+000
    endloop
  endfacet
  facet normal  5.555710e-001 -8.314691e-001  0.000000e+000
    outer loop
      vertex  2.355585e+001  5.378048e+001  5.000000e+000
      vertex  2.355585e+001  5.378048e+001  9.000000e+000
      vertex  2.063604e+001  5.182952e+001  9.000000e+000
    endloop
  endfacet
  facet normal  5.555710e-001 -8.314691e-001  0.000000e+000
    outer loop
      vertex  2.355585e+001  5.378048e+001  5.000000e+000
      vertex  2.063604e+001  5.182952e+001  9.000000e+000
      vertex  2.063604e+001  5.182952e+001  5.000000e+000
    endloop
  endfacet
  facet normal  8.314692e-001 -5.555709e-001  0.000000e+000
    outer loop
      vertex  2.063604e+001  5.182952e+001  5.000000e+000
      vertex  2.063604e+001  5.182952e+001  9.000000e+000
      vertex  1.868508e+001  4.890971e+001  9.000000e+000
    endloop
  endfacet
  facet normal  8.314692e-001 -5.555709e-001  0.000000e+000
    outer loop
      vertex  2.063604e+001  5.182952e+001  5.000000e+000
      vertex  1.868508e+001  4.890971e+001  9.000000e+000
      vertex  1.868508e+001  4.890971e+001  5.000000e+000
    endloop
  endfacet
  facet normal  9.807854e-001 -1.950900e-001  0.000000e+000
    outer loop
      vertex  1.868508e+001  4.890971e+001  5.000000e+000
      vertex  1.868508e+001  4.890971e+001  9.000000e+000
      vertex  1.800000e+001  4.546556e+001  9.000000e+000
    endloop
  endfacet
  facet normal  9.807854e-001 -1.950900e-001  0.000000e+000
    outer loop
      vertex  1.868508e+001  4.890971e+001  5.000000e+000
      vertex  1.800000e+001  4.546556e+001  9.000000e+000
      vertex  1.800000e+001  4.546556e+001  5.000000e+000
    endloop
  endfacet
  facet normal  1.950896e-001 -9.807855e-001  0.000000e+000
    outer loop
      vertex  2.355585e+001  5.378048e+001  9.000000e+000
      vertex  2.700000e+001  5.446556e+001  5.000000e+000
      vertex  2.700000e+001  5.446556e+001  9.000000e+000
    endloop
  endfacet
  facet normal -1.950896e-001 -9.807855e-001  -0.000000e+000
    outer loop
      vertex  2.700000e+001  5.446556e+001  9.000000e+000
      vertex  2.700000e+001  5.446556e+001  5.000000e+000
      vertex  3.044415e+001  5.378048e+001  5.000000e+000
    endloop
  endfacet
  facet normal -1.950896e-001 -9.807855e-001  0.000000e+000
    outer loop
      vertex  2.700000e+001  5.446556e+001  9.000000e+000
      vertex  3.044415e+001  5.378048e+001  5.000000e+000
      vertex  3.044415e+001  5.378048e+001  9.000000e+000
    endloop
  endfacet
  facet normal -5.555710e-001 -8.314691e-001  -0.000000e+000
    outer loop
      vertex  3.044415e+001  5.378048e+001  9.000000e+000
      vertex  3.044415e+001  5.378048e+001  5.000000e+000
      vertex  3.336396e+001  5.182952e+001  5.000000e+000
    endloop
  endfacet
  facet normal -5.555710e-001 -8.314691e-001  0.000000e+000
    outer loop
      vertex  3.044415e+001  5.378048e+001  9.000000e+000
      vertex  3.336396e+001  5.182952e+001  5.000000e+000
      vertex  3.336396e+001  5.182952e+001  9.000000e+000
    endloop
  endfacet
  facet normal -8.314694e-001 -5.555705e-001  -0.000000e+000
    outer loop
      vertex  3.336396e+001  5.182952e+001  9.000000e+000
      vertex  3.336396e+001  5.182952e+001  5.000000e+000
      vertex  3.531491e+001  4.890971e+001  5.000000e+000
    endloop
  endfacet
  facet normal -8.314694e-001 -5.555705e-001  0.000000e+000
    outer loop
      vertex  3.336396e+001  5.182952e+001  9.000000e+000
      vertex  3.531491e+001  4.890971e+001  5.000000e+000
      vertex  3.531491e+001  4.890971e+001  9.000000e+000
    endloop
  endfacet
  facet normal -9.807853e-001 -1.950905e-001  -0.000000e+000
    outer loop
      vertex  3.531491e+001  4.890971e+001  9.000000e+000
      vertex  3.531491e+001  4.890971e+001  5.000000e+000
      vertex  3.600000e+001  4.546556e+001  5.000000e+000
    endloop
  endfacet
  facet normal -9.807853e-001 -1.950905e-001  0.000000e+000
    outer loop
      vertex  3.531491e+001  4.890971e+001  9.000000e+000
      vertex  3.600000e+001  4.546556e+001  5.000000e+000
      vertex  3.600000e+001  4.546556e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  5.596556e+001  9.000000e+000
      vertex  1.500000e+001  3.496556e+001  9.000000e+000
      vertex  1.868508e+001  4.890971e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  5.596556e+001  9.000000e+000
      vertex  1.868508e+001  4.890971e+001  9.000000e+000
      vertex  2.063604e+001  5.182952e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  9.999999e-001
    outer loop
      vertex  1.500000e+001  5.596556e+001  9.000000e+000
      vertex  2.063604e+001  5.182952e+001  9.000000e+000
      vertex  2.355585e+001  5.378048e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  5.596556e+001  9.000000e+000
      vertex  2.355585e+001  5.378048e+001  9.000000e+000
      vertex  2.700000e+001  5.446556e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  5.596556e+001  9.000000e+000
      vertex  2.700000e+001  5.446556e+001  9.000000e+000
      vertex  5.500000e+001  5.596556e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  3.496556e+001  9.000000e+000
      vertex  5.500000e+001  3.496556e+001  9.000000e+000
      vertex  2.700000e+001  3.646556e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  3.496556e+001  9.000000e+000
      vertex  2.700000e+001  3.646556e+001  9.000000e+000
      vertex  2.355585e+001  3.715064e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  3.496556e+001  9.000000e+000
      vertex  2.355585e+001  3.715064e+001  9.000000e+000
      vertex  2.063604e+001  3.910160e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  9.999999e-001
    outer loop
      vertex  1.500000e+001  3.496556e+001  9.000000e+000
      vertex  2.063604e+001  3.910160e+001  9.000000e+000
      vertex  1.868508e+001  4.202141e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  3.496556e+001  9.000000e+000
      vertex  1.868508e+001  4.202141e+001  9.000000e+000
      vertex  1.800000e+001  4.546556e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  1.500000e+001  3.496556e+001  9.000000e+000
      vertex  1.800000e+001  4.546556e+001  9.000000e+000
      vertex  1.868508e+001  4.890971e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.500000e+001  3.496556e+001  9.000000e+000
      vertex  3.336396e+001  5.182952e+001  9.000000e+000
      vertex  3.531491e+001  4.890971e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.500000e+001  3.496556e+001  9.000000e+000
      vertex  3.531491e+001  4.890971e+001  9.000000e+000
      vertex  3.600000e+001  4.546556e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.500000e+001  3.496556e+001  9.000000e+000
      vertex  3.600000e+001  4.546556e+001  9.000000e+000
      vertex  3.531491e+001  4.202141e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.500000e+001  3.496556e+001  9.000000e+000
      vertex  3.531491e+001  4.202141e+001  9.000000e+000
      vertex  3.336396e+001  3.910160e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.500000e+001  3.496556e+001  9.000000e+000
      vertex  3.336396e+001  3.910160e+001  9.000000e+000
      vertex  3.044415e+001  3.715064e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.500000e+001  3.496556e+001  9.000000e+000
      vertex  3.044415e+001  3.715064e+001  9.000000e+000
      vertex  2.700000e+001  3.646556e+001  9.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  9.999999e-001
    outer loop
      vertex  5.500000e+001  5.596556e+001  9.000000e+000
      vertex  2.700000e+001  5.446556e+001  9.000000e+000
      vertex  3.044415e+001  5.378048e+001  9.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.500000e+001  5.596556e+001  9.000000e+000
      vertex  3.044415e+001  5.378048e+001  9.000000e+000
      vertex  3.336396e+001  5.182952e+001  9.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  9.999999e-001
    outer loop
      vertex  5.500000e+001  5.596556e+001  9.000000e+000
      vertex  3.336396e+001  5.182952e+001  9.000000e+000
      vertex  5.500000e+001  3.496556e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  3.113550e+001  5.980351e+001  9.000000e+000
      vertex  2.150000e+001  5.980351e+001  9.000000e+000
      vertex  3.113550e+001  5.980351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  3.113550e+001  5.980351e+001  1.500000e+001
      vertex  2.150000e+001  5.980351e+001  9.000000e+000
      vertex  2.150000e+001  5.980351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  5.650000e+001  5.980351e+001  9.000000e+000
      vertex  3.286450e+001  5.980351e+001  9.000000e+000
      vertex  5.650000e+001  5.980351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  5.650000e+001  5.980351e+001  1.500000e+001
      vertex  3.286450e+001  5.980351e+001  9.000000e+000
      vertex  3.286450e+001  5.980351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  9.999999e-001
    outer loop
      vertex  2.150000e+001  5.980351e+001  9.000000e+000
      vertex  3.113550e+001  5.980351e+001  9.000000e+000
      vertex  3.200000e+001  6.000000e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  2.150000e+001  5.980351e+001  9.000000e+000
      vertex  3.200000e+001  6.000000e+001  9.000000e+000
      vertex  2.650000e+001  6.180351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  2.150000e+001  5.980351e+001  9.000000e+000
      vertex  2.650000e+001  6.180351e+001  9.000000e+000
      vertex  2.650000e+001  8.280350e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  2.150000e+001  5.980351e+001  9.000000e+000
      vertex  2.650000e+001  8.280350e+001  9.000000e+000
      vertex  2.150000e+001  8.480350e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  2.150000e+001  8.480350e+001  9.000000e+000
      vertex  2.650000e+001  8.280350e+001  9.000000e+000
      vertex  5.650000e+001  8.480350e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.650000e+001  8.480350e+001  9.000000e+000
      vertex  2.650000e+001  8.280350e+001  9.000000e+000
      vertex  5.350000e+001  8.280350e+001  9.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.650000e+001  8.480350e+001  9.000000e+000
      vertex  5.350000e+001  8.280350e+001  9.000000e+000
      vertex  5.650000e+001  5.980351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.650000e+001  5.980351e+001  9.000000e+000
      vertex  5.350000e+001  8.280350e+001  9.000000e+000
      vertex  5.350000e+001  6.180351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  5.650000e+001  5.980351e+001  9.000000e+000
      vertex  5.350000e+001  6.180351e+001  9.000000e+000
      vertex  3.286450e+001  5.980351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  3.286450e+001  5.980351e+001  9.000000e+000
      vertex  5.350000e+001  6.180351e+001  9.000000e+000
      vertex  2.650000e+001  6.180351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  3.286450e+001  5.980351e+001  9.000000e+000
      vertex  2.650000e+001  6.180351e+001  9.000000e+000
      vertex  3.200000e+001  6.000000e+001  9.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  1.500000e+001  5.596556e+001  9.000000e+000
      vertex  5.500000e+001  5.596556e+001  9.000000e+000
      vertex  1.500000e+001  5.596556e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  1.500000e+001  5.596556e+001  1.500000e+001
      vertex  5.500000e+001  5.596556e+001  9.000000e+000
      vertex  5.500000e+001  5.596556e+001  1.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  5.500000e+001  3.496556e+001  9.000000e+000
      vertex  5.500000e+001  3.496556e+001  1.500000e+001
      vertex  5.500000e+001  5.596556e+001  9.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  5.500000e+001  5.596556e+001  9.000000e+000
      vertex  5.500000e+001  3.496556e+001  1.500000e+001
      vertex  5.500000e+001  5.596556e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  5.500000e+001  3.496556e+001  9.000000e+000
      vertex  1.500000e+001  3.496556e+001  9.000000e+000
      vertex  5.500000e+001  3.496556e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  5.500000e+001  3.496556e+001  1.500000e+001
      vertex  1.500000e+001  3.496556e+001  9.000000e+000
      vertex  1.500000e+001  3.496556e+001  1.500000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.500000e+001  5.596556e+001  9.000000e+000
      vertex  1.500000e+001  5.596556e+001  1.500000e+001
      vertex  1.500000e+001  3.496556e+001  9.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.500000e+001  3.496556e+001  9.000000e+000
      vertex  1.500000e+001  5.596556e+001  1.500000e+001
      vertex  1.500000e+001  3.496556e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  2.150000e+001  8.480350e+001  9.000000e+000
      vertex  5.650000e+001  8.480350e+001  9.000000e+000
      vertex  2.150000e+001  8.480350e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  2.150000e+001  8.480350e+001  1.500000e+001
      vertex  5.650000e+001  8.480350e+001  9.000000e+000
      vertex  5.650000e+001  8.480350e+001  1.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  5.650000e+001  5.980351e+001  9.000000e+000
      vertex  5.650000e+001  5.980351e+001  1.500000e+001
      vertex  5.650000e+001  8.480350e+001  9.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  5.650000e+001  8.480350e+001  9.000000e+000
      vertex  5.650000e+001  5.980351e+001  1.500000e+001
      vertex  5.650000e+001  8.480350e+001  1.500000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  2.150000e+001  8.480350e+001  9.000000e+000
      vertex  2.150000e+001  8.480350e+001  1.500000e+001
      vertex  2.150000e+001  5.980351e+001  9.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  2.150000e+001  5.980351e+001  9.000000e+000
      vertex  2.150000e+001  8.480350e+001  1.500000e+001
      vertex  2.150000e+001  5.980351e+001  1.500000e+001
    endloop
  endfacet
  facet normal  9.438787e-001  3.302774e-001  3.154700e-003
    outer loop
      vertex  1.398318e+001  4.836493e+001  5.000000e+000
      vertex  1.432239e+001  4.763431e+001 -2.000000e+001
      vertex  1.221455e+001  5.365815e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  8.649853e-001  5.017887e-001 -2.928098e-003
    outer loop
      vertex  1.432239e+001  4.763431e+001 -2.000000e+001
      vertex  1.398318e+001  4.836493e+001  5.000000e+000
      vertex  1.698468e+001  4.319092e+001  5.000000e+000
    endloop
  endfacet
  facet normal  8.467160e-001  5.320270e-001  4.391841e-003
    outer loop
      vertex  1.698468e+001  4.319092e+001  5.000000e+000
      vertex  1.771780e+001  4.223054e+001 -2.000000e+001
      vertex  1.432239e+001  4.763431e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  5.320254e-001  8.467134e-001  5.025124e-003
    outer loop
      vertex  2.634450e+001  3.498446e+001  5.000000e+000
      vertex  2.763431e+001  3.432239e+001 -2.000000e+001
      vertex  2.223054e+001  3.771780e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  3.752294e-001  9.269176e-001 -5.188460e-003
    outer loop
      vertex  2.763431e+001  3.432239e+001 -2.000000e+001
      vertex  2.634450e+001  3.498446e+001  5.000000e+000
      vertex  3.240851e+001  3.252966e+001  5.000000e+000
    endloop
  endfacet
  facet normal  3.302757e-001  9.438733e-001  4.612121e-003
    outer loop
      vertex  3.240851e+001  3.252966e+001  5.000000e+000
      vertex  3.365815e+001  3.221455e+001 -2.000000e+001
      vertex  2.763431e+001  3.432239e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  1.539796e-001  9.880626e-001 -4.757136e-003
    outer loop
      vertex  3.365815e+001  3.221455e+001 -2.000000e+001
      vertex  3.240851e+001  3.252966e+001  5.000000e+000
      vertex  3.887254e+001  3.152231e+001  5.000000e+000
    endloop
  endfacet
  facet normal  1.119634e-001  9.937037e-001  4.162598e-003
    outer loop
      vertex  3.887254e+001  3.152231e+001  5.000000e+000
      vertex  4.000000e+001  3.150000e+001 -2.000000e+001
      vertex  3.365815e+001  3.221455e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -7.538337e-002  9.971454e-001 -4.289545e-003
    outer loop
      vertex  4.000000e+001  3.150000e+001 -2.000000e+001
      vertex  3.887254e+001  3.152231e+001  5.000000e+000
      vertex  4.539597e+001  3.201548e+001  5.000000e+000
    endloop
  endfacet
  facet normal -1.119636e-001  9.937055e-001  3.676811e-003
    outer loop
      vertex  4.539597e+001  3.201548e+001  5.000000e+000
      vertex  4.634185e+001  3.221455e+001 -2.000000e+001
      vertex  4.000000e+001  3.150000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -3.007756e-001  9.536874e-001 -3.785603e-003
    outer loop
      vertex  4.634185e+001  3.221455e+001 -2.000000e+001
      vertex  4.539597e+001  3.201548e+001  5.000000e+000
      vertex  5.163507e+001  3.398318e+001  5.000000e+000
    endloop
  endfacet
  facet normal -3.302775e-001  9.438787e-001  3.154732e-003
    outer loop
      vertex  5.163507e+001  3.398318e+001  5.000000e+000
      vertex  5.236569e+001  3.432239e+001 -2.000000e+001
      vertex  4.634185e+001  3.221455e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -5.103207e-001  8.599781e-001 -3.245346e-003
    outer loop
      vertex  5.236569e+001  3.432239e+001 -2.000000e+001
      vertex  5.163507e+001  3.398318e+001  5.000000e+000
      vertex  5.726112e+001  3.732174e+001  5.000000e+000
    endloop
  endfacet
  facet normal -5.320305e-001  8.467212e-001  2.596312e-003
    outer loop
      vertex  5.726112e+001  3.732174e+001  5.000000e+000
      vertex  5.776946e+001  3.771780e+001 -2.000000e+001
      vertex  5.236569e+001  3.432239e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -6.929764e-001  7.209554e-001 -2.668764e-003
    outer loop
      vertex  5.776946e+001  3.771780e+001 -2.000000e+001
      vertex  5.726112e+001  3.732174e+001  5.000000e+000
      vertex  6.197766e+001  4.185524e+001  5.000000e+000
    endloop
  endfacet
  facet normal -7.071054e-001  7.071054e-001  2.001682e-003
    outer loop
      vertex  6.197766e+001  4.185524e+001  5.000000e+000
      vertex  6.228220e+001  4.223054e+001 -2.000000e+001
      vertex  5.776946e+001  3.771780e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -8.391193e-001  5.439435e-001 -2.055852e-003
    outer loop
      vertex  6.228220e+001  4.223054e+001 -2.000000e+001
      vertex  6.197766e+001  4.185524e+001  5.000000e+000
      vertex  6.553617e+001  4.734480e+001  5.000000e+000
    endloop
  endfacet
  facet normal  5.767055e-001  8.169331e-001 -5.583339e-003
    outer loop
      vertex  2.100000e+001  3.875735e+001  5.000000e+000
      vertex  2.634450e+001  3.498446e+001  5.000000e+000
      vertex  2.223054e+001  3.771780e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  7.070964e-001  7.070967e-001  5.401932e-003
    outer loop
      vertex  2.100000e+001  3.875735e+001  5.000000e+000
      vertex  2.223054e+001  3.771780e+001 -2.000000e+001
      vertex  1.771780e+001  4.223054e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  7.411973e-001  6.712750e-001 -4.051717e-003
    outer loop
      vertex  2.100000e+001  3.875735e+001  5.000000e+000
      vertex  1.771780e+001  4.223054e+001 -2.000000e+001
      vertex  1.698468e+001  4.319092e+001  5.000000e+000
    endloop
  endfacet
  facet normal  9.506710e-001  3.101971e-001 -1.577387e-003
    outer loop
      vertex  1.398318e+001  4.836493e+001  5.000000e+000
      vertex  1.221455e+001  5.365815e+001 -2.000000e+001
      vertex  1.212771e+001  5.405145e+001  5.000000e+000
    endloop
  endfacet
  facet normal  9.937109e-001  1.119644e-001  1.690659e-003
    outer loop
      vertex  1.212771e+001  5.405145e+001  5.000000e+000
      vertex  1.221455e+001  5.365815e+001 -2.000000e+001
      vertex  1.150000e+001  6.000000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  9.944786e-001  1.049400e-001  -0.000000e+000
    outer loop
      vertex  1.212771e+001  5.405145e+001  5.000000e+000
      vertex  1.150000e+001  6.000000e+001 -2.000000e+001
      vertex  1.150000e+001  6.000000e+001  5.000000e+000
    endloop
  endfacet
  facet normal -8.467233e-001  5.320319e-001  1.370650e-003
    outer loop
      vertex  6.228220e+001  4.223054e+001 -2.000000e+001
      vertex  6.553617e+001  4.734480e+001  5.000000e+000
      vertex  6.567761e+001  4.763431e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -9.410479e-001  3.382704e-001 -1.406833e-003
    outer loop
      vertex  6.567761e+001  4.763431e+001 -2.000000e+001
      vertex  6.553617e+001  4.734480e+001  5.000000e+000
      vertex  6.774915e+001  5.350119e+001  5.000000e+000
    endloop
  endfacet
  facet normal -9.438832e-001  3.302791e-001  7.034636e-004
    outer loop
      vertex  6.567761e+001  4.763431e+001 -2.000000e+001
      vertex  6.774915e+001  5.350119e+001  5.000000e+000
      vertex  6.778545e+001  5.365815e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -9.933915e-001  1.147725e-001 -7.215072e-004
    outer loop
      vertex  6.778545e+001  5.365815e+001 -2.000000e+001
      vertex  6.774915e+001  5.350119e+001  5.000000e+000
      vertex  6.850000e+001  6.000000e+001  5.000000e+000
    endloop
  endfacet
  facet normal -9.937122e-001  1.119644e-001  0.000000e+000
    outer loop
      vertex  6.778545e+001  5.365815e+001 -2.000000e+001
      vertex  6.850000e+001  6.000000e+001  5.000000e+000
      vertex  6.850000e+001  6.000000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.350000e+001  8.280350e+001  5.000000e+000
      vertex  5.236569e+001  8.567761e+001  5.000000e+000
      vertex  5.776946e+001  8.228220e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  3.887254e+001  3.152231e+001  5.000000e+000
      vertex  3.240851e+001  3.252966e+001  5.000000e+000
      vertex  3.534651e+001  4.209871e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  3.067423e+001  3.724972e+001  5.000000e+000
      vertex  3.348095e+001  3.922078e+001  5.000000e+000
      vertex  3.240851e+001  3.252966e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  3.348095e+001  3.922078e+001  5.000000e+000
      vertex  3.534651e+001  4.209871e+001  5.000000e+000
      vertex  3.240851e+001  3.252966e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  3.240851e+001  3.252966e+001  5.000000e+000
      vertex  2.634450e+001  3.498446e+001  5.000000e+000
      vertex  3.067423e+001  3.724972e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.394516e+001  3.699986e+001  5.000000e+000
      vertex  2.733395e+001  3.647176e+001  5.000000e+000
      vertex  2.634450e+001  3.498446e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.100000e+001  3.875735e+001  5.000000e+000
      vertex  2.394516e+001  3.699986e+001  5.000000e+000
      vertex  2.634450e+001  3.498446e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  3.067423e+001  3.724972e+001  5.000000e+000
      vertex  2.634450e+001  3.498446e+001  5.000000e+000
      vertex  2.733395e+001  3.647176e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  3.200000e+001  5.600000e+001  5.000000e+000
      vertex  3.044415e+001  5.378048e+001  5.000000e+000
      vertex  2.700000e+001  5.446556e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.100000e+001  3.875735e+001  5.000000e+000
      vertex  1.698468e+001  4.319092e+001  5.000000e+000
      vertex  1.878416e+001  4.179132e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.000000e+001  5.900000e+001  5.000000e+000
      vertex  4.000000e+001  5.700000e+001  5.000000e+000
      vertex  3.341422e+001  5.658578e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.000000e+001  5.900000e+001  5.000000e+000
      vertex  3.341422e+001  5.658578e+001  5.000000e+000
      vertex  3.400000e+001  5.800000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.000000e+001  5.900000e+001  5.000000e+000
      vertex  3.400000e+001  5.800000e+001  5.000000e+000
      vertex  3.341422e+001  5.941422e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.000000e+001  5.900000e+001  5.000000e+000
      vertex  3.341422e+001  5.941422e+001  5.000000e+000
      vertex  3.200000e+001  6.000000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.000000e+001  5.900000e+001  5.000000e+000
      vertex  3.200000e+001  6.000000e+001  5.000000e+000
      vertex  2.650000e+001  6.180351e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.000000e+001  5.900000e+001  5.000000e+000
      vertex  2.650000e+001  6.180351e+001  5.000000e+000
      vertex  5.350000e+001  6.180351e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.000000e+001  5.900000e+001  5.000000e+000
      vertex  5.350000e+001  6.180351e+001  5.000000e+000
      vertex  4.600000e+001  5.900000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.700000e+001  4.780351e+001  5.000000e+000
      vertex  6.300000e+001  4.780351e+001  5.000000e+000
      vertex  6.553617e+001  4.734480e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.700000e+001  4.780351e+001  5.000000e+000
      vertex  6.553617e+001  4.734480e+001  5.000000e+000
      vertex  6.197766e+001  4.185524e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.700000e+001  4.780351e+001  5.000000e+000
      vertex  6.197766e+001  4.185524e+001  5.000000e+000
      vertex  5.726112e+001  3.732174e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.700000e+001  4.780351e+001  5.000000e+000
      vertex  5.726112e+001  3.732174e+001  5.000000e+000
      vertex  5.163507e+001  3.398318e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.650000e+001  8.280350e+001  5.000000e+000
      vertex  2.650000e+001  6.180351e+001  5.000000e+000
      vertex  1.221455e+001  6.634185e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  2.650000e+001  8.280350e+001  5.000000e+000
      vertex  1.221455e+001  6.634185e+001  5.000000e+000
      vertex  1.432239e+001  7.236568e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.650000e+001  8.280350e+001  5.000000e+000
      vertex  1.432239e+001  7.236568e+001  5.000000e+000
      vertex  1.771780e+001  7.776946e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.650000e+001  8.280350e+001  5.000000e+000
      vertex  1.771780e+001  7.776946e+001  5.000000e+000
      vertex  2.223054e+001  8.228220e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.650000e+001  8.280350e+001  5.000000e+000
      vertex  2.223054e+001  8.228220e+001  5.000000e+000
      vertex  2.763431e+001  8.567761e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.650000e+001  8.280350e+001  5.000000e+000
      vertex  2.763431e+001  8.567761e+001  5.000000e+000
      vertex  3.365815e+001  8.778545e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -9.999999e-001
    outer loop
      vertex  2.650000e+001  8.280350e+001  5.000000e+000
      vertex  3.365815e+001  8.778545e+001  5.000000e+000
      vertex  4.000000e+001  8.850000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.650000e+001  8.280350e+001  5.000000e+000
      vertex  4.000000e+001  8.850000e+001  5.000000e+000
      vertex  4.634185e+001  8.778545e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.650000e+001  8.280350e+001  5.000000e+000
      vertex  4.634185e+001  8.778545e+001  5.000000e+000
      vertex  5.236569e+001  8.567761e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.650000e+001  8.280350e+001  5.000000e+000
      vertex  5.236569e+001  8.567761e+001  5.000000e+000
      vertex  5.350000e+001  8.280350e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.212771e+001  5.405145e+001  5.000000e+000
      vertex  1.150000e+001  6.000000e+001  5.000000e+000
      vertex  2.700000e+001  5.446556e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.212771e+001  5.405145e+001  5.000000e+000
      vertex  2.700000e+001  5.446556e+001  5.000000e+000
      vertex  2.355585e+001  5.378048e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.212771e+001  5.405145e+001  5.000000e+000
      vertex  2.355585e+001  5.378048e+001  5.000000e+000
      vertex  2.063604e+001  5.182952e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.212771e+001  5.405145e+001  5.000000e+000
      vertex  2.063604e+001  5.182952e+001  5.000000e+000
      vertex  1.868508e+001  4.890971e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.212771e+001  5.405145e+001  5.000000e+000
      vertex  1.868508e+001  4.890971e+001  5.000000e+000
      vertex  1.398318e+001  4.836493e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -9.999999e-001
    outer loop
      vertex  1.150000e+001  6.000000e+001  5.000000e+000
      vertex  1.221455e+001  6.634185e+001  5.000000e+000
      vertex  2.650000e+001  6.180351e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -9.999999e-001
    outer loop
      vertex  1.150000e+001  6.000000e+001  5.000000e+000
      vertex  2.650000e+001  6.180351e+001  5.000000e+000
      vertex  3.200000e+001  6.000000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.150000e+001  6.000000e+001  5.000000e+000
      vertex  3.200000e+001  6.000000e+001  5.000000e+000
      vertex  3.058579e+001  5.941422e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.150000e+001  6.000000e+001  5.000000e+000
      vertex  3.058579e+001  5.941422e+001  5.000000e+000
      vertex  3.000000e+001  5.800000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.150000e+001  6.000000e+001  5.000000e+000
      vertex  3.000000e+001  5.800000e+001  5.000000e+000
      vertex  3.058579e+001  5.658578e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.150000e+001  6.000000e+001  5.000000e+000
      vertex  3.058579e+001  5.658578e+001  5.000000e+000
      vertex  3.200000e+001  5.600000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.150000e+001  6.000000e+001  5.000000e+000
      vertex  3.200000e+001  5.600000e+001  5.000000e+000
      vertex  2.700000e+001  5.446556e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.600000e+001  5.900000e+001  5.000000e+000
      vertex  5.350000e+001  6.180351e+001  5.000000e+000
      vertex  4.600000e+001  5.700000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.600000e+001  5.700000e+001  5.000000e+000
      vertex  5.350000e+001  6.180351e+001  5.000000e+000
      vertex  5.700000e+001  5.180351e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.700000e+001  5.180351e+001  5.000000e+000
      vertex  5.700000e+001  4.780351e+001  5.000000e+000
      vertex  4.600000e+001  5.700000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.600000e+001  5.700000e+001  5.000000e+000
      vertex  5.700000e+001  4.780351e+001  5.000000e+000
      vertex  5.163507e+001  3.398318e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.600000e+001  5.700000e+001  5.000000e+000
      vertex  5.163507e+001  3.398318e+001  5.000000e+000
      vertex  4.000000e+001  5.700000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.000000e+001  5.700000e+001  5.000000e+000
      vertex  5.163507e+001  3.398318e+001  5.000000e+000
      vertex  4.539597e+001  3.201548e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.000000e+001  5.700000e+001  5.000000e+000
      vertex  4.539597e+001  3.201548e+001  5.000000e+000
      vertex  3.600000e+001  4.546556e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  3.600000e+001  4.546556e+001  5.000000e+000
      vertex  4.539597e+001  3.201548e+001  5.000000e+000
      vertex  3.887254e+001  3.152231e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  3.600000e+001  4.546556e+001  5.000000e+000
      vertex  3.887254e+001  3.152231e+001  5.000000e+000
      vertex  3.534651e+001  4.209871e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  3.044415e+001  5.378048e+001  5.000000e+000
      vertex  3.200000e+001  5.600000e+001  5.000000e+000
      vertex  3.336396e+001  5.182952e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  3.336396e+001  5.182952e+001  5.000000e+000
      vertex  3.200000e+001  5.600000e+001  5.000000e+000
      vertex  3.341422e+001  5.658578e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  3.336396e+001  5.182952e+001  5.000000e+000
      vertex  3.341422e+001  5.658578e+001  5.000000e+000
      vertex  3.531491e+001  4.890971e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  3.531491e+001  4.890971e+001  5.000000e+000
      vertex  3.341422e+001  5.658578e+001  5.000000e+000
      vertex  4.000000e+001  5.700000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  3.531491e+001  4.890971e+001  5.000000e+000
      vertex  4.000000e+001  5.700000e+001  5.000000e+000
      vertex  3.600000e+001  4.546556e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.778545e+001  6.634185e+001  5.000000e+000
      vertex  6.850000e+001  6.000000e+001  5.000000e+000
      vertex  6.567761e+001  7.236568e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.567761e+001  7.236568e+001  5.000000e+000
      vertex  6.850000e+001  6.000000e+001  5.000000e+000
      vertex  6.774915e+001  5.350119e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  6.567761e+001  7.236568e+001  5.000000e+000
      vertex  6.774915e+001  5.350119e+001  5.000000e+000
      vertex  6.228220e+001  7.776946e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.228220e+001  7.776946e+001  5.000000e+000
      vertex  6.774915e+001  5.350119e+001  5.000000e+000
      vertex  6.300000e+001  5.180351e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.228220e+001  7.776946e+001  5.000000e+000
      vertex  6.300000e+001  5.180351e+001  5.000000e+000
      vertex  5.776946e+001  8.228220e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.776946e+001  8.228220e+001  5.000000e+000
      vertex  6.300000e+001  5.180351e+001  5.000000e+000
      vertex  5.700000e+001  5.180351e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.776946e+001  8.228220e+001  5.000000e+000
      vertex  5.700000e+001  5.180351e+001  5.000000e+000
      vertex  5.350000e+001  8.280350e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.350000e+001  8.280350e+001  5.000000e+000
      vertex  5.700000e+001  5.180351e+001  5.000000e+000
      vertex  5.350000e+001  6.180351e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.878416e+001  4.179132e+001  5.000000e+000
      vertex  1.698468e+001  4.319092e+001  5.000000e+000
      vertex  1.800000e+001  4.546556e+001  5.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.800000e+001  4.546556e+001  5.000000e+000
      vertex  1.698468e+001  4.319092e+001  5.000000e+000
      vertex  1.398318e+001  4.836493e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  1.800000e+001  4.546556e+001  5.000000e+000
      vertex  1.398318e+001  4.836493e+001  5.000000e+000
      vertex  1.868508e+001  4.890971e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.300000e+001  5.180351e+001  5.000000e+000
      vertex  6.774915e+001  5.350119e+001  5.000000e+000
      vertex  6.300000e+001  4.780351e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  6.300000e+001  4.780351e+001  5.000000e+000
      vertex  6.774915e+001  5.350119e+001  5.000000e+000
      vertex  6.553617e+001  4.734480e+001  5.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  4.000000e+001  5.900000e+001  1.500000e+001
      vertex  4.000000e+001  5.700000e+001  1.500000e+001
      vertex  4.000000e+001  5.900000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  4.000000e+001  5.900000e+001  5.000000e+000
      vertex  4.000000e+001  5.700000e+001  1.500000e+001
      vertex  4.000000e+001  5.700000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  -0.000000e+000
    outer loop
      vertex  4.600000e+001  5.700000e+001  1.500000e+001
      vertex  4.600000e+001  5.700000e+001  5.000000e+000
      vertex  4.000000e+001  5.700000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  4.000000e+001  5.700000e+001  1.500000e+001
      vertex  4.600000e+001  5.700000e+001  5.000000e+000
      vertex  4.000000e+001  5.700000e+001  5.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  4.600000e+001  5.700000e+001  1.500000e+001
      vertex  4.600000e+001  5.900000e+001  1.500000e+001
      vertex  4.600000e+001  5.700000e+001  5.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  4.600000e+001  5.700000e+001  5.000000e+000
      vertex  4.600000e+001  5.900000e+001  1.500000e+001
      vertex  4.600000e+001  5.900000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  4.000000e+001  5.900000e+001  1.500000e+001
      vertex  4.000000e+001  5.900000e+001  5.000000e+000
      vertex  4.600000e+001  5.900000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  -0.000000e+000
    outer loop
      vertex  4.600000e+001  5.900000e+001  1.500000e+001
      vertex  4.000000e+001  5.900000e+001  5.000000e+000
      vertex  4.600000e+001  5.900000e+001  5.000000e+000
    endloop
  endfacet
  facet normal -3.826822e-001  9.238800e-001  0.000000e+000
    outer loop
      vertex  3.200000e+001  5.600000e+001  5.000000e+000
      vertex  3.341422e+001  5.658578e+001  1.500000e+001
      vertex  3.341422e+001  5.658578e+001  5.000000e+000
    endloop
  endfacet
  facet normal -9.238800e-001  3.826822e-001  0.000000e+000
    outer loop
      vertex  3.341422e+001  5.658578e+001  5.000000e+000
      vertex  3.341422e+001  5.658578e+001  1.500000e+001
      vertex  3.400000e+001  5.800000e+001  1.500000e+001
    endloop
  endfacet
  facet normal -9.238800e-001  3.826822e-001  0.000000e+000
    outer loop
      vertex  3.341422e+001  5.658578e+001  5.000000e+000
      vertex  3.400000e+001  5.800000e+001  1.500000e+001
      vertex  3.400000e+001  5.800000e+001  5.000000e+000
    endloop
  endfacet
  facet normal -3.826822e-001  9.238800e-001  0.000000e+000
    outer loop
      vertex  3.341422e+001  5.658578e+001  1.500000e+001
      vertex  3.200000e+001  5.600000e+001  5.000000e+000
      vertex  3.200000e+001  5.600000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  3.826827e-001  9.238799e-001  0.000000e+000
    outer loop
      vertex  3.200000e+001  5.600000e+001  1.500000e+001
      vertex  3.200000e+001  5.600000e+001  5.000000e+000
      vertex  3.058579e+001  5.658578e+001  5.000000e+000
    endloop
  endfacet
  facet normal  3.826827e-001  9.238799e-001  -0.000000e+000
    outer loop
      vertex  3.200000e+001  5.600000e+001  1.500000e+001
      vertex  3.058579e+001  5.658578e+001  5.000000e+000
      vertex  3.058579e+001  5.658578e+001  1.500000e+001
    endloop
  endfacet
  facet normal  9.238796e-001  3.826833e-001  0.000000e+000
    outer loop
      vertex  3.058579e+001  5.658578e+001  1.500000e+001
      vertex  3.058579e+001  5.658578e+001  5.000000e+000
      vertex  3.000000e+001  5.800000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  9.238796e-001  3.826833e-001  -0.000000e+000
    outer loop
      vertex  3.058579e+001  5.658578e+001  1.500000e+001
      vertex  3.000000e+001  5.800000e+001  5.000000e+000
      vertex  3.000000e+001  5.800000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  1.000000e+001  9.500000e+001  1.500000e+001
      vertex  7.000000e+001  9.500000e+001  1.500000e+001
      vertex  1.000000e+001  9.500000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  1.000000e+001  9.500000e+001  3.000000e+001
      vertex  7.000000e+001  9.500000e+001  1.500000e+001
      vertex  7.000000e+001  9.500000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  7.000000e+001  2.500000e+001  1.500000e+001
      vertex  1.000000e+001  2.500000e+001  1.500000e+001
      vertex  7.000000e+001  2.500000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  7.000000e+001  2.500000e+001  3.000000e+001
      vertex  1.000000e+001  2.500000e+001  1.500000e+001
      vertex  1.000000e+001  2.500000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.000000e+001  9.500000e+001  1.500000e+001
      vertex  1.000000e+001  9.500000e+001  3.000000e+001
      vertex  1.000000e+001  2.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.000000e+001  2.500000e+001  1.500000e+001
      vertex  1.000000e+001  9.500000e+001  3.000000e+001
      vertex  1.000000e+001  2.500000e+001  3.000000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.500000e+001 -1.200000e+002
      vertex  8.000000e+001  1.500000e+001 -1.200000e+002
      vertex  0.000000e+000  0.000000e+000 -1.200000e+002
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  0.000000e+000 -1.200000e+002
      vertex  8.000000e+001  1.500000e+001 -1.200000e+002
      vertex  8.000000e+001  0.000000e+000 -1.200000e+002
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.200000e+002 -1.200000e+002
      vertex  8.000000e+001  1.200000e+002 -1.200000e+002
      vertex  0.000000e+000  1.050000e+002 -1.200000e+002
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.050000e+002 -1.200000e+002
      vertex  8.000000e+001  1.200000e+002 -1.200000e+002
      vertex  8.000000e+001  1.050000e+002 -1.200000e+002
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  8.000000e+001  1.200000e+002 -1.200000e+002
      vertex  0.000000e+000  1.200000e+002 -1.200000e+002
      vertex  8.000000e+001  1.200000e+002  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  8.000000e+001  1.200000e+002  3.000000e+001
      vertex  0.000000e+000  1.200000e+002 -1.200000e+002
      vertex  0.000000e+000  1.200000e+002  3.000000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  0.000000e+000  1.500000e+001 -1.200000e+002
      vertex  0.000000e+000  0.000000e+000 -1.200000e+002
      vertex  0.000000e+000  1.500000e+001  0.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  0.000000e+000  1.500000e+001  0.000000e+000
      vertex  0.000000e+000  0.000000e+000 -1.200000e+002
      vertex  0.000000e+000  0.000000e+000  3.000000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  0.000000e+000  1.500000e+001  0.000000e+000
      vertex  0.000000e+000  0.000000e+000  3.000000e+001
      vertex  0.000000e+000  1.050000e+002  0.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  0.000000e+000  1.050000e+002  0.000000e+000
      vertex  0.000000e+000  0.000000e+000  3.000000e+001
      vertex  0.000000e+000  1.200000e+002  3.000000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  0.000000e+000  1.050000e+002  0.000000e+000
      vertex  0.000000e+000  1.200000e+002  3.000000e+001
      vertex  0.000000e+000  1.050000e+002 -1.200000e+002
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  0.000000e+000  1.050000e+002 -1.200000e+002
      vertex  0.000000e+000  1.200000e+002  3.000000e+001
      vertex  0.000000e+000  1.200000e+002 -1.200000e+002
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  0.000000e+000  0.000000e+000 -1.200000e+002
      vertex  8.000000e+001  0.000000e+000 -1.200000e+002
      vertex  0.000000e+000  0.000000e+000  3.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  0.000000e+000  0.000000e+000  3.000000e+001
      vertex  8.000000e+001  0.000000e+000 -1.200000e+002
      vertex  8.000000e+001  0.000000e+000  3.000000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  8.000000e+001  0.000000e+000 -1.200000e+002
      vertex  8.000000e+001  1.500000e+001 -1.200000e+002
      vertex  8.000000e+001  0.000000e+000  3.000000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  8.000000e+001  0.000000e+000  3.000000e+001
      vertex  8.000000e+001  1.500000e+001 -1.200000e+002
      vertex  8.000000e+001  1.500000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  -0.000000e+000
    outer loop
      vertex  8.000000e+001  0.000000e+000  3.000000e+001
      vertex  8.000000e+001  1.500000e+001  0.000000e+000
      vertex  8.000000e+001  1.200000e+002  3.000000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  8.000000e+001  1.200000e+002  3.000000e+001
      vertex  8.000000e+001  1.500000e+001  0.000000e+000
      vertex  8.000000e+001  1.050000e+002  0.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  8.000000e+001  1.200000e+002  3.000000e+001
      vertex  8.000000e+001  1.050000e+002  0.000000e+000
      vertex  8.000000e+001  1.200000e+002 -1.200000e+002
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  8.000000e+001  1.200000e+002 -1.200000e+002
      vertex  8.000000e+001  1.050000e+002  0.000000e+000
      vertex  8.000000e+001  1.050000e+002 -1.200000e+002
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  -0.000000e+000
    outer loop
      vertex  8.000000e+001  1.500000e+001  0.000000e+000
      vertex  8.000000e+001  1.500000e+001 -1.200000e+002
      vertex  0.000000e+000  1.500000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  0.000000e+000  1.500000e+001  0.000000e+000
      vertex  8.000000e+001  1.500000e+001 -1.200000e+002
      vertex  0.000000e+000  1.500000e+001 -1.200000e+002
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  0.000000e+000  1.050000e+002  0.000000e+000
      vertex  0.000000e+000  1.050000e+002 -1.200000e+002
      vertex  8.000000e+001  1.050000e+002  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  -0.000000e+000
    outer loop
      vertex  8.000000e+001  1.050000e+002  0.000000e+000
      vertex  0.000000e+000  1.050000e+002 -1.200000e+002
      vertex  8.000000e+001  1.050000e+002 -1.200000e+002
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.050000e+002  0.000000e+000
      vertex  8.000000e+001  1.050000e+002  0.000000e+000
      vertex  4.000000e+001  9.150000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.050000e+002  0.000000e+000
      vertex  4.000000e+001  9.150000e+001  0.000000e+000
      vertex  3.299059e+001  9.071023e+001  0.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  0.000000e+000  1.050000e+002  0.000000e+000
      vertex  3.299059e+001  9.071023e+001  0.000000e+000
      vertex  2.633266e+001  8.838052e+001  0.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.050000e+002  0.000000e+000
      vertex  2.633266e+001  8.838052e+001  0.000000e+000
      vertex  2.036007e+001  8.462769e+001  0.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.050000e+002  0.000000e+000
      vertex  2.036007e+001  8.462769e+001  0.000000e+000
      vertex  1.537231e+001  7.963993e+001  0.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.050000e+002  0.000000e+000
      vertex  1.537231e+001  7.963993e+001  0.000000e+000
      vertex  1.161948e+001  7.366734e+001  0.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.050000e+002  0.000000e+000
      vertex  1.161948e+001  7.366734e+001  0.000000e+000
      vertex  9.289771e+000  6.700941e+001  0.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.050000e+002  0.000000e+000
      vertex  9.289771e+000  6.700941e+001  0.000000e+000
      vertex  0.000000e+000  1.500000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.500000e+001  0.000000e+000
      vertex  9.289771e+000  6.700941e+001  0.000000e+000
      vertex  8.500000e+000  6.000000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -9.999999e-001
    outer loop
      vertex  0.000000e+000  1.500000e+001  0.000000e+000
      vertex  8.500000e+000  6.000000e+001  0.000000e+000
      vertex  9.289771e+000  5.299059e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.500000e+001  0.000000e+000
      vertex  9.289771e+000  5.299059e+001  0.000000e+000
      vertex  1.161948e+001  4.633266e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.500000e+001  0.000000e+000
      vertex  1.161948e+001  4.633266e+001  0.000000e+000
      vertex  1.537231e+001  4.036007e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.500000e+001  0.000000e+000
      vertex  1.537231e+001  4.036007e+001  0.000000e+000
      vertex  2.036007e+001  3.537231e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.500000e+001  0.000000e+000
      vertex  2.036007e+001  3.537231e+001  0.000000e+000
      vertex  2.633266e+001  3.161948e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.500000e+001  0.000000e+000
      vertex  2.633266e+001  3.161948e+001  0.000000e+000
      vertex  3.299059e+001  2.928977e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.500000e+001  0.000000e+000
      vertex  3.299059e+001  2.928977e+001  0.000000e+000
      vertex  4.000000e+001  2.850000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  1.500000e+001  0.000000e+000
      vertex  4.000000e+001  2.850000e+001  0.000000e+000
      vertex  8.000000e+001  1.500000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.000000e+001  1.500000e+001  0.000000e+000
      vertex  4.000000e+001  2.850000e+001  0.000000e+000
      vertex  4.700941e+001  2.928977e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.000000e+001  1.500000e+001  0.000000e+000
      vertex  4.700941e+001  2.928977e+001  0.000000e+000
      vertex  5.366734e+001  3.161948e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.000000e+001  1.500000e+001  0.000000e+000
      vertex  5.366734e+001  3.161948e+001  0.000000e+000
      vertex  5.963993e+001  3.537231e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.000000e+001  1.500000e+001  0.000000e+000
      vertex  5.963993e+001  3.537231e+001  0.000000e+000
      vertex  6.462769e+001  4.036007e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.000000e+001  1.500000e+001  0.000000e+000
      vertex  6.462769e+001  4.036007e+001  0.000000e+000
      vertex  6.838052e+001  4.633266e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.000000e+001  1.500000e+001  0.000000e+000
      vertex  6.838052e+001  4.633266e+001  0.000000e+000
      vertex  7.071023e+001  5.299059e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.000000e+001  1.500000e+001  0.000000e+000
      vertex  7.071023e+001  5.299059e+001  0.000000e+000
      vertex  7.150000e+001  6.000000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.000000e+001  1.500000e+001  0.000000e+000
      vertex  7.150000e+001  6.000000e+001  0.000000e+000
      vertex  7.071023e+001  6.700941e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.000000e+001  1.050000e+002  0.000000e+000
      vertex  8.000000e+001  1.500000e+001  0.000000e+000
      vertex  7.071023e+001  6.700941e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.000000e+001  1.050000e+002  0.000000e+000
      vertex  7.071023e+001  6.700941e+001  0.000000e+000
      vertex  6.838052e+001  7.366734e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.000000e+001  1.050000e+002  0.000000e+000
      vertex  6.838052e+001  7.366734e+001  0.000000e+000
      vertex  6.462769e+001  7.963993e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.000000e+001  1.050000e+002  0.000000e+000
      vertex  6.462769e+001  7.963993e+001  0.000000e+000
      vertex  5.963993e+001  8.462769e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.000000e+001  1.050000e+002  0.000000e+000
      vertex  5.963993e+001  8.462769e+001  0.000000e+000
      vertex  5.366734e+001  8.838052e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.000000e+001  1.050000e+002  0.000000e+000
      vertex  5.366734e+001  8.838052e+001  0.000000e+000
      vertex  4.700941e+001  9.071023e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.000000e+001  1.050000e+002  0.000000e+000
      vertex  4.700941e+001  9.071023e+001  0.000000e+000
      vertex  4.000000e+001  9.150000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.223054e+001  3.771780e+001 -2.000000e+001
      vertex  1.537231e+001  4.036007e+001 -2.000000e+001
      vertex  1.771780e+001  4.223054e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.366734e+001  3.161948e+001 -2.000000e+001
      vertex  4.000000e+001  3.150000e+001 -2.000000e+001
      vertex  4.634185e+001  3.221455e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.366734e+001  3.161948e+001 -2.000000e+001
      vertex  4.700941e+001  2.928977e+001 -2.000000e+001
      vertex  4.000000e+001  3.150000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.000000e+001  3.150000e+001 -2.000000e+001
      vertex  4.700941e+001  2.928977e+001 -2.000000e+001
      vertex  4.000000e+001  2.850000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.000000e+001  3.150000e+001 -2.000000e+001
      vertex  4.000000e+001  2.850000e+001 -2.000000e+001
      vertex  2.633266e+001  3.161948e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.633266e+001  3.161948e+001 -2.000000e+001
      vertex  4.000000e+001  2.850000e+001 -2.000000e+001
      vertex  3.299059e+001  2.928977e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.537231e+001  4.036007e+001 -2.000000e+001
      vertex  2.223054e+001  3.771780e+001 -2.000000e+001
      vertex  2.036007e+001  3.537231e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.036007e+001  3.537231e+001 -2.000000e+001
      vertex  2.223054e+001  3.771780e+001 -2.000000e+001
      vertex  2.763431e+001  3.432239e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.036007e+001  3.537231e+001 -2.000000e+001
      vertex  2.763431e+001  3.432239e+001 -2.000000e+001
      vertex  2.633266e+001  3.161948e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.633266e+001  3.161948e+001 -2.000000e+001
      vertex  2.763431e+001  3.432239e+001 -2.000000e+001
      vertex  3.365815e+001  3.221455e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.633266e+001  3.161948e+001 -2.000000e+001
      vertex  3.365815e+001  3.221455e+001 -2.000000e+001
      vertex  4.000000e+001  3.150000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.771780e+001  4.223054e+001 -2.000000e+001
      vertex  1.537231e+001  4.036007e+001 -2.000000e+001
      vertex  1.432239e+001  4.763431e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.432239e+001  4.763431e+001 -2.000000e+001
      vertex  1.537231e+001  4.036007e+001 -2.000000e+001
      vertex  1.161948e+001  4.633266e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.432239e+001  4.763431e+001 -2.000000e+001
      vertex  1.161948e+001  4.633266e+001 -2.000000e+001
      vertex  1.221455e+001  5.365815e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.221455e+001  5.365815e+001 -2.000000e+001
      vertex  1.161948e+001  4.633266e+001 -2.000000e+001
      vertex  9.289771e+000  5.299059e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.221455e+001  5.365815e+001 -2.000000e+001
      vertex  9.289771e+000  5.299059e+001 -2.000000e+001
      vertex  1.150000e+001  6.000000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.150000e+001  6.000000e+001 -2.000000e+001
      vertex  9.289771e+000  5.299059e+001 -2.000000e+001
      vertex  8.500000e+000  6.000000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.150000e+001  6.000000e+001 -2.000000e+001
      vertex  8.500000e+000  6.000000e+001 -2.000000e+001
      vertex  1.221455e+001  6.634185e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.221455e+001  6.634185e+001 -2.000000e+001
      vertex  8.500000e+000  6.000000e+001 -2.000000e+001
      vertex  9.289771e+000  6.700941e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.221455e+001  6.634185e+001 -2.000000e+001
      vertex  9.289771e+000  6.700941e+001 -2.000000e+001
      vertex  1.432239e+001  7.236568e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.432239e+001  7.236568e+001 -2.000000e+001
      vertex  9.289771e+000  6.700941e+001 -2.000000e+001
      vertex  1.161948e+001  7.366734e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.432239e+001  7.236568e+001 -2.000000e+001
      vertex  1.161948e+001  7.366734e+001 -2.000000e+001
      vertex  1.771780e+001  7.776946e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.771780e+001  7.776946e+001 -2.000000e+001
      vertex  1.161948e+001  7.366734e+001 -2.000000e+001
      vertex  1.537231e+001  7.963993e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.771780e+001  7.776946e+001 -2.000000e+001
      vertex  1.537231e+001  7.963993e+001 -2.000000e+001
      vertex  2.223054e+001  8.228220e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.223054e+001  8.228220e+001 -2.000000e+001
      vertex  1.537231e+001  7.963993e+001 -2.000000e+001
      vertex  2.036007e+001  8.462769e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.223054e+001  8.228220e+001 -2.000000e+001
      vertex  2.036007e+001  8.462769e+001 -2.000000e+001
      vertex  2.763431e+001  8.567761e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.763431e+001  8.567761e+001 -2.000000e+001
      vertex  2.036007e+001  8.462769e+001 -2.000000e+001
      vertex  3.365815e+001  8.778545e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  3.365815e+001  8.778545e+001 -2.000000e+001
      vertex  2.036007e+001  8.462769e+001 -2.000000e+001
      vertex  2.633266e+001  8.838052e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  3.365815e+001  8.778545e+001 -2.000000e+001
      vertex  2.633266e+001  8.838052e+001 -2.000000e+001
      vertex  4.000000e+001  8.850000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  2.633266e+001  8.838052e+001 -2.000000e+001
      vertex  3.299059e+001  9.071023e+001 -2.000000e+001
      vertex  4.000000e+001  8.850000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.000000e+001  8.850000e+001 -2.000000e+001
      vertex  3.299059e+001  9.071023e+001 -2.000000e+001
      vertex  4.000000e+001  9.150000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  4.000000e+001  8.850000e+001 -2.000000e+001
      vertex  4.000000e+001  9.150000e+001 -2.000000e+001
      vertex  5.366734e+001  8.838052e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.366734e+001  8.838052e+001 -2.000000e+001
      vertex  4.000000e+001  9.150000e+001 -2.000000e+001
      vertex  4.700941e+001  9.071023e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.366734e+001  3.161948e+001 -2.000000e+001
      vertex  4.634185e+001  3.221455e+001 -2.000000e+001
      vertex  5.963993e+001  3.537231e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.963993e+001  3.537231e+001 -2.000000e+001
      vertex  4.634185e+001  3.221455e+001 -2.000000e+001
      vertex  5.236569e+001  3.432239e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  5.963993e+001  3.537231e+001 -2.000000e+001
      vertex  5.236569e+001  3.432239e+001 -2.000000e+001
      vertex  6.462769e+001  4.036007e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.462769e+001  4.036007e+001 -2.000000e+001
      vertex  5.236569e+001  3.432239e+001 -2.000000e+001
      vertex  5.776946e+001  3.771780e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.462769e+001  4.036007e+001 -2.000000e+001
      vertex  5.776946e+001  3.771780e+001 -2.000000e+001
      vertex  6.228220e+001  4.223054e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.462769e+001  4.036007e+001 -2.000000e+001
      vertex  6.228220e+001  4.223054e+001 -2.000000e+001
      vertex  6.838052e+001  4.633266e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.838052e+001  4.633266e+001 -2.000000e+001
      vertex  6.228220e+001  4.223054e+001 -2.000000e+001
      vertex  6.567761e+001  4.763431e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  6.838052e+001  4.633266e+001 -2.000000e+001
      vertex  6.567761e+001  4.763431e+001 -2.000000e+001
      vertex  7.071023e+001  5.299059e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  7.071023e+001  5.299059e+001 -2.000000e+001
      vertex  6.567761e+001  4.763431e+001 -2.000000e+001
      vertex  6.778545e+001  5.365815e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  7.071023e+001  5.299059e+001 -2.000000e+001
      vertex  6.778545e+001  5.365815e+001 -2.000000e+001
      vertex  7.150000e+001  6.000000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  7.150000e+001  6.000000e+001 -2.000000e+001
      vertex  6.778545e+001  5.365815e+001 -2.000000e+001
      vertex  6.850000e+001  6.000000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  7.150000e+001  6.000000e+001 -2.000000e+001
      vertex  6.850000e+001  6.000000e+001 -2.000000e+001
      vertex  7.071023e+001  6.700941e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  7.071023e+001  6.700941e+001 -2.000000e+001
      vertex  6.850000e+001  6.000000e+001 -2.000000e+001
      vertex  6.778545e+001  6.634185e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  7.071023e+001  6.700941e+001 -2.000000e+001
      vertex  6.778545e+001  6.634185e+001 -2.000000e+001
      vertex  6.838052e+001  7.366734e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.838052e+001  7.366734e+001 -2.000000e+001
      vertex  6.778545e+001  6.634185e+001 -2.000000e+001
      vertex  6.567761e+001  7.236568e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.838052e+001  7.366734e+001 -2.000000e+001
      vertex  6.567761e+001  7.236568e+001 -2.000000e+001
      vertex  6.462769e+001  7.963993e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.462769e+001  7.963993e+001 -2.000000e+001
      vertex  6.567761e+001  7.236568e+001 -2.000000e+001
      vertex  6.228220e+001  7.776946e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.462769e+001  7.963993e+001 -2.000000e+001
      vertex  6.228220e+001  7.776946e+001 -2.000000e+001
      vertex  5.963993e+001  8.462769e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.963993e+001  8.462769e+001 -2.000000e+001
      vertex  6.228220e+001  7.776946e+001 -2.000000e+001
      vertex  5.776946e+001  8.228220e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.963993e+001  8.462769e+001 -2.000000e+001
      vertex  5.776946e+001  8.228220e+001 -2.000000e+001
      vertex  5.236569e+001  8.567761e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.963993e+001  8.462769e+001 -2.000000e+001
      vertex  5.236569e+001  8.567761e+001 -2.000000e+001
      vertex  5.366734e+001  8.838052e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.366734e+001  8.838052e+001 -2.000000e+001
      vertex  5.236569e+001  8.567761e+001 -2.000000e+001
      vertex  4.634185e+001  8.778545e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.366734e+001  8.838052e+001 -2.000000e+001
      vertex  4.634185e+001  8.778545e+001 -2.000000e+001
      vertex  4.000000e+001  8.850000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -1.119644e-001 -9.937122e-001  0.000000e+000
    outer loop
      vertex  4.000000e+001  8.850000e+001  5.000000e+000
      vertex  4.634185e+001  8.778545e+001 -2.000000e+001
      vertex  4.634185e+001  8.778545e+001  5.000000e+000
    endloop
  endfacet
  facet normal -3.302791e-001 -9.438834e-001  -0.000000e+000
    outer loop
      vertex  4.634185e+001  8.778545e+001  5.000000e+000
      vertex  4.634185e+001  8.778545e+001 -2.000000e+001
      vertex  5.236569e+001  8.567761e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -3.302791e-001 -9.438834e-001  0.000000e+000
    outer loop
      vertex  4.634185e+001  8.778545e+001  5.000000e+000
      vertex  5.236569e+001  8.567761e+001 -2.000000e+001
      vertex  5.236569e+001  8.567761e+001  5.000000e+000
    endloop
  endfacet
  facet normal -5.320323e-001 -8.467240e-001  -0.000000e+000
    outer loop
      vertex  5.236569e+001  8.567761e+001  5.000000e+000
      vertex  5.236569e+001  8.567761e+001 -2.000000e+001
      vertex  5.776946e+001  8.228220e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -5.320323e-001 -8.467240e-001  0.000000e+000
    outer loop
      vertex  5.236569e+001  8.567761e+001  5.000000e+000
      vertex  5.776946e+001  8.228220e+001 -2.000000e+001
      vertex  5.776946e+001  8.228220e+001  5.000000e+000
    endloop
  endfacet
  facet normal -7.071065e-001 -7.071071e-001  -0.000000e+000
    outer loop
      vertex  5.776946e+001  8.228220e+001  5.000000e+000
      vertex  5.776946e+001  8.228220e+001 -2.000000e+001
      vertex  6.228220e+001  7.776946e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -7.071065e-001 -7.071071e-001  0.000000e+000
    outer loop
      vertex  5.776946e+001  8.228220e+001  5.000000e+000
      vertex  6.228220e+001  7.776946e+001 -2.000000e+001
      vertex  6.228220e+001  7.776946e+001  5.000000e+000
    endloop
  endfacet
  facet normal -8.467244e-001 -5.320318e-001  -0.000000e+000
    outer loop
      vertex  6.228220e+001  7.776946e+001  5.000000e+000
      vertex  6.228220e+001  7.776946e+001 -2.000000e+001
      vertex  6.567761e+001  7.236568e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -8.467244e-001 -5.320318e-001  0.000000e+000
    outer loop
      vertex  6.228220e+001  7.776946e+001  5.000000e+000
      vertex  6.567761e+001  7.236568e+001 -2.000000e+001
      vertex  6.567761e+001  7.236568e+001  5.000000e+000
    endloop
  endfacet
  facet normal -9.438832e-001 -3.302795e-001  -0.000000e+000
    outer loop
      vertex  6.567761e+001  7.236568e+001  5.000000e+000
      vertex  6.567761e+001  7.236568e+001 -2.000000e+001
      vertex  6.778545e+001  6.634185e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -9.438832e-001 -3.302795e-001  0.000000e+000
    outer loop
      vertex  6.567761e+001  7.236568e+001  5.000000e+000
      vertex  6.778545e+001  6.634185e+001 -2.000000e+001
      vertex  6.778545e+001  6.634185e+001  5.000000e+000
    endloop
  endfacet
  facet normal -9.937123e-001 -1.119643e-001  -0.000000e+000
    outer loop
      vertex  6.778545e+001  6.634185e+001  5.000000e+000
      vertex  6.778545e+001  6.634185e+001 -2.000000e+001
      vertex  6.850000e+001  6.000000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -9.937123e-001 -1.119643e-001  0.000000e+000
    outer loop
      vertex  6.778545e+001  6.634185e+001  5.000000e+000
      vertex  6.850000e+001  6.000000e+001 -2.000000e+001
      vertex  6.850000e+001  6.000000e+001  5.000000e+000
    endloop
  endfacet
  facet normal -1.119644e-001 -9.937122e-001  -0.000000e+000
    outer loop
      vertex  4.634185e+001  8.778545e+001 -2.000000e+001
      vertex  4.000000e+001  8.850000e+001  5.000000e+000
      vertex  4.000000e+001  8.850000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  1.119644e-001 -9.937122e-001  0.000000e+000
    outer loop
      vertex  4.000000e+001  8.850000e+001 -2.000000e+001
      vertex  4.000000e+001  8.850000e+001  5.000000e+000
      vertex  3.365815e+001  8.778545e+001  5.000000e+000
    endloop
  endfacet
  facet normal  1.119644e-001 -9.937122e-001  0.000000e+000
    outer loop
      vertex  4.000000e+001  8.850000e+001 -2.000000e+001
      vertex  3.365815e+001  8.778545e+001  5.000000e+000
      vertex  3.365815e+001  8.778545e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  3.302793e-001 -9.438834e-001  0.000000e+000
    outer loop
      vertex  3.365815e+001  8.778545e+001 -2.000000e+001
      vertex  3.365815e+001  8.778545e+001  5.000000e+000
      vertex  2.763431e+001  8.567761e+001  5.000000e+000
    endloop
  endfacet
  facet normal  3.302793e-001 -9.438834e-001  0.000000e+000
    outer loop
      vertex  3.365815e+001  8.778545e+001 -2.000000e+001
      vertex  2.763431e+001  8.567761e+001  5.000000e+000
      vertex  2.763431e+001  8.567761e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  5.320321e-001 -8.467241e-001  0.000000e+000
    outer loop
      vertex  2.763431e+001  8.567761e+001 -2.000000e+001
      vertex  2.763431e+001  8.567761e+001  5.000000e+000
      vertex  2.223054e+001  8.228220e+001  5.000000e+000
    endloop
  endfacet
  facet normal  5.320321e-001 -8.467241e-001  0.000000e+000
    outer loop
      vertex  2.763431e+001  8.567761e+001 -2.000000e+001
      vertex  2.223054e+001  8.228220e+001  5.000000e+000
      vertex  2.223054e+001  8.228220e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  7.071064e-001 -7.071073e-001  0.000000e+000
    outer loop
      vertex  2.223054e+001  8.228220e+001 -2.000000e+001
      vertex  2.223054e+001  8.228220e+001  5.000000e+000
      vertex  1.771780e+001  7.776946e+001  5.000000e+000
    endloop
  endfacet
  facet normal  7.071064e-001 -7.071073e-001  0.000000e+000
    outer loop
      vertex  2.223054e+001  8.228220e+001 -2.000000e+001
      vertex  1.771780e+001  7.776946e+001  5.000000e+000
      vertex  1.771780e+001  7.776946e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  8.467246e-001 -5.320316e-001  0.000000e+000
    outer loop
      vertex  1.771780e+001  7.776946e+001 -2.000000e+001
      vertex  1.771780e+001  7.776946e+001  5.000000e+000
      vertex  1.432239e+001  7.236568e+001  5.000000e+000
    endloop
  endfacet
  facet normal  8.467246e-001 -5.320316e-001  0.000000e+000
    outer loop
      vertex  1.771780e+001  7.776946e+001 -2.000000e+001
      vertex  1.432239e+001  7.236568e+001  5.000000e+000
      vertex  1.432239e+001  7.236568e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  9.438832e-001 -3.302794e-001  0.000000e+000
    outer loop
      vertex  1.432239e+001  7.236568e+001 -2.000000e+001
      vertex  1.432239e+001  7.236568e+001  5.000000e+000
      vertex  1.221455e+001  6.634185e+001  5.000000e+000
    endloop
  endfacet
  facet normal  9.438832e-001 -3.302794e-001  0.000000e+000
    outer loop
      vertex  1.432239e+001  7.236568e+001 -2.000000e+001
      vertex  1.221455e+001  6.634185e+001  5.000000e+000
      vertex  1.221455e+001  6.634185e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  9.937123e-001 -1.119644e-001  0.000000e+000
    outer loop
      vertex  1.221455e+001  6.634185e+001 -2.000000e+001
      vertex  1.221455e+001  6.634185e+001  5.000000e+000
      vertex  1.150000e+001  6.000000e+001  5.000000e+000
    endloop
  endfacet
  facet normal  9.937123e-001 -1.119644e-001  0.000000e+000
    outer loop
      vertex  1.221455e+001  6.634185e+001 -2.000000e+001
      vertex  1.150000e+001  6.000000e+001  5.000000e+000
      vertex  1.150000e+001  6.000000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  9.937122e-001  1.119647e-001  -0.000000e+000
    outer loop
      vertex  7.150000e+001  6.000000e+001  0.000000e+000
      vertex  7.150000e+001  6.000000e+001 -2.000000e+001
      vertex  7.071023e+001  6.700941e+001  0.000000e+000
    endloop
  endfacet
  facet normal  9.937122e-001  1.119647e-001  0.000000e+000
    outer loop
      vertex  7.071023e+001  6.700941e+001  0.000000e+000
      vertex  7.150000e+001  6.000000e+001 -2.000000e+001
      vertex  7.071023e+001  6.700941e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  9.438832e-001  3.302793e-001  -0.000000e+000
    outer loop
      vertex  7.071023e+001  6.700941e+001  0.000000e+000
      vertex  7.071023e+001  6.700941e+001 -2.000000e+001
      vertex  6.838052e+001  7.366734e+001  0.000000e+000
    endloop
  endfacet
  facet normal  9.438832e-001  3.302793e-001  0.000000e+000
    outer loop
      vertex  6.838052e+001  7.366734e+001  0.000000e+000
      vertex  7.071023e+001  6.700941e+001 -2.000000e+001
      vertex  6.838052e+001  7.366734e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  8.467246e-001  5.320313e-001  -0.000000e+000
    outer loop
      vertex  6.838052e+001  7.366734e+001  0.000000e+000
      vertex  6.838052e+001  7.366734e+001 -2.000000e+001
      vertex  6.462769e+001  7.963993e+001  0.000000e+000
    endloop
  endfacet
  facet normal  8.467246e-001  5.320313e-001  0.000000e+000
    outer loop
      vertex  6.462769e+001  7.963993e+001  0.000000e+000
      vertex  6.838052e+001  7.366734e+001 -2.000000e+001
      vertex  6.462769e+001  7.963993e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  7.071065e-001  7.071071e-001  -0.000000e+000
    outer loop
      vertex  6.462769e+001  7.963993e+001  0.000000e+000
      vertex  6.462769e+001  7.963993e+001 -2.000000e+001
      vertex  5.963993e+001  8.462769e+001  0.000000e+000
    endloop
  endfacet
  facet normal  7.071065e-001  7.071071e-001  0.000000e+000
    outer loop
      vertex  5.963993e+001  8.462769e+001  0.000000e+000
      vertex  6.462769e+001  7.963993e+001 -2.000000e+001
      vertex  5.963993e+001  8.462769e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  5.320318e-001  8.467243e-001  -0.000000e+000
    outer loop
      vertex  5.963993e+001  8.462769e+001  0.000000e+000
      vertex  5.963993e+001  8.462769e+001 -2.000000e+001
      vertex  5.366734e+001  8.838052e+001  0.000000e+000
    endloop
  endfacet
  facet normal  5.320318e-001  8.467243e-001  0.000000e+000
    outer loop
      vertex  5.366734e+001  8.838052e+001  0.000000e+000
      vertex  5.963993e+001  8.462769e+001 -2.000000e+001
      vertex  5.366734e+001  8.838052e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  3.302793e-001  9.438832e-001  -0.000000e+000
    outer loop
      vertex  5.366734e+001  8.838052e+001  0.000000e+000
      vertex  5.366734e+001  8.838052e+001 -2.000000e+001
      vertex  4.700941e+001  9.071023e+001  0.000000e+000
    endloop
  endfacet
  facet normal  3.302793e-001  9.438832e-001  0.000000e+000
    outer loop
      vertex  4.700941e+001  9.071023e+001  0.000000e+000
      vertex  5.366734e+001  8.838052e+001 -2.000000e+001
      vertex  4.700941e+001  9.071023e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  1.119646e-001  9.937122e-001  -0.000000e+000
    outer loop
      vertex  4.700941e+001  9.071023e+001  0.000000e+000
      vertex  4.700941e+001  9.071023e+001 -2.000000e+001
      vertex  4.000000e+001  9.150000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  1.119646e-001  9.937122e-001  0.000000e+000
    outer loop
      vertex  4.000000e+001  9.150000e+001  0.000000e+000
      vertex  4.700941e+001  9.071023e+001 -2.000000e+001
      vertex  4.000000e+001  9.150000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -1.119646e-001  9.937122e-001  0.000000e+000
    outer loop
      vertex  4.000000e+001  9.150000e+001  0.000000e+000
      vertex  4.000000e+001  9.150000e+001 -2.000000e+001
      vertex  3.299059e+001  9.071023e+001  0.000000e+000
    endloop
  endfacet
  facet normal -1.119646e-001  9.937122e-001  0.000000e+000
    outer loop
      vertex  3.299059e+001  9.071023e+001  0.000000e+000
      vertex  4.000000e+001  9.150000e+001 -2.000000e+001
      vertex  3.299059e+001  9.071023e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -3.302794e-001  9.438832e-001  0.000000e+000
    outer loop
      vertex  3.299059e+001  9.071023e+001  0.000000e+000
      vertex  3.299059e+001  9.071023e+001 -2.000000e+001
      vertex  2.633266e+001  8.838052e+001  0.000000e+000
    endloop
  endfacet
  facet normal -3.302794e-001  9.438832e-001  0.000000e+000
    outer loop
      vertex  2.633266e+001  8.838052e+001  0.000000e+000
      vertex  3.299059e+001  9.071023e+001 -2.000000e+001
      vertex  2.633266e+001  8.838052e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -5.320315e-001  8.467245e-001  0.000000e+000
    outer loop
      vertex  2.633266e+001  8.838052e+001  0.000000e+000
      vertex  2.633266e+001  8.838052e+001 -2.000000e+001
      vertex  2.036007e+001  8.462769e+001  0.000000e+000
    endloop
  endfacet
  facet normal -5.320315e-001  8.467245e-001  0.000000e+000
    outer loop
      vertex  2.036007e+001  8.462769e+001  0.000000e+000
      vertex  2.633266e+001  8.838052e+001 -2.000000e+001
      vertex  2.036007e+001  8.462769e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -7.071068e-001  7.071068e-001  0.000000e+000
    outer loop
      vertex  2.036007e+001  8.462769e+001  0.000000e+000
      vertex  2.036007e+001  8.462769e+001 -2.000000e+001
      vertex  1.537231e+001  7.963993e+001  0.000000e+000
    endloop
  endfacet
  facet normal -7.071068e-001  7.071068e-001  0.000000e+000
    outer loop
      vertex  1.537231e+001  7.963993e+001  0.000000e+000
      vertex  2.036007e+001  8.462769e+001 -2.000000e+001
      vertex  1.537231e+001  7.963993e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -8.467245e-001  5.320318e-001  0.000000e+000
    outer loop
      vertex  1.537231e+001  7.963993e+001  0.000000e+000
      vertex  1.537231e+001  7.963993e+001 -2.000000e+001
      vertex  1.161948e+001  7.366734e+001  0.000000e+000
    endloop
  endfacet
  facet normal -8.467245e-001  5.320318e-001  0.000000e+000
    outer loop
      vertex  1.161948e+001  7.366734e+001  0.000000e+000
      vertex  1.537231e+001  7.963993e+001 -2.000000e+001
      vertex  1.161948e+001  7.366734e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -9.438834e-001  3.302791e-001  0.000000e+000
    outer loop
      vertex  1.161948e+001  7.366734e+001  0.000000e+000
      vertex  1.161948e+001  7.366734e+001 -2.000000e+001
      vertex  9.289771e+000  6.700941e+001  0.000000e+000
    endloop
  endfacet
  facet normal -9.438834e-001  3.302791e-001  0.000000e+000
    outer loop
      vertex  9.289771e+000  6.700941e+001  0.000000e+000
      vertex  1.161948e+001  7.366734e+001 -2.000000e+001
      vertex  9.289771e+000  6.700941e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -9.937122e-001  1.119646e-001  0.000000e+000
    outer loop
      vertex  9.289771e+000  6.700941e+001  0.000000e+000
      vertex  9.289771e+000  6.700941e+001 -2.000000e+001
      vertex  8.500000e+000  6.000000e+001  0.000000e+000
    endloop
  endfacet
  facet normal -9.937122e-001  1.119646e-001  0.000000e+000
    outer loop
      vertex  8.500000e+000  6.000000e+001  0.000000e+000
      vertex  9.289771e+000  6.700941e+001 -2.000000e+001
      vertex  8.500000e+000  6.000000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -9.937122e-001 -1.119645e-001  0.000000e+000
    outer loop
      vertex  8.500000e+000  6.000000e+001  0.000000e+000
      vertex  8.500000e+000  6.000000e+001 -2.000000e+001
      vertex  9.289771e+000  5.299059e+001  0.000000e+000
    endloop
  endfacet
  facet normal -9.937122e-001 -1.119645e-001  -0.000000e+000
    outer loop
      vertex  9.289771e+000  5.299059e+001  0.000000e+000
      vertex  8.500000e+000  6.000000e+001 -2.000000e+001
      vertex  9.289771e+000  5.299059e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -9.438834e-001 -3.302791e-001  0.000000e+000
    outer loop
      vertex  9.289771e+000  5.299059e+001  0.000000e+000
      vertex  9.289771e+000  5.299059e+001 -2.000000e+001
      vertex  1.161948e+001  4.633266e+001  0.000000e+000
    endloop
  endfacet
  facet normal -9.438834e-001 -3.302791e-001  -0.000000e+000
    outer loop
      vertex  1.161948e+001  4.633266e+001  0.000000e+000
      vertex  9.289771e+000  5.299059e+001 -2.000000e+001
      vertex  1.161948e+001  4.633266e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -8.467241e-001 -5.320323e-001  0.000000e+000
    outer loop
      vertex  1.161948e+001  4.633266e+001  0.000000e+000
      vertex  1.161948e+001  4.633266e+001 -2.000000e+001
      vertex  1.537231e+001  4.036007e+001  0.000000e+000
    endloop
  endfacet
  facet normal -8.467241e-001 -5.320323e-001  -0.000000e+000
    outer loop
      vertex  1.537231e+001  4.036007e+001  0.000000e+000
      vertex  1.161948e+001  4.633266e+001 -2.000000e+001
      vertex  1.537231e+001  4.036007e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -7.071071e-001 -7.071065e-001  0.000000e+000
    outer loop
      vertex  1.537231e+001  4.036007e+001  0.000000e+000
      vertex  1.537231e+001  4.036007e+001 -2.000000e+001
      vertex  2.036007e+001  3.537231e+001  0.000000e+000
    endloop
  endfacet
  facet normal -7.071071e-001 -7.071065e-001  -0.000000e+000
    outer loop
      vertex  2.036007e+001  3.537231e+001  0.000000e+000
      vertex  1.537231e+001  4.036007e+001 -2.000000e+001
      vertex  2.036007e+001  3.537231e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -5.320320e-001 -8.467243e-001  0.000000e+000
    outer loop
      vertex  2.036007e+001  3.537231e+001  0.000000e+000
      vertex  2.036007e+001  3.537231e+001 -2.000000e+001
      vertex  2.633266e+001  3.161948e+001  0.000000e+000
    endloop
  endfacet
  facet normal -5.320320e-001 -8.467243e-001  -0.000000e+000
    outer loop
      vertex  2.633266e+001  3.161948e+001  0.000000e+000
      vertex  2.036007e+001  3.537231e+001 -2.000000e+001
      vertex  2.633266e+001  3.161948e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -3.302791e-001 -9.438834e-001  0.000000e+000
    outer loop
      vertex  2.633266e+001  3.161948e+001  0.000000e+000
      vertex  2.633266e+001  3.161948e+001 -2.000000e+001
      vertex  3.299059e+001  2.928977e+001  0.000000e+000
    endloop
  endfacet
  facet normal -3.302791e-001 -9.438834e-001  -0.000000e+000
    outer loop
      vertex  3.299059e+001  2.928977e+001  0.000000e+000
      vertex  2.633266e+001  3.161948e+001 -2.000000e+001
      vertex  3.299059e+001  2.928977e+001 -2.000000e+001
    endloop
  endfacet
  facet normal -1.119644e-001 -9.937122e-001  0.000000e+000
    outer loop
      vertex  3.299059e+001  2.928977e+001  0.000000e+000
      vertex  3.299059e+001  2.928977e+001 -2.000000e+001
      vertex  4.000000e+001  2.850000e+001  0.000000e+000
    endloop
  endfacet
  facet normal -1.119644e-001 -9.937122e-001  -0.000000e+000
    outer loop
      vertex  4.000000e+001  2.850000e+001  0.000000e+000
      vertex  3.299059e+001  2.928977e+001 -2.000000e+001
      vertex  4.000000e+001  2.850000e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  1.119644e-001 -9.937122e-001  0.000000e+000
    outer loop
      vertex  4.000000e+001  2.850000e+001  0.000000e+000
      vertex  4.000000e+001  2.850000e+001 -2.000000e+001
      vertex  4.700941e+001  2.928977e+001  0.000000e+000
    endloop
  endfacet
  facet normal  1.119644e-001 -9.937122e-001  0.000000e+000
    outer loop
      vertex  4.700941e+001  2.928977e+001  0.000000e+000
      vertex  4.000000e+001  2.850000e+001 -2.000000e+001
      vertex  4.700941e+001  2.928977e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  3.302791e-001 -9.438834e-001  0.000000e+000
    outer loop
      vertex  4.700941e+001  2.928977e+001  0.000000e+000
      vertex  4.700941e+001  2.928977e+001 -2.000000e+001
      vertex  5.366734e+001  3.161948e+001  0.000000e+000
    endloop
  endfacet
  facet normal  3.302791e-001 -9.438834e-001  0.000000e+000
    outer loop
      vertex  5.366734e+001  3.161948e+001  0.000000e+000
      vertex  4.700941e+001  2.928977e+001 -2.000000e+001
      vertex  5.366734e+001  3.161948e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  5.320323e-001 -8.467242e-001  0.000000e+000
    outer loop
      vertex  5.366734e+001  3.161948e+001  0.000000e+000
      vertex  5.366734e+001  3.161948e+001 -2.000000e+001
      vertex  5.963993e+001  3.537231e+001  0.000000e+000
    endloop
  endfacet
  facet normal  5.320323e-001 -8.467242e-001  0.000000e+000
    outer loop
      vertex  5.963993e+001  3.537231e+001  0.000000e+000
      vertex  5.366734e+001  3.161948e+001 -2.000000e+001
      vertex  5.963993e+001  3.537231e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  7.071068e-001 -7.071068e-001  0.000000e+000
    outer loop
      vertex  5.963993e+001  3.537231e+001  0.000000e+000
      vertex  5.963993e+001  3.537231e+001 -2.000000e+001
      vertex  6.462769e+001  4.036007e+001  0.000000e+000
    endloop
  endfacet
  facet normal  7.071068e-001 -7.071068e-001  0.000000e+000
    outer loop
      vertex  6.462769e+001  4.036007e+001  0.000000e+000
      vertex  5.963993e+001  3.537231e+001 -2.000000e+001
      vertex  6.462769e+001  4.036007e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  8.467243e-001 -5.320318e-001  0.000000e+000
    outer loop
      vertex  6.462769e+001  4.036007e+001  0.000000e+000
      vertex  6.462769e+001  4.036007e+001 -2.000000e+001
      vertex  6.838052e+001  4.633266e+001  0.000000e+000
    endloop
  endfacet
  facet normal  8.467243e-001 -5.320318e-001  0.000000e+000
    outer loop
      vertex  6.838052e+001  4.633266e+001  0.000000e+000
      vertex  6.462769e+001  4.036007e+001 -2.000000e+001
      vertex  6.838052e+001  4.633266e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  9.438832e-001 -3.302793e-001  0.000000e+000
    outer loop
      vertex  6.838052e+001  4.633266e+001  0.000000e+000
      vertex  6.838052e+001  4.633266e+001 -2.000000e+001
      vertex  7.071023e+001  5.299059e+001  0.000000e+000
    endloop
  endfacet
  facet normal  9.438832e-001 -3.302793e-001  0.000000e+000
    outer loop
      vertex  7.071023e+001  5.299059e+001  0.000000e+000
      vertex  6.838052e+001  4.633266e+001 -2.000000e+001
      vertex  7.071023e+001  5.299059e+001 -2.000000e+001
    endloop
  endfacet
  facet normal  9.937122e-001 -1.119646e-001  0.000000e+000
    outer loop
      vertex  7.071023e+001  5.299059e+001  0.000000e+000
      vertex  7.071023e+001  5.299059e+001 -2.000000e+001
      vertex  7.150000e+001  6.000000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  9.937122e-001 -1.119646e-001  0.000000e+000
    outer loop
      vertex  7.150000e+001  6.000000e+001  0.000000e+000
      vertex  7.071023e+001  5.299059e+001 -2.000000e+001
      vertex  7.150000e+001  6.000000e+001 -2.000000e+001
    endloop
  endfacet
endsolid CATIA STL

solid CATIA STL
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  5.000000e-001  5.000000e-001  1.000000e+001
      vertex  5.000000e-001  7.250000e+001  1.000000e+001
      vertex  5.200000e+001  3.933013e+001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.000000e-001  5.000000e-001  1.000000e+001
      vertex  5.200000e+001  3.933013e+001  1.000000e+001
      vertex  5.016987e+001  3.750000e+001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.000000e-001  5.000000e-001  1.000000e+001
      vertex  5.016987e+001  3.750000e+001  1.000000e+001
      vertex  4.950000e+001  3.500000e+001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.000000e-001  5.000000e-001  1.000000e+001
      vertex  4.950000e+001  3.500000e+001  1.000000e+001
      vertex  5.016987e+001  3.250000e+001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -9.999999e-001
    outer loop
      vertex  5.000000e-001  5.000000e-001  1.000000e+001
      vertex  5.016987e+001  3.250000e+001  1.000000e+001
      vertex  5.200000e+001  3.066987e+001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.000000e-001  5.000000e-001  1.000000e+001
      vertex  5.200000e+001  3.066987e+001  1.000000e+001
      vertex  5.450000e+001  3.000000e+001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.000000e-001  5.000000e-001  1.000000e+001
      vertex  5.450000e+001  3.000000e+001  1.000000e+001
      vertex  8.300000e+001  5.000000e-001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.300000e+001  5.000000e-001  1.000000e+001
      vertex  5.450000e+001  3.000000e+001  1.000000e+001
      vertex  5.700000e+001  3.066987e+001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.300000e+001  5.000000e-001  1.000000e+001
      vertex  5.700000e+001  3.066987e+001  1.000000e+001
      vertex  5.883013e+001  3.250000e+001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.300000e+001  5.000000e-001  1.000000e+001
      vertex  5.883013e+001  3.250000e+001  1.000000e+001
      vertex  5.950000e+001  3.500000e+001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.300000e+001  5.000000e-001  1.000000e+001
      vertex  5.950000e+001  3.500000e+001  1.000000e+001
      vertex  5.883013e+001  3.750000e+001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  8.300000e+001  7.250000e+001  1.000000e+001
      vertex  8.300000e+001  5.000000e-001  1.000000e+001
      vertex  5.883013e+001  3.750000e+001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.300000e+001  7.250000e+001  1.000000e+001
      vertex  5.883013e+001  3.750000e+001  1.000000e+001
      vertex  5.700000e+001  3.933013e+001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  8.300000e+001  7.250000e+001  1.000000e+001
      vertex  5.700000e+001  3.933013e+001  1.000000e+001
      vertex  5.450000e+001  4.000000e+001  1.000000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.300000e+001  7.250000e+001  1.000000e+001
      vertex  5.450000e+001  4.000000e+001  1.000000e+001
      vertex  5.200000e+001  3.933013e+001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.300000e+001  7.250000e+001  1.000000e+001
      vertex  5.200000e+001  3.933013e+001  1.000000e+001
      vertex  5.000000e-001  7.250000e+001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
      vertex  8.050000e+001  8.000000e+000  1.500000e+001
      vertex  5.450000e+001  3.000000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
      vertex  5.450000e+001  3.000000e+001  1.500000e+001
      vertex  5.200000e+001  3.066987e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
      vertex  5.200000e+001  3.066987e+001  1.500000e+001
      vertex  5.016987e+001  3.250000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
      vertex  5.016987e+001  3.250000e+001  1.500000e+001
      vertex  4.950000e+001  3.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
      vertex  4.950000e+001  3.500000e+001  1.500000e+001
      vertex  5.016987e+001  3.750000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
      vertex  5.016987e+001  3.750000e+001  1.500000e+001
      vertex  5.200000e+001  3.933013e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  9.999999e-001
    outer loop
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
      vertex  5.200000e+001  3.933013e+001  1.500000e+001
      vertex  1.650000e+001  6.200000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.050000e+001  8.000000e+000  1.500000e+001
      vertex  5.883013e+001  3.750000e+001  1.500000e+001
      vertex  5.950000e+001  3.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.050000e+001  8.000000e+000  1.500000e+001
      vertex  5.950000e+001  3.500000e+001  1.500000e+001
      vertex  5.883013e+001  3.250000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.050000e+001  8.000000e+000  1.500000e+001
      vertex  5.883013e+001  3.250000e+001  1.500000e+001
      vertex  5.700000e+001  3.066987e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.050000e+001  8.000000e+000  1.500000e+001
      vertex  5.700000e+001  3.066987e+001  1.500000e+001
      vertex  5.450000e+001  3.000000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.050000e+001  6.200000e+001  1.500000e+001
      vertex  1.650000e+001  6.200000e+001  1.500000e+001
      vertex  5.200000e+001  3.933013e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  9.999999e-001
    outer loop
      vertex  8.050000e+001  6.200000e+001  1.500000e+001
      vertex  5.200000e+001  3.933013e+001  1.500000e+001
      vertex  5.450000e+001  4.000000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.050000e+001  6.200000e+001  1.500000e+001
      vertex  5.450000e+001  4.000000e+001  1.500000e+001
      vertex  5.700000e+001  3.933013e+001  1.500000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.050000e+001  6.200000e+001  1.500000e+001
      vertex  5.700000e+001  3.933013e+001  1.500000e+001
      vertex  5.883013e+001  3.750000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.050000e+001  6.200000e+001  1.500000e+001
      vertex  5.883013e+001  3.750000e+001  1.500000e+001
      vertex  8.050000e+001  8.000000e+000  1.500000e+001
    endloop
  endfacet
  facet normal  2.588188e-001 -9.659259e-001  0.000000e+000
    outer loop
      vertex  5.450000e+001  4.000000e+001  1.000000e+001
      vertex  5.200000e+001  3.933013e+001  1.500000e+001
      vertex  5.200000e+001  3.933013e+001  1.000000e+001
    endloop
  endfacet
  facet normal  7.071068e-001 -7.071068e-001  0.000000e+000
    outer loop
      vertex  5.200000e+001  3.933013e+001  1.000000e+001
      vertex  5.200000e+001  3.933013e+001  1.500000e+001
      vertex  5.016987e+001  3.750000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  7.071068e-001 -7.071068e-001  0.000000e+000
    outer loop
      vertex  5.200000e+001  3.933013e+001  1.000000e+001
      vertex  5.016987e+001  3.750000e+001  1.500000e+001
      vertex  5.016987e+001  3.750000e+001  1.000000e+001
    endloop
  endfacet
  facet normal  9.659259e-001 -2.588188e-001  0.000000e+000
    outer loop
      vertex  5.016987e+001  3.750000e+001  1.000000e+001
      vertex  5.016987e+001  3.750000e+001  1.500000e+001
      vertex  4.950000e+001  3.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  9.659259e-001 -2.588188e-001  0.000000e+000
    outer loop
      vertex  5.016987e+001  3.750000e+001  1.000000e+001
      vertex  4.950000e+001  3.500000e+001  1.500000e+001
      vertex  4.950000e+001  3.500000e+001  1.000000e+001
    endloop
  endfacet
  facet normal  2.588188e-001 -9.659259e-001  0.000000e+000
    outer loop
      vertex  5.200000e+001  3.933013e+001  1.500000e+001
      vertex  5.450000e+001  4.000000e+001  1.000000e+001
      vertex  5.450000e+001  4.000000e+001  1.500000e+001
    endloop
  endfacet
  facet normal -2.588188e-001 -9.659259e-001  -0.000000e+000
    outer loop
      vertex  5.450000e+001  4.000000e+001  1.500000e+001
      vertex  5.450000e+001  4.000000e+001  1.000000e+001
      vertex  5.700000e+001  3.933013e+001  1.000000e+001
    endloop
  endfacet
  facet normal -2.588188e-001 -9.659259e-001  0.000000e+000
    outer loop
      vertex  5.450000e+001  4.000000e+001  1.500000e+001
      vertex  5.700000e+001  3.933013e+001  1.000000e+001
      vertex  5.700000e+001  3.933013e+001  1.500000e+001
    endloop
  endfacet
  facet normal -7.071068e-001 -7.071068e-001  -0.000000e+000
    outer loop
      vertex  5.700000e+001  3.933013e+001  1.500000e+001
      vertex  5.700000e+001  3.933013e+001  1.000000e+001
      vertex  5.883013e+001  3.750000e+001  1.000000e+001
    endloop
  endfacet
  facet normal -7.071068e-001 -7.071068e-001  0.000000e+000
    outer loop
      vertex  5.700000e+001  3.933013e+001  1.500000e+001
      vertex  5.883013e+001  3.750000e+001  1.000000e+001
      vertex  5.883013e+001  3.750000e+001  1.500000e+001
    endloop
  endfacet
  facet normal -9.659259e-001 -2.588188e-001  -0.000000e+000
    outer loop
      vertex  5.883013e+001  3.750000e+001  1.500000e+001
      vertex  5.883013e+001  3.750000e+001  1.000000e+001
      vertex  5.950000e+001  3.500000e+001  1.000000e+001
    endloop
  endfacet
  facet normal -9.659259e-001 -2.588188e-001  0.000000e+000
    outer loop
      vertex  5.883013e+001  3.750000e+001  1.500000e+001
      vertex  5.950000e+001  3.500000e+001  1.000000e+001
      vertex  5.950000e+001  3.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal -2.588188e-001  9.659259e-001  0.000000e+000
    outer loop
      vertex  5.450000e+001  3.000000e+001  1.000000e+001
      vertex  5.700000e+001  3.066987e+001  1.500000e+001
      vertex  5.700000e+001  3.066987e+001  1.000000e+001
    endloop
  endfacet
  facet normal -7.071068e-001  7.071068e-001  0.000000e+000
    outer loop
      vertex  5.700000e+001  3.066987e+001  1.000000e+001
      vertex  5.700000e+001  3.066987e+001  1.500000e+001
      vertex  5.883013e+001  3.250000e+001  1.500000e+001
    endloop
  endfacet
  facet normal -7.071068e-001  7.071068e-001  0.000000e+000
    outer loop
      vertex  5.700000e+001  3.066987e+001  1.000000e+001
      vertex  5.883013e+001  3.250000e+001  1.500000e+001
      vertex  5.883013e+001  3.250000e+001  1.000000e+001
    endloop
  endfacet
  facet normal -9.659259e-001  2.588188e-001  0.000000e+000
    outer loop
      vertex  5.883013e+001  3.250000e+001  1.000000e+001
      vertex  5.883013e+001  3.250000e+001  1.500000e+001
      vertex  5.950000e+001  3.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal -9.659259e-001  2.588188e-001  0.000000e+000
    outer loop
      vertex  5.883013e+001  3.250000e+001  1.000000e+001
      vertex  5.950000e+001  3.500000e+001  1.500000e+001
      vertex  5.950000e+001  3.500000e+001  1.000000e+001
    endloop
  endfacet
  facet normal -2.588188e-001  9.659259e-001  0.000000e+000
    outer loop
      vertex  5.700000e+001  3.066987e+001  1.500000e+001
      vertex  5.450000e+001  3.000000e+001  1.000000e+001
      vertex  5.450000e+001  3.000000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  2.588188e-001  9.659259e-001  0.000000e+000
    outer loop
      vertex  5.450000e+001  3.000000e+001  1.500000e+001
      vertex  5.450000e+001  3.000000e+001  1.000000e+001
      vertex  5.200000e+001  3.066987e+001  1.000000e+001
    endloop
  endfacet
  facet normal  2.588188e-001  9.659259e-001  -0.000000e+000
    outer loop
      vertex  5.450000e+001  3.000000e+001  1.500000e+001
      vertex  5.200000e+001  3.066987e+001  1.000000e+001
      vertex  5.200000e+001  3.066987e+001  1.500000e+001
    endloop
  endfacet
  facet normal  7.071068e-001  7.071068e-001  0.000000e+000
    outer loop
      vertex  5.200000e+001  3.066987e+001  1.500000e+001
      vertex  5.200000e+001  3.066987e+001  1.000000e+001
      vertex  5.016987e+001  3.250000e+001  1.000000e+001
    endloop
  endfacet
  facet normal  7.071068e-001  7.071068e-001  -0.000000e+000
    outer loop
      vertex  5.200000e+001  3.066987e+001  1.500000e+001
      vertex  5.016987e+001  3.250000e+001  1.000000e+001
      vertex  5.016987e+001  3.250000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  9.659259e-001  2.588188e-001  0.000000e+000
    outer loop
      vertex  5.016987e+001  3.250000e+001  1.500000e+001
      vertex  5.016987e+001  3.250000e+001  1.000000e+001
      vertex  4.950000e+001  3.500000e+001  1.000000e+001
    endloop
  endfacet
  facet normal  9.659259e-001  2.588188e-001  -0.000000e+000
    outer loop
      vertex  5.016987e+001  3.250000e+001  1.500000e+001
      vertex  4.950000e+001  3.500000e+001  1.000000e+001
      vertex  4.950000e+001  3.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.350000e+001  3.800000e+001  2.500000e+001
      vertex  1.650000e+001  3.800000e+001  2.500000e+001
      vertex  1.350000e+001  3.200000e+001  2.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.350000e+001  3.200000e+001  2.500000e+001
      vertex  1.650000e+001  3.800000e+001  2.500000e+001
      vertex  1.650000e+001  3.200000e+001  2.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.350000e+001  3.200000e+001  1.700000e+001
      vertex  1.650000e+001  3.200000e+001  1.700000e+001
      vertex  1.350000e+001  3.800000e+001  1.700000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.350000e+001  3.800000e+001  1.700000e+001
      vertex  1.650000e+001  3.200000e+001  1.700000e+001
      vertex  1.650000e+001  3.800000e+001  1.700000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  3.200000e+001  2.500000e+001
      vertex  1.650000e+001  3.125834e+001  2.241421e+001
      vertex  1.650000e+001  3.200000e+001  2.364575e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
      vertex  1.650000e+001  6.200000e+001  1.500000e+001
      vertex  1.650000e+001  3.800000e+001  1.700000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
      vertex  1.650000e+001  3.800000e+001  1.700000e+001
      vertex  1.650000e+001  3.200000e+001  1.700000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  -0.000000e+000
    outer loop
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
      vertex  1.650000e+001  3.200000e+001  1.700000e+001
      vertex  1.650000e+001  3.200000e+001  1.835425e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
      vertex  1.650000e+001  3.200000e+001  1.835425e+001
      vertex  1.650000e+001  3.125834e+001  1.958579e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
      vertex  1.650000e+001  3.125834e+001  1.958579e+001
      vertex  1.650000e+001  3.100000e+001  2.100000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  -0.000000e+000
    outer loop
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
      vertex  1.650000e+001  3.100000e+001  2.100000e+001
      vertex  1.650000e+001  3.125834e+001  2.241421e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  -0.000000e+000
    outer loop
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
      vertex  1.650000e+001  3.125834e+001  2.241421e+001
      vertex  1.650000e+001  3.200000e+001  2.500000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
      vertex  1.650000e+001  3.200000e+001  2.500000e+001
      vertex  1.650000e+001  8.000000e+000  3.500000e+001
    endloop
  endfacet
  facet normal  9.999999e-001  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  6.200000e+001  1.500000e+001
      vertex  1.650000e+001  6.200000e+001  3.500000e+001
      vertex  1.650000e+001  3.900000e+001  2.100000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  6.200000e+001  1.500000e+001
      vertex  1.650000e+001  3.900000e+001  2.100000e+001
      vertex  1.650000e+001  3.874166e+001  1.958579e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  6.200000e+001  1.500000e+001
      vertex  1.650000e+001  3.874166e+001  1.958579e+001
      vertex  1.650000e+001  3.800000e+001  1.835425e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  6.200000e+001  1.500000e+001
      vertex  1.650000e+001  3.800000e+001  1.835425e+001
      vertex  1.650000e+001  3.800000e+001  1.700000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  6.200000e+001  3.500000e+001
      vertex  1.650000e+001  8.000000e+000  3.500000e+001
      vertex  1.650000e+001  3.200000e+001  2.500000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  6.200000e+001  3.500000e+001
      vertex  1.650000e+001  3.200000e+001  2.500000e+001
      vertex  1.650000e+001  3.800000e+001  2.500000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  6.200000e+001  3.500000e+001
      vertex  1.650000e+001  3.800000e+001  2.500000e+001
      vertex  1.650000e+001  3.800000e+001  2.364575e+001
    endloop
  endfacet
  facet normal  1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  6.200000e+001  3.500000e+001
      vertex  1.650000e+001  3.800000e+001  2.364575e+001
      vertex  1.650000e+001  3.874166e+001  2.241421e+001
    endloop
  endfacet
  facet normal  1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  6.200000e+001  3.500000e+001
      vertex  1.650000e+001  3.874166e+001  2.241421e+001
      vertex  1.650000e+001  3.900000e+001  2.100000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  3.200000e+001  2.364575e+001
      vertex  1.350000e+001  3.125834e+001  2.241421e+001
      vertex  1.350000e+001  3.200000e+001  2.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  5.000000e+000  1.500000e+001
      vertex  1.350000e+001  5.000000e+000  3.500000e+001
      vertex  1.350000e+001  3.200000e+001  2.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  5.000000e+000  1.500000e+001
      vertex  1.350000e+001  3.200000e+001  2.500000e+001
      vertex  1.350000e+001  3.125834e+001  2.241421e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  5.000000e+000  1.500000e+001
      vertex  1.350000e+001  3.125834e+001  2.241421e+001
      vertex  1.350000e+001  3.100000e+001  2.100000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  -0.000000e+000
    outer loop
      vertex  1.350000e+001  5.000000e+000  1.500000e+001
      vertex  1.350000e+001  3.100000e+001  2.100000e+001
      vertex  1.350000e+001  3.125834e+001  1.958579e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  -0.000000e+000
    outer loop
      vertex  1.350000e+001  5.000000e+000  1.500000e+001
      vertex  1.350000e+001  3.125834e+001  1.958579e+001
      vertex  1.350000e+001  3.200000e+001  1.835425e+001
    endloop
  endfacet
  facet normal -9.999999e-001  0.000000e+000  -0.000000e+000
    outer loop
      vertex  1.350000e+001  5.000000e+000  1.500000e+001
      vertex  1.350000e+001  3.200000e+001  1.835425e+001
      vertex  1.350000e+001  3.200000e+001  1.700000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  -0.000000e+000
    outer loop
      vertex  1.350000e+001  5.000000e+000  1.500000e+001
      vertex  1.350000e+001  3.200000e+001  1.700000e+001
      vertex  1.350000e+001  3.800000e+001  1.700000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  -0.000000e+000
    outer loop
      vertex  1.350000e+001  5.000000e+000  1.500000e+001
      vertex  1.350000e+001  3.800000e+001  1.700000e+001
      vertex  1.350000e+001  6.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal -9.999999e-001  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  6.500000e+001  1.500000e+001
      vertex  1.350000e+001  3.800000e+001  1.700000e+001
      vertex  1.350000e+001  3.800000e+001  1.835425e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  6.500000e+001  1.500000e+001
      vertex  1.350000e+001  3.800000e+001  1.835425e+001
      vertex  1.350000e+001  3.874166e+001  1.958579e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  6.500000e+001  1.500000e+001
      vertex  1.350000e+001  3.874166e+001  1.958579e+001
      vertex  1.350000e+001  3.900000e+001  2.100000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  6.500000e+001  1.500000e+001
      vertex  1.350000e+001  3.900000e+001  2.100000e+001
      vertex  1.350000e+001  6.500000e+001  3.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  6.500000e+001  3.500000e+001
      vertex  1.350000e+001  3.900000e+001  2.100000e+001
      vertex  1.350000e+001  3.874166e+001  2.241421e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  6.500000e+001  3.500000e+001
      vertex  1.350000e+001  3.874166e+001  2.241421e+001
      vertex  1.350000e+001  3.800000e+001  2.364575e+001
    endloop
  endfacet
  facet normal -9.999999e-001  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  6.500000e+001  3.500000e+001
      vertex  1.350000e+001  3.800000e+001  2.364575e+001
      vertex  1.350000e+001  3.800000e+001  2.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  6.500000e+001  3.500000e+001
      vertex  1.350000e+001  3.800000e+001  2.500000e+001
      vertex  1.350000e+001  3.200000e+001  2.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  6.500000e+001  3.500000e+001
      vertex  1.350000e+001  3.200000e+001  2.500000e+001
      vertex  1.350000e+001  5.000000e+000  3.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -8.566529e-001  5.158935e-001
    outer loop
      vertex  1.650000e+001  3.800000e+001  1.835425e+001
      vertex  1.650000e+001  3.874166e+001  1.958579e+001
      vertex  1.350000e+001  3.800000e+001  1.835425e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -8.566529e-001  5.158935e-001
    outer loop
      vertex  1.350000e+001  3.800000e+001  1.835425e+001
      vertex  1.650000e+001  3.874166e+001  1.958579e+001
      vertex  1.350000e+001  3.874166e+001  1.958579e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -9.837211e-001  1.797022e-001
    outer loop
      vertex  1.650000e+001  3.874166e+001  1.958579e+001
      vertex  1.650000e+001  3.900000e+001  2.100000e+001
      vertex  1.350000e+001  3.874166e+001  1.958579e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -9.837211e-001  1.797022e-001
    outer loop
      vertex  1.350000e+001  3.874166e+001  1.958579e+001
      vertex  1.650000e+001  3.900000e+001  2.100000e+001
      vertex  1.350000e+001  3.900000e+001  2.100000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  9.837211e-001  1.797022e-001
    outer loop
      vertex  1.650000e+001  3.100000e+001  2.100000e+001
      vertex  1.650000e+001  3.125834e+001  1.958579e+001
      vertex  1.350000e+001  3.100000e+001  2.100000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  9.837211e-001  1.797022e-001
    outer loop
      vertex  1.350000e+001  3.100000e+001  2.100000e+001
      vertex  1.650000e+001  3.125834e+001  1.958579e+001
      vertex  1.350000e+001  3.125834e+001  1.958579e+001
    endloop
  endfacet
  facet normal  0.000000e+000  8.566529e-001  5.158935e-001
    outer loop
      vertex  1.650000e+001  3.125834e+001  1.958579e+001
      vertex  1.650000e+001  3.200000e+001  1.835425e+001
      vertex  1.350000e+001  3.125834e+001  1.958579e+001
    endloop
  endfacet
  facet normal  0.000000e+000  8.566529e-001  5.158935e-001
    outer loop
      vertex  1.350000e+001  3.125834e+001  1.958579e+001
      vertex  1.650000e+001  3.200000e+001  1.835425e+001
      vertex  1.350000e+001  3.200000e+001  1.835425e+001
    endloop
  endfacet
  facet normal  0.000000e+000  8.566529e-001 -5.158935e-001
    outer loop
      vertex  1.650000e+001  3.200000e+001  2.364575e+001
      vertex  1.650000e+001  3.125834e+001  2.241421e+001
      vertex  1.350000e+001  3.200000e+001  2.364575e+001
    endloop
  endfacet
  facet normal  0.000000e+000  8.566529e-001 -5.158935e-001
    outer loop
      vertex  1.350000e+001  3.200000e+001  2.364575e+001
      vertex  1.650000e+001  3.125834e+001  2.241421e+001
      vertex  1.350000e+001  3.125834e+001  2.241421e+001
    endloop
  endfacet
  facet normal  0.000000e+000  9.837211e-001 -1.797022e-001
    outer loop
      vertex  1.650000e+001  3.125834e+001  2.241421e+001
      vertex  1.650000e+001  3.100000e+001  2.100000e+001
      vertex  1.350000e+001  3.125834e+001  2.241421e+001
    endloop
  endfacet
  facet normal  0.000000e+000  9.837211e-001 -1.797022e-001
    outer loop
      vertex  1.350000e+001  3.125834e+001  2.241421e+001
      vertex  1.650000e+001  3.100000e+001  2.100000e+001
      vertex  1.350000e+001  3.100000e+001  2.100000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -9.837211e-001 -1.797022e-001
    outer loop
      vertex  1.650000e+001  3.900000e+001  2.100000e+001
      vertex  1.650000e+001  3.874166e+001  2.241421e+001
      vertex  1.350000e+001  3.900000e+001  2.100000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -9.837211e-001 -1.797022e-001
    outer loop
      vertex  1.350000e+001  3.900000e+001  2.100000e+001
      vertex  1.650000e+001  3.874166e+001  2.241421e+001
      vertex  1.350000e+001  3.874166e+001  2.241421e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -8.566529e-001 -5.158935e-001
    outer loop
      vertex  1.650000e+001  3.874166e+001  2.241421e+001
      vertex  1.650000e+001  3.800000e+001  2.364575e+001
      vertex  1.350000e+001  3.874166e+001  2.241421e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -8.566529e-001 -5.158935e-001
    outer loop
      vertex  1.350000e+001  3.874166e+001  2.241421e+001
      vertex  1.650000e+001  3.800000e+001  2.364575e+001
      vertex  1.350000e+001  3.800000e+001  2.364575e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  3.800000e+001  1.835425e+001
      vertex  1.350000e+001  3.800000e+001  1.700000e+001
      vertex  1.650000e+001  3.800000e+001  1.835425e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  -0.000000e+000
    outer loop
      vertex  1.650000e+001  3.800000e+001  1.835425e+001
      vertex  1.350000e+001  3.800000e+001  1.700000e+001
      vertex  1.650000e+001  3.800000e+001  1.700000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  3.800000e+001  2.500000e+001
      vertex  1.350000e+001  3.800000e+001  2.364575e+001
      vertex  1.650000e+001  3.800000e+001  2.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  -0.000000e+000
    outer loop
      vertex  1.650000e+001  3.800000e+001  2.500000e+001
      vertex  1.350000e+001  3.800000e+001  2.364575e+001
      vertex  1.650000e+001  3.800000e+001  2.364575e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  3.200000e+001  2.364575e+001
      vertex  1.350000e+001  3.200000e+001  2.500000e+001
      vertex  1.650000e+001  3.200000e+001  2.364575e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  -0.000000e+000
    outer loop
      vertex  1.650000e+001  3.200000e+001  2.364575e+001
      vertex  1.350000e+001  3.200000e+001  2.500000e+001
      vertex  1.650000e+001  3.200000e+001  2.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  3.200000e+001  1.700000e+001
      vertex  1.350000e+001  3.200000e+001  1.835425e+001
      vertex  1.650000e+001  3.200000e+001  1.700000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  -0.000000e+000
    outer loop
      vertex  1.650000e+001  3.200000e+001  1.700000e+001
      vertex  1.350000e+001  3.200000e+001  1.835425e+001
      vertex  1.650000e+001  3.200000e+001  1.835425e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  8.350000e+001  7.300000e+001  0.000000e+000
      vertex  8.350000e+001  7.300000e+001  1.500000e+001
      vertex  8.350000e+001  6.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  8.350000e+001  7.300000e+001  0.000000e+000
      vertex  8.350000e+001  6.500000e+001  1.500000e+001
      vertex  8.350000e+001  5.000000e+000  1.500000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  8.350000e+001  7.300000e+001  0.000000e+000
      vertex  8.350000e+001  5.000000e+000  1.500000e+001
      vertex  8.350000e+001  0.000000e+000  1.500000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  8.350000e+001  7.300000e+001  0.000000e+000
      vertex  8.350000e+001  0.000000e+000  1.500000e+001
      vertex  8.350000e+001  0.000000e+000  0.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  8.350000e+001  6.500000e+001  3.500000e+001
      vertex  8.350000e+001  5.000000e+000  3.500000e+001
      vertex  8.350000e+001  6.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  8.350000e+001  6.500000e+001  1.500000e+001
      vertex  8.350000e+001  5.000000e+000  3.500000e+001
      vertex  8.350000e+001  5.000000e+000  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  8.350000e+001  5.000000e+000  3.500000e+001
      vertex  1.350000e+001  5.000000e+000  3.500000e+001
      vertex  8.350000e+001  5.000000e+000  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  8.350000e+001  5.000000e+000  1.500000e+001
      vertex  1.350000e+001  5.000000e+000  3.500000e+001
      vertex  1.350000e+001  5.000000e+000  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  6.500000e+001  3.500000e+001
      vertex  8.350000e+001  6.500000e+001  3.500000e+001
      vertex  1.350000e+001  6.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  1.350000e+001  6.500000e+001  1.500000e+001
      vertex  8.350000e+001  6.500000e+001  3.500000e+001
      vertex  8.350000e+001  6.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.350000e+001  0.000000e+000  1.500000e+001
      vertex  8.350000e+001  5.000000e+000  1.500000e+001
      vertex  0.000000e+000  0.000000e+000  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  0.000000e+000  0.000000e+000  1.500000e+001
      vertex  8.350000e+001  5.000000e+000  1.500000e+001
      vertex  1.350000e+001  5.000000e+000  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  0.000000e+000  0.000000e+000  1.500000e+001
      vertex  1.350000e+001  5.000000e+000  1.500000e+001
      vertex  0.000000e+000  7.300000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  0.000000e+000  7.300000e+001  1.500000e+001
      vertex  1.350000e+001  5.000000e+000  1.500000e+001
      vertex  1.350000e+001  6.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  0.000000e+000  7.300000e+001  1.500000e+001
      vertex  1.350000e+001  6.500000e+001  1.500000e+001
      vertex  8.350000e+001  7.300000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.350000e+001  7.300000e+001  1.500000e+001
      vertex  1.350000e+001  6.500000e+001  1.500000e+001
      vertex  8.350000e+001  6.500000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  -0.000000e+000
    outer loop
      vertex  8.050000e+001  8.000000e+000  3.500000e+001
      vertex  8.050000e+001  8.000000e+000  1.500000e+001
      vertex  1.650000e+001  8.000000e+000  3.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  8.000000e+000  3.500000e+001
      vertex  8.050000e+001  8.000000e+000  1.500000e+001
      vertex  1.650000e+001  8.000000e+000  1.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  8.050000e+001  8.000000e+000  3.500000e+001
      vertex  8.050000e+001  6.200000e+001  3.500000e+001
      vertex  8.050000e+001  8.000000e+000  1.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  8.050000e+001  8.000000e+000  1.500000e+001
      vertex  8.050000e+001  6.200000e+001  3.500000e+001
      vertex  8.050000e+001  6.200000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  1.650000e+001  6.200000e+001  3.500000e+001
      vertex  1.650000e+001  6.200000e+001  1.500000e+001
      vertex  8.050000e+001  6.200000e+001  3.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  -0.000000e+000
    outer loop
      vertex  8.050000e+001  6.200000e+001  3.500000e+001
      vertex  1.650000e+001  6.200000e+001  1.500000e+001
      vertex  8.050000e+001  6.200000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.350000e+001  5.000000e+000  3.500000e+001
      vertex  8.050000e+001  8.000000e+000  3.500000e+001
      vertex  1.350000e+001  5.000000e+000  3.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.350000e+001  5.000000e+000  3.500000e+001
      vertex  8.050000e+001  8.000000e+000  3.500000e+001
      vertex  1.650000e+001  8.000000e+000  3.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.350000e+001  5.000000e+000  3.500000e+001
      vertex  1.650000e+001  8.000000e+000  3.500000e+001
      vertex  1.350000e+001  6.500000e+001  3.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  1.350000e+001  6.500000e+001  3.500000e+001
      vertex  1.650000e+001  8.000000e+000  3.500000e+001
      vertex  1.650000e+001  6.200000e+001  3.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000  1.000000e+000
    outer loop
      vertex  1.350000e+001  6.500000e+001  3.500000e+001
      vertex  1.650000e+001  6.200000e+001  3.500000e+001
      vertex  8.350000e+001  6.500000e+001  3.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.350000e+001  6.500000e+001  3.500000e+001
      vertex  1.650000e+001  6.200000e+001  3.500000e+001
      vertex  8.050000e+001  6.200000e+001  3.500000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.350000e+001  6.500000e+001  3.500000e+001
      vertex  8.050000e+001  6.200000e+001  3.500000e+001
      vertex  8.350000e+001  5.000000e+000  3.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex  8.350000e+001  5.000000e+000  3.500000e+001
      vertex  8.050000e+001  6.200000e+001  3.500000e+001
      vertex  8.050000e+001  8.000000e+000  3.500000e+001
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  7.300000e+001  0.000000e+000
      vertex  5.000000e-001  5.000000e-001  0.000000e+000
      vertex  0.000000e+000  0.000000e+000  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  0.000000e+000  0.000000e+000  0.000000e+000
      vertex  5.000000e-001  5.000000e-001  0.000000e+000
      vertex  8.300000e+001  5.000000e-001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  0.000000e+000  0.000000e+000
      vertex  8.300000e+001  5.000000e-001  0.000000e+000
      vertex  8.350000e+001  0.000000e+000  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.000000e-001  5.000000e-001  0.000000e+000
      vertex  0.000000e+000  7.300000e+001  0.000000e+000
      vertex  5.000000e-001  7.250000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  5.000000e-001  7.250000e+001  0.000000e+000
      vertex  0.000000e+000  7.300000e+001  0.000000e+000
      vertex  8.350000e+001  7.300000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  5.000000e-001  7.250000e+001  0.000000e+000
      vertex  8.350000e+001  7.300000e+001  0.000000e+000
      vertex  8.300000e+001  7.250000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.300000e+001  7.250000e+001  0.000000e+000
      vertex  8.350000e+001  7.300000e+001  0.000000e+000
      vertex  8.350000e+001  0.000000e+000  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  8.300000e+001  7.250000e+001  0.000000e+000
      vertex  8.350000e+001  0.000000e+000  0.000000e+000
      vertex  8.300000e+001  5.000000e-001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  9.999999e-001  -0.000000e+000
    outer loop
      vertex  8.350000e+001  7.300000e+001  1.500000e+001
      vertex  8.350000e+001  7.300000e+001  0.000000e+000
      vertex  0.000000e+000  7.300000e+001  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  9.999999e-001  0.000000e+000
    outer loop
      vertex  0.000000e+000  7.300000e+001  1.500000e+001
      vertex  8.350000e+001  7.300000e+001  0.000000e+000
      vertex  0.000000e+000  7.300000e+001  0.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  0.000000e+000  7.300000e+001  1.500000e+001
      vertex  0.000000e+000  7.300000e+001  0.000000e+000
      vertex  0.000000e+000  0.000000e+000  1.500000e+001
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  0.000000e+000  0.000000e+000  1.500000e+001
      vertex  0.000000e+000  7.300000e+001  0.000000e+000
      vertex  0.000000e+000  0.000000e+000  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000 -9.999999e-001  0.000000e+000
    outer loop
      vertex  0.000000e+000  0.000000e+000  1.500000e+001
      vertex  0.000000e+000  0.000000e+000  0.000000e+000
      vertex  8.350000e+001  0.000000e+000  1.500000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -9.999999e-001  -0.000000e+000
    outer loop
      vertex  8.350000e+001  0.000000e+000  1.500000e+001
      vertex  0.000000e+000  0.000000e+000  0.000000e+000
      vertex  8.350000e+001  0.000000e+000  0.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  5.000000e-001  7.250000e+001  1.000000e+001
      vertex  5.000000e-001  5.000000e-001  1.000000e+001
      vertex  5.000000e-001  7.250000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  5.000000e-001  7.250000e+001  0.000000e+000
      vertex  5.000000e-001  5.000000e-001  1.000000e+001
      vertex  5.000000e-001  5.000000e-001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  -0.000000e+000
    outer loop
      vertex  8.300000e+001  5.000000e-001  1.000000e+001
      vertex  8.300000e+001  5.000000e-001  0.000000e+000
      vertex  5.000000e-001  5.000000e-001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  5.000000e-001  5.000000e-001  1.000000e+001
      vertex  8.300000e+001  5.000000e-001  0.000000e+000
      vertex  5.000000e-001  5.000000e-001  0.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  8.300000e+001  5.000000e-001  1.000000e+001
      vertex  8.300000e+001  7.250000e+001  1.000000e+001
      vertex  8.300000e+001  5.000000e-001  0.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  8.300000e+001  5.000000e-001  0.000000e+000
      vertex  8.300000e+001  7.250000e+001  1.000000e+001
      vertex  8.300000e+001  7.250000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  5.000000e-001  7.250000e+001  1.000000e+001
      vertex  5.000000e-001  7.250000e+001  0.000000e+000
      vertex  8.300000e+001  7.250000e+001  1.000000e+001
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  -0.000000e+000
    outer loop
      vertex  8.300000e+001  7.250000e+001  1.000000e+001
      vertex  5.000000e-001  7.250000e+001  0.000000e+000
      vertex  8.300000e+001  7.250000e+001  0.000000e+000
    endloop
  endfacet
endsolid CATIA STL

solid CATIA STL
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.000000e+000  1.000000e+000  3.000000e+000
      vertex  1.000000e+000  5.200000e+001  3.000000e+000
      vertex  6.200000e+001  1.000000e+000  3.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.200000e+001  1.000000e+000  3.000000e+000
      vertex  1.000000e+000  5.200000e+001  3.000000e+000
      vertex  6.200000e+001  5.200000e+001  3.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex -1.500000e+000  5.450000e+001  3.000000e+000
      vertex  0.000000e+000  0.000000e+000  3.000000e+000
      vertex -1.500000e+000 -1.500000e+000  3.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex -1.500000e+000 -1.500000e+000  3.000000e+000
      vertex  0.000000e+000  0.000000e+000  3.000000e+000
      vertex  6.300000e+001  0.000000e+000  3.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex -1.500000e+000 -1.500000e+000  3.000000e+000
      vertex  6.300000e+001  0.000000e+000  3.000000e+000
      vertex  6.450000e+001 -1.500000e+000  3.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  0.000000e+000  0.000000e+000  3.000000e+000
      vertex -1.500000e+000  5.450000e+001  3.000000e+000
      vertex  0.000000e+000  5.300000e+001  3.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  5.300000e+001  3.000000e+000
      vertex -1.500000e+000  5.450000e+001  3.000000e+000
      vertex  6.450000e+001  5.450000e+001  3.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  0.000000e+000  5.300000e+001  3.000000e+000
      vertex  6.450000e+001  5.450000e+001  3.000000e+000
      vertex  6.300000e+001  5.300000e+001  3.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.300000e+001  5.300000e+001  3.000000e+000
      vertex  6.450000e+001  5.450000e+001  3.000000e+000
      vertex  6.450000e+001 -1.500000e+000  3.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  6.300000e+001  5.300000e+001  3.000000e+000
      vertex  6.450000e+001 -1.500000e+000  3.000000e+000
      vertex  6.300000e+001  0.000000e+000  3.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  1.000000e+000  5.200000e+001  3.000000e+000
      vertex  1.000000e+000  1.000000e+000  3.000000e+000
      vertex  1.000000e+000  5.200000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  1.000000e+000  5.200000e+001  0.000000e+000
      vertex  1.000000e+000  1.000000e+000  3.000000e+000
      vertex  1.000000e+000  1.000000e+000  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  -0.000000e+000
    outer loop
      vertex  6.200000e+001  1.000000e+000  3.000000e+000
      vertex  6.200000e+001  1.000000e+000  0.000000e+000
      vertex  1.000000e+000  1.000000e+000  3.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex  1.000000e+000  1.000000e+000  3.000000e+000
      vertex  6.200000e+001  1.000000e+000  0.000000e+000
      vertex  1.000000e+000  1.000000e+000  0.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  -0.000000e+000  0.000000e+000
    outer loop
      vertex  6.200000e+001  1.000000e+000  3.000000e+000
      vertex  6.200000e+001  5.200000e+001  3.000000e+000
      vertex  6.200000e+001  1.000000e+000  0.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  6.200000e+001  1.000000e+000  0.000000e+000
      vertex  6.200000e+001  5.200000e+001  3.000000e+000
      vertex  6.200000e+001  5.200000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  1.000000e+000  5.200000e+001  3.000000e+000
      vertex  1.000000e+000  5.200000e+001  0.000000e+000
      vertex  6.200000e+001  5.200000e+001  3.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  -0.000000e+000
    outer loop
      vertex  6.200000e+001  5.200000e+001  3.000000e+000
      vertex  1.000000e+000  5.200000e+001  0.000000e+000
      vertex  6.200000e+001  5.200000e+001  0.000000e+000
    endloop
  endfacet
  facet normal -9.999999e-001  0.000000e+000  0.000000e+000
    outer loop
      vertex  0.000000e+000  5.300000e+001  3.000000e+000
      vertex  0.000000e+000  5.300000e+001  0.000000e+000
      vertex  0.000000e+000  0.000000e+000  3.000000e+000
    endloop
  endfacet
  facet normal -9.999999e-001  0.000000e+000  0.000000e+000
    outer loop
      vertex  0.000000e+000  0.000000e+000  3.000000e+000
      vertex  0.000000e+000  5.300000e+001  0.000000e+000
      vertex  0.000000e+000  0.000000e+000  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  9.999999e-001  -0.000000e+000
    outer loop
      vertex  6.300000e+001  5.300000e+001  3.000000e+000
      vertex  6.300000e+001  5.300000e+001  0.000000e+000
      vertex  0.000000e+000  5.300000e+001  3.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  9.999999e-001  0.000000e+000
    outer loop
      vertex  0.000000e+000  5.300000e+001  3.000000e+000
      vertex  6.300000e+001  5.300000e+001  0.000000e+000
      vertex  0.000000e+000  5.300000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  9.999999e-001  0.000000e+000  0.000000e+000
    outer loop
      vertex  6.300000e+001  0.000000e+000  3.000000e+000
      vertex  6.300000e+001  0.000000e+000  0.000000e+000
      vertex  6.300000e+001  5.300000e+001  3.000000e+000
    endloop
  endfacet
  facet normal  9.999999e-001  0.000000e+000  0.000000e+000
    outer loop
      vertex  6.300000e+001  5.300000e+001  3.000000e+000
      vertex  6.300000e+001  0.000000e+000  0.000000e+000
      vertex  6.300000e+001  5.300000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000 -9.999999e-001  0.000000e+000
    outer loop
      vertex  0.000000e+000  0.000000e+000  3.000000e+000
      vertex  0.000000e+000  0.000000e+000  0.000000e+000
      vertex  6.300000e+001  0.000000e+000  3.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000 -9.999999e-001  -0.000000e+000
    outer loop
      vertex  6.300000e+001  0.000000e+000  3.000000e+000
      vertex  0.000000e+000  0.000000e+000  0.000000e+000
      vertex  6.300000e+001  0.000000e+000  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex -1.500000e+000 -1.500000e+000  6.000000e+000
      vertex  6.450000e+001 -1.500000e+000  6.000000e+000
      vertex -1.500000e+000  5.450000e+001  6.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000  1.000000e+000
    outer loop
      vertex -1.500000e+000  5.450000e+001  6.000000e+000
      vertex  6.450000e+001 -1.500000e+000  6.000000e+000
      vertex  6.450000e+001  5.450000e+001  6.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex -1.500000e+000  5.450000e+001  6.000000e+000
      vertex  6.450000e+001  5.450000e+001  6.000000e+000
      vertex -1.500000e+000  5.450000e+001  3.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  1.000000e+000  0.000000e+000
    outer loop
      vertex -1.500000e+000  5.450000e+001  3.000000e+000
      vertex  6.450000e+001  5.450000e+001  6.000000e+000
      vertex  6.450000e+001  5.450000e+001  3.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  6.450000e+001 -1.500000e+000  6.000000e+000
      vertex  6.450000e+001 -1.500000e+000  3.000000e+000
      vertex  6.450000e+001  5.450000e+001  6.000000e+000
    endloop
  endfacet
  facet normal  1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex  6.450000e+001  5.450000e+001  6.000000e+000
      vertex  6.450000e+001 -1.500000e+000  3.000000e+000
      vertex  6.450000e+001  5.450000e+001  3.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  6.450000e+001 -1.500000e+000  6.000000e+000
      vertex -1.500000e+000 -1.500000e+000  6.000000e+000
      vertex  6.450000e+001 -1.500000e+000  3.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000 -1.000000e+000  0.000000e+000
    outer loop
      vertex  6.450000e+001 -1.500000e+000  3.000000e+000
      vertex -1.500000e+000 -1.500000e+000  6.000000e+000
      vertex -1.500000e+000 -1.500000e+000  3.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex -1.500000e+000  5.450000e+001  6.000000e+000
      vertex -1.500000e+000  5.450000e+001  3.000000e+000
      vertex -1.500000e+000 -1.500000e+000  6.000000e+000
    endloop
  endfacet
  facet normal -1.000000e+000  0.000000e+000  0.000000e+000
    outer loop
      vertex -1.500000e+000 -1.500000e+000  6.000000e+000
      vertex -1.500000e+000  5.450000e+001  3.000000e+000
      vertex -1.500000e+000 -1.500000e+000  3.000000e+000
    endloop
  endfacet
  facet normal  -0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  5.300000e+001  0.000000e+000
      vertex  1.000000e+000  1.000000e+000  0.000000e+000
      vertex  0.000000e+000  0.000000e+000  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  0.000000e+000  0.000000e+000  0.000000e+000
      vertex  1.000000e+000  1.000000e+000  0.000000e+000
      vertex  6.200000e+001  1.000000e+000  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  -0.000000e+000 -1.000000e+000
    outer loop
      vertex  0.000000e+000  0.000000e+000  0.000000e+000
      vertex  6.200000e+001  1.000000e+000  0.000000e+000
      vertex  6.300000e+001  0.000000e+000  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.000000e+000  1.000000e+000  0.000000e+000
      vertex  0.000000e+000  5.300000e+001  0.000000e+000
      vertex  1.000000e+000  5.200000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  1.000000e+000  5.200000e+001  0.000000e+000
      vertex  0.000000e+000  5.300000e+001  0.000000e+000
      vertex  6.300000e+001  5.300000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -9.999999e-001
    outer loop
      vertex  1.000000e+000  5.200000e+001  0.000000e+000
      vertex  6.300000e+001  5.300000e+001  0.000000e+000
      vertex  6.200000e+001  5.200000e+001  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.200000e+001  5.200000e+001  0.000000e+000
      vertex  6.300000e+001  5.300000e+001  0.000000e+000
      vertex  6.300000e+001  0.000000e+000  0.000000e+000
    endloop
  endfacet
  facet normal  0.000000e+000  0.000000e+000 -1.000000e+000
    outer loop
      vertex  6.200000e+001  5.200000e+001  0.000000e+000
      vertex  6.300000e+001  0.000000e+000  0.000000e+000
      vertex  6.200000e+001  1.000000e+000  0.000000e+000
    endloop
  endfacet
endsolid CATIA STL
ding Part1.stl…]()
