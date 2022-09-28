#include "config.h"
#include "config_helper.h"

#define NeutronRCF411

// PORTS
#define SPI_PORTS   \
  SPI1_PA5PA6PA7    \
  SPI2_PB13PB14PB15 \
  SPI3_PB3PB4PB5

#define USART_PORTS \
  USART1_PA10PA9    \
  USART2_PA3PA2

// LEDS
#define LED_NUMBER 2
#define LED1PIN PIN_C14
#define LED1_INVERT
#define LED2PIN PIN_C15
#define BUZZER_PIN PIN_A14
//#define BUZZER_INVERT

// GYRO
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_A4
#define GYRO_INT PIN_B6
#define GYRO_ORIENTATION GYRO_ROTATE_180

// RADIO
#define USE_SX128X
#define SX12XX_SPI_PORT SPI_PORT3
#define SX12XX_NSS_PIN PIN_A15
#define SX12XX_DIO0_PIN PIN_C13
#define SX12XX_BUSY_PIN PIN_A13
#define SX12XX_RESET_PIN PIN_B9



// OSD
#define USE_MAX7456
#define MAX7456_SPI_PORT SPI_PORT2
#define MAX7456_NSS PIN_B12

#define USE_M25P16
#define M25P16_SPI_PORT SPI_PORT2
#define M25P16_NSS_PIN PIN_A8

// VOLTAGE DIVIDER
#define VBAT_PIN PIN_A1
#define VBAT_DIVIDER_R1 10000
#define VBAT_DIVIDER_R2 1000

#define IBAT_PIN PIN_B0

// MOTOR PINS
#define MOTOR_PIN0 MOTOR_PIN_PB10
#define MOTOR_PIN1 MOTOR_PIN_PB7
#define MOTOR_PIN2 MOTOR_PIN_PB8
#define MOTOR_PIN3 MOTOR_PIN_PA0
