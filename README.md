# ESP32 Controller Hardware Mod - Ready Build

> Based on [ESP32 Marauder](https://github.com/justcallmekoko/ESP32Marauder) by justcallmekoko. For educational and authorised testing only.

This package is based on ESP32 Marauder v1.2.0 and includes a custom `configs.h` for:

- Marauder v4 / old hardware profile
- ILI9341 display setup
- SD card support
- 5-button navigation
- nRF24L01+PA+LNA pin definitions

Button pins:

- UP: GPIO 25
- DOWN: GPIO 26
- LEFT: GPIO 27
- RIGHT: GPIO 33
- OK/SELECT: GPIO 15

nRF24 pins:

- CE: GPIO 22
- CSN: GPIO 14
- SPI shared: MOSI 23, MISO 19, SCK 18

Build settings tested/targeted:

- Arduino IDE 1.8.19
- ESP32 board package 2.0.11
- Board: LOLIN D32
- Partition Scheme: Minimal SPIFFS (Large APPS with OTA)

Notes:

- The nRF24 pin definitions reserve/map pins only. Stock Marauder v1.2.0 does not add nRF24 menu features automatically.
- Header/linker compatibility patches were applied for `lang_var.h`, `utils.h`, `EvilPortal.h/.cpp`, `GpsInterface.cpp`, and `WiFiScan.cpp` to avoid multiple-definition errors with Arduino/ESP32 builds.

## Flashing

1. Install Arduino IDE 1.8.19 and the ESP32 board package 2.0.11.
2. Copy the `User_Setup*.h` files into your `TFT_eSPI` library folder.
3. Open `esp32_marauder/esp32_marauder.ino`, select **LOLIN D32** and **Minimal SPIFFS (Large APPS with OTA)**, then upload.
