#include "config.h"
#include "config_helper.h"

#define OmnibusF4SD

// PORTS
#define SPI_PORTS   \
  SPI1_PA5PA6PA7    \
  SPI2_PB13PB14PB15 \
  SPI3_PC10PC11PC12

#define USART_PORTS \
  USART1_PA10PA9    \
  USART3_PB11PB10   \
  USART6_PC7PC6

#define USB_DETECT_PIN PIN_C5

// LEDS
#define LED_NUMBER 1
#define LED1PIN PIN_B5
#define LED1_INVERT
#define BUZZER_PIN PIN_B4
//#define BUZZER_INVERT
#define FPV_PIN PIN_A13

// GYRO
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_A4
#define GYRO_INT PIN_C4
#define GYRO_ORIENTATION GYRO_ROTATE_180

// RADIO
#define USART3_INVERTER_PIN PIN_C9
#define USART6_INVERTER_PIN PIN_C8

// OSD
#define USE_MAX7456
#define MAX7456_SPI_PORT SPI_PORT3
#define MAX7456_NSS PIN_A15

// VOLTAGE DIVIDER
#define VBAT_PIN PIN_C2
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_C1

// MOTOR PINS
#define MOTOR_PIN0 MOTOR_PIN_PA2
#define MOTOR_PIN1 MOTOR_PIN_PA3
#define MOTOR_PIN2 MOTOR_PIN_PB0
#define MOTOR_PIN3 MOTOR_PIN_PB1

// NFE 2in squirt motors
//#define MOTOR_PIN2 MOTOR_PIN_PB1
//#define MOTOR_PIN3 MOTOR_PIN_PA2
//#define MOTOR_PIN0 MOTOR_PIN_PB0
//#define MOTOR_PIN1 MOTOR_PIN_PA3

// NFE 3in 4100kv motors
//#define MOTOR_PIN0 MOTOR_PIN_PB1
//#define MOTOR_PIN1 MOTOR_PIN_PB0
//#define MOTOR_PIN2 MOTOR_PIN_PA3
//#define MOTOR_PIN3 MOTOR_PIN_PA2

// BOBNOVA MOTORS  BOBNOVA MOTORS
//#define MOTOR_PIN0 MOTOR_PIN_PB0
//#define MOTOR_PIN1 MOTOR_PIN_PB1
//#define MOTOR_PIN2 MOTOR_PIN_PA3
//#define MOTOR_PIN3 MOTOR_PIN_PA2
