// Waveshare ESP32-S3-Touch-LCD-3.5B TFT_eSPI Setup
// ILI9488 480x320 SPI display

#define USER_SETUP_INFO "Waveshare_35B"

// Display driver
#define ILI9488_DRIVER

// ESP32-S3 SPI pins
#define TFT_MISO  9
#define TFT_MOSI  11
#define TFT_SCLK  12
#define TFT_CS    10
#define TFT_DC    13
#define TFT_RST   -1
#define TFT_BL    2

// Display dimensions
#define TFT_WIDTH  320
#define TFT_HEIGHT 480

// SPI frequency
#define SPI_FREQUENCY       40000000
#define SPI_READ_FREQUENCY  20000000

// Font and misc
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT
