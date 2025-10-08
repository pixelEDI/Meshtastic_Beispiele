#define LED_PIN 48
#define LED_STATE_ON 1

#define BUTTON_PIN 4
// #define BUTTON_PIN -1
#define BUTTON_NEED_PULLUP

#define BATTERY_PIN -1
#define ADC_CHANNEL ADC1_GPIO1_CHANNEL
#define BATTERY_SENSE_RESOLUTION_BITS 12

// OLED über I2C
#define USCREEN_SSD1306
#define I2C_SDA 5 // D4
#define I2C_SCL 6 // D5

// LoRa RA-02 (SX1278 / SX1276)
#define USE_SX127X

#define LORA_MISO 8 // D9
#define LORA_MOSI 9 // D10
#define LORA_SCK 7  // D8
#define LORA_CS 3   // D2

#define LORA_RESET 1 // D0
#define LORA_DIO0 2  // D1
