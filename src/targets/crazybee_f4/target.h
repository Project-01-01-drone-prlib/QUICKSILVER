#include "config.h"

#define CrazyBee_F4

#define F411
#define F4
#define F405

//LEDS
#define LED_NUMBER 1
#define LED1PIN GPIO_Pin_13
#define LED1PORT GPIOC
#define LED1_INVERT
#define BUZZER_PIN GPIO_Pin_15
#define BUZZER_PIN_PORT GPIOC
#define FPV_PIN GPIO_Pin_13
#define FPV_PORT GPIOA

//GYRO
#define MPU6XXX_SPI1
#define MPU6XXX_NSS_PA4
#define MPU6XXX_INT_PIN GPIO_Pin_1
#define MPU6XXX_INT_PORT GPIOA
#define USE_DUMMY_I2C
#define GYRO_ID_1 0x68
#define GYRO_ID_2 0x73
#define GYRO_ID_3 0x78
#define GYRO_ID_4 0x71

//RADIO
#ifdef RX_FRSKY
#define USE_CC2500
//#define USE_CC2500_PA_LNA
//#define USE_CC2500_DIVERSITY
#define CC2500_SPI3
#define CC2500_NSS_PA15
#define CC2500_GDO0_PC14
//#define CC2500_TX_EN_PA8
//#define CC2500_LNA_EN_PA13
//#define CC2500_ANT_SEL_PA14
#define SOFTSPI_NONE
#endif

#define USART_PORTS \
  USART1_PA10PA9    \
  USART2_PA3PA2

#define ENABLE_SMART_AUDIO

#if defined(RX_SBUS) || defined(RX_DSMX_2048) || defined(RX_DSM2_1024) || defined(RX_CRSF) || defined(RX_IBUS) || defined(RX_FPORT) || defined(RX_UNIFIED_SERIAL)
#define RX_USART USART_PORT2
#define SOFTSPI_NONE
#endif
#ifndef SOFTSPI_NONE
#define RADIO_CHECK
#define SPI_MISO_PIN GPIO_Pin_10
#define SPI_MISO_PORT GPIOA
#define SPI_MOSI_PIN GPIO_Pin_9
#define SPI_MOSI_PORT GPIOA
#define SPI_CLK_PIN GPIO_Pin_3
#define SPI_CLK_PORT GPIOA
#define SPI_SS_PIN GPIO_Pin_2
#define SPI_SS_PORT GPIOA
#endif

// OSD
#define ENABLE_OSD
#define MAX7456_SPI2
#define MAX7456_NSS_PB12

//VOLTAGE DIVIDER
#define BATTERYPIN GPIO_Pin_0
#define BATTERYPORT GPIOB
#define BATTERY_ADC_CHANNEL ADC_Channel_8

#ifndef VOLTAGE_DIVIDER_R1
#define VOLTAGE_DIVIDER_R1 10000
#endif

#ifndef VOLTAGE_DIVIDER_R2
#define VOLTAGE_DIVIDER_R2 1000
#endif

#ifndef ADC_REF_VOLTAGE
#define ADC_REF_VOLTAGE 3.3
#endif

// MOTOR PINS
#define MOTOR_PIN0 MOTOR_PIN_PB7
#define MOTOR_PIN1 MOTOR_PIN_PB8
#define MOTOR_PIN2 MOTOR_PIN_PB10
#define MOTOR_PIN3 MOTOR_PIN_PB6
