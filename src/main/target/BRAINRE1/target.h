/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <stdbool.h>

#define TARGET_BOARD_IDENTIFIER "BRAINRE1"

#define CONFIG_START_FLASH_ADDRESS (0x08010000) // 64kB, flash sector

#define USBD_PRODUCT_STRING     "BrainRE1"

#define LED0                    PB13
#define LED1                    PC8
#define LED0_INVERTED
#define LED1_INVERTED

#define BEEPER
#define LED_STRIP

#define USE_ESCSERIAL
#define ESCSERIAL_TIMER_TX_HARDWARE 0 // PWM 1

#define USE_FLASHFS
#define USE_FLASH_M25P16
#define M25P16_FIRST_SECTOR     4
#define M25P16_SPI_SHARED
#define M25P16_CS_PIN           PB15
#define M25P16_SPI_INSTANCE     SPI3

#define USE_RE1_FPGA
#define RE1FPGA_SPI_INSTANCE SPI3
#define RE1FPGA_SPI_DIVISOR  8
#define RE1FPGA_CS_PIN       PC15
#define RE1FPGA_CDONE_PIN    PB0
#define RE1FPGA_CRESET_PIN   PB1
#define RE1FPGA_CLOCK_PIN    PA8
#define RE1FPGA_RESET_PIN    PB10

#define IDLE_COUNTS_PER_SEC_AT_NO_LOAD (16564455)

#define OSD
#define CMS
#define OSD_CALLS_CMS
#define USE_BRAINFPV_OSD
#define VIDEO_BITS_PER_PIXEL 2
#define INCLUDE_VIDEO_QUADSPI
#define VIDEO_QSPI_CLOCK_PIN PB2
#define VIDEO_QSPI_IO0_PIN   PC9
#define VIDEO_QSPI_IO1_PIN   PC10
#define VIDEO_VSYNC          PB5
#define VIDEO_HSYNC          PC2

#define VTX_CONTROL
#define VTX_SMARTAUDIO

#define USE_BRAINRE1_SPECTROGRAPH

#define USE_EXTI
#define GYRO
#define ACC

#define USE_ACCGYRO_BMI160
#define GYRO_BMI160_ALIGN    CW0_DEG
#define ACC_BMI160_ALIGN     CW0_DEG
#define BMI160_SPI_INSTANCE  SPI1
#define BMI160_SPI_DIVISOR   16
#define BMI160_CS_PIN        PC14
#define BMI160_INT_EXTI      PC13

#define BARO
#define USE_BARO_BMP280
#define MS5611_I2C_INSTANCE     I2CDEV_1

#define USABLE_TIMER_CHANNEL_COUNT 7

#define USE_VCP
#define VBUS_SENSING_PIN        PA9
#define VBUS_SENSING_ENABLED

#define USE_UART1
#undef USE_UART1_TX_DMA
#define USE_UART1_TX_NODMA
#define UART1_RX_PIN            PB7
#define UART1_TX_PIN            PB6

#define USE_UART3
#define UART3_RX_PIN            PC5
//#define UART3_TX_PIN            PB10

#define USE_UART6
#undef USE_UART6_TX_DMA
#define UART6_RX_PIN            PC7
#define UART6_TX_PIN            PC6

#define SERIAL_PORT_COUNT       4 //VCP, USART1, USART3, USART6

#define USE_SPI

#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN            PB3
#define SPI3_MISO_PIN           PC11
#define SPI3_MOSI_PIN           PC12

#define USE_I2C
#define I2C_DEVICE              (I2CDEV_1)
#define USE_I2C_PULLUP
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9

#define BOARD_HAS_VOLTAGE_DIVIDER
#define USE_ADC
#define VBAT_ADC_PIN            PC0
#define RSSI_ADC_PIN            PC3
#define CURRENT_METER_ADC_PIN   PC1
#define VBAT_SCALE_DEFAULT      66
#define CURRENT_SCALE_DEFAULT   250

#define DEFAULT_FEATURES        (FEATURE_VBAT | FEATURE_CURRENT_METER | FEATURE_BLACKBOX)
#define DEFAULT_RX_FEATURE      FEATURE_RX_PPM
#define SERIALRX_PROVIDER       SERIALRX_SBUS

// #define LED_STRIP
// #define WS2811_PIN                      PA0
// #define WS2811_TIMER                    TIM5
// #define WS2811_DMA_HANDLER_IDENTIFER    DMA1_ST2_HANDLER
// #define WS2811_DMA_STREAM               DMA1_Stream2
// #define WS2811_DMA_IT                   DMA_IT_TCIF2
// #define WS2811_DMA_CHANNEL              DMA_Channel_6
// #define WS2811_TIMER_CHANNEL            TIM_Channel_1


#define SPEKTRUM_BIND
// PPM input
#define BIND_PIN                PB14

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define USE_DSHOT
#define USED_TIMERS             ( TIM_N(1) | TIM_N(2) | TIM_N(5) | TIM_N(12) )

bool brainre1_settings_updated;
void brainRE1UpdateSettings(void);
