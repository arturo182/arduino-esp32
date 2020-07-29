#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define EXTERNAL_NUM_INTERRUPTS 46
#define NUM_DIGITAL_PINS        48
#define NUM_ANALOG_INPUTS       20

#define analogInputToDigitalPin(p)  (((p)<20)?(esp32_adc2gpio[(p)]):-1)
#define digitalPinToInterrupt(p)    (((p)<48)?(p):-1)
#define digitalPinHasPWM(p)         (p < 46)

static const uint8_t LED_BUILTIN = 21;
#define BUILTIN_LED  LED_BUILTIN // backward compatibility

static const uint8_t TX0 = 43;
static const uint8_t RX0 = 44;

static const uint8_t TX = 2;
static const uint8_t RX = 3;

static const uint8_t SDA = 42;
static const uint8_t SCL = 41;

static const uint8_t SS    = 34;
static const uint8_t MOSI  = 35;
static const uint8_t MISO  = 37;
static const uint8_t SCK   = 36;

static const uint8_t A0 = 9;
static const uint8_t A1 = 8;
static const uint8_t A2 = 7;
static const uint8_t A3 = 6;
static const uint8_t A4 = 5;
static const uint8_t A5 = 4;
//static const uint8_t A6 = 7;
//static const uint8_t A7 = 8;
//static const uint8_t A8 = 9;
//static const uint8_t A9 = 10;
//static const uint8_t A10 = 11;
//static const uint8_t A11 = 12;
//static const uint8_t A12 = 13;
//static const uint8_t A13 = 14;
//static const uint8_t A14 = 15;
//static const uint8_t A15 = 16;
//static const uint8_t A16 = 17;
//static const uint8_t A17 = 18;
//static const uint8_t A18 = 19;
//static const uint8_t A19 = 20;

//static const uint8_t T1 = 1;
//static const uint8_t T2 = 2;
//static const uint8_t T3 = 3;
//static const uint8_t T4 = 4;
//static const uint8_t T5 = 5;
//static const uint8_t T6 = 6;
//static const uint8_t T7 = 7;
//static const uint8_t T8 = 8;
//static const uint8_t T9 = 9;
//static const uint8_t T10 = 10;
//static const uint8_t T11 = 11;
//static const uint8_t T12 = 12;
//static const uint8_t T13 = 13;
//static const uint8_t T14 = 14;

static const uint8_t D5  = 40;
static const uint8_t D6  = 39;
static const uint8_t D9  = 38;
static const uint8_t D10 = 34;
static const uint8_t D11 = 33;
static const uint8_t D12 = 26;
static const uint8_t D13 = 21;
static const uint8_t D14 = 1;

static const uint8_t LCD_MOSI = 11;
static const uint8_t LCD_COPI = 11;
static const uint8_t LCD_SCK  = 12;
static const uint8_t LCD_DC   = 13;
static const uint8_t LCD_RST  = 14;
static const uint8_t LCD_CS   = 15;
static const uint8_t LCD_BL   = 16;

static const uint8_t NEOPIXEL = 45;

static const uint8_t DAC1 = 17;
static const uint8_t DAC2 = 18;

#endif /* Pins_Arduino_h */
