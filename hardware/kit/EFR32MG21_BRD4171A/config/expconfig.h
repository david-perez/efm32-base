/***************************************************************************//**
 * @file
 * @brief Provide EXP header configuration parameters.
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

#ifndef EXPCONFIG_H
#define EXPCONFIG_H

#define BSP_EXP_HEADER3_PIN    0
#define BSP_EXP_HEADER3_PORT   gpioPortC
#define BSP_EXP_HEADER4_PIN    0
#define BSP_EXP_HEADER4_PORT   gpioPortD
#define BSP_EXP_HEADER5_PIN    1
#define BSP_EXP_HEADER5_PORT   gpioPortC
#define BSP_EXP_HEADER6_PIN    1
#define BSP_EXP_HEADER6_PORT   gpioPortD
#define BSP_EXP_HEADER7_PIN    2
#define BSP_EXP_HEADER7_PORT   gpioPortC
#define BSP_EXP_HEADER8_PIN    2
#define BSP_EXP_HEADER8_PORT   gpioPortD
#define BSP_EXP_HEADER9_PIN    3
#define BSP_EXP_HEADER9_PORT   gpioPortC
#define BSP_EXP_HEADER10_PIN   4
#define BSP_EXP_HEADER10_PORT  gpioPortD
#define BSP_EXP_HEADER11_PIN   0
#define BSP_EXP_HEADER11_PORT  gpioPortA
#define BSP_EXP_HEADER12_PIN   5
#define BSP_EXP_HEADER12_PORT  gpioPortA
#define BSP_EXP_HEADER13_PIN   4
#define BSP_EXP_HEADER13_PORT  gpioPortA
#define BSP_EXP_HEADER14_PIN   6
#define BSP_EXP_HEADER14_PORT  gpioPortA
#define BSP_EXP_HEADER15_PIN   4
#define BSP_EXP_HEADER15_PORT  gpioPortC
#define BSP_EXP_HEADER16_PIN   5
#define BSP_EXP_HEADER16_PORT  gpioPortC

#define BSP_EXP_I2C            I2C0
//#define BSP_EXP_I2C_SCL_LOC    _I2C_ROUTELOC0_SCLLOC_LOC14
#define BSP_EXP_I2C_SCL_PIN    BSP_EXP_HEADER15_PIN
#define BSP_EXP_I2C_SCL_PORT   BSP_EXP_HEADER15_PORT
//#define BSP_EXP_I2C_SDA_LOC    _I2C_ROUTELOC0_SDALOC_LOC16
#define BSP_EXP_I2C_SDA_PIN    BSP_EXP_HEADER16_PIN
#define BSP_EXP_I2C_SDA_PORT   BSP_EXP_HEADER16_PORT

#define BSP_EXP_SPI            USART2
//#define BSP_EXP_SPI_CLK_LOC    _USART_ROUTELOC0_CLKLOC_LOC4
#define BSP_EXP_SPI_CLK_PIN    BSP_EXP_HEADER8_PIN
#define BSP_EXP_SPI_CLK_PORT   BSP_EXP_HEADER8_PORT
//#define BSP_EXP_SPI_CS_LOC     _USART_ROUTELOC0_CSLOC_LOC28
#define BSP_EXP_SPI_CS_PIN     BSP_EXP_HEADER10_PIN
#define BSP_EXP_SPI_CS_PORT    BSP_EXP_HEADER10_PORT
//#define BSP_EXP_SPI_MISO_LOC   _USART_ROUTELOC0_RXLOC_LOC11
#define BSP_EXP_SPI_MISO_PIN   BSP_EXP_HEADER6_PIN
#define BSP_EXP_SPI_MISO_PORT  BSP_EXP_HEADER6_PORT
//#define BSP_EXP_SPI_MOSI_LOC   _USART_ROUTELOC0_TXLOC_LOC11
#define BSP_EXP_SPI_MOSI_PIN   BSP_EXP_HEADER4_PIN
#define BSP_EXP_SPI_MOSI_PORT  BSP_EXP_HEADER4_PORT

#define BSP_EXP_USART          USART0
//#define BSP_EXP_USART_CTS_LOC  _USART_ROUTELOC1_CTSLOC_LOC30
#define BSP_EXP_USART_CTS_PIN  BSP_EXP_HEADER3_PIN
#define BSP_EXP_USART_CTS_PORT BSP_EXP_HEADER3_PORT
//#define BSP_EXP_USART_RTS_LOC  _USART_ROUTELOC1_RTSLOC_LOC30
#define BSP_EXP_USART_RTS_PIN  BSP_EXP_HEADER5_PIN
#define BSP_EXP_USART_RTS_PORT BSP_EXP_HEADER5_PORT
//#define BSP_EXP_USART_RX_LOC   _USART_ROUTELOC0_RXLOC_LOC0
#define BSP_EXP_USART_RX_PIN   BSP_EXP_HEADER14_PIN
#define BSP_EXP_USART_RX_PORT  BSP_EXP_HEADER14_PORT
//#define BSP_EXP_USART_TX_LOC   _USART_ROUTELOC0_TXLOC_LOC0
#define BSP_EXP_USART_TX_PIN   BSP_EXP_HEADER12_PIN
#define BSP_EXP_USART_TX_PORT  BSP_EXP_HEADER12_PORT

#endif /* EXPCONFIG_H */
