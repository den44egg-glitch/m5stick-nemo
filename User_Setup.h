#ifndef USER_SETUP_H
#define USER_SETUP_H

// Waveshare ESP32-S3 Touch LCD 3.5B
// ILI9488 display via SPI, AXS15231B touch via I2C

#define USER_SETUP_INFO "Waveshare35B"

// Display driver
#define ILI9488_DRIVER

// ESP32-S3 SPI pins
#define TFT_MISO 9
#define TFT_MOSI 11
#define TFT_SCLK 12
#define TFT_CS   10
#define TFT_DC   13
#define TFT_RST  9   // Connected to MISO, use -1 if reset not available
#define TFT_BL   2

// Touch - AXS15231B on I2C (handled separately, not by TFT_eSPI)
#define TOUCH_SDA 6
#define TOUCH_SCL 7

// SPI frequency
#define SPI_FREQUENCY  40000000
#define SPI_READ_FREQUENCY  20000000

// Font and setup
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF

#define SMOOTH_FONT

#endif
