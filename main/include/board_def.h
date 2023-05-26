

#define SPI_MISO    22
#define SPI_MOSI    19
#define SPI_SCLK    21

#define SD_CS       0
#define SD_MOSI     SPI_MOSI
#define SD_MISO     SPI_MISO
#define SD_CLK      SPI_SCLK

#define TFT_MISO    SPI_MISO
#define TFT_MOSI    SPI_MOSI
#define TFT_SCLK    SPI_SCLK
#define TFT_CS      -1      // Chip select control pin
#define TFT_DC      -1     // Data Command control pin
#define TFT_BK      -1       // TFT backlight  pin
#define TFT_RST     GPIO_NUM_MAX    //No use

#define TFT_WITDH   240
#define TFT_HEIGHT  240

#define I2C_SDA     -1
#define I2C_SCL     -1

#define IIS_SCLK    -1
#define IIS_LCLK    -1
#define IIS_DSIN    -1
#define IIS_DOUT    -1


//camera pin
#define PWDN_GPIO_NUM    -1
#define RESET_GPIO_NUM   -1
#define XCLK_GPIO_NUM     4
#define SIOD_GPIO_NUM     18
#define SIOC_GPIO_NUM     23

#define Y9_GPIO_NUM       36
#define Y8_GPIO_NUM       37
#define Y7_GPIO_NUM       38
#define Y6_GPIO_NUM       39
#define Y5_GPIO_NUM       35
#define Y4_GPIO_NUM       14
#define Y3_GPIO_NUM       13
#define Y2_GPIO_NUM       34
#define VSYNC_GPIO_NUM    5
#define HREF_GPIO_NUM     27
#define PCLK_GPIO_NUM     25
#define XCLK_FREQ       20000000
