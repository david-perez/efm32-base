/***************************************************************************//**
 * @file
 * @brief EFM32TG_AF_PORTS register and bit field definitions
 * @version 5.8.0
 *******************************************************************************
 * # License
 * <b>Copyright 2019 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

#if defined(__ICCARM__)
#pragma system_include       /* Treat file as system include file. */
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
#pragma clang system_header  /* Treat file as system include file. */
#endif

/***************************************************************************//**
 * @addtogroup Parts
 * @{
 ******************************************************************************/
/***************************************************************************//**
 * @defgroup EFM32TG_AF_Ports
 * @{
 ******************************************************************************/

#define AF_CMU_CLK0_PORT(i)          ((i) == 0 ? 0 : (i) == 1 ? 2 : (i) == 2 ? 3 :  -1)                                                              /**< Port number for AF_CMU_CLK0 location number i */
#define AF_CMU_CLK1_PORT(i)          ((i) == 0 ? 0 : (i) == 1 ? 3 : (i) == 2 ? 4 :  -1)                                                              /**< Port number for AF_CMU_CLK1 location number i */
#define AF_LESENSE_CH0_PORT(i)       ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH0 location number i */
#define AF_LESENSE_CH1_PORT(i)       ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH1 location number i */
#define AF_LESENSE_CH2_PORT(i)       ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH2 location number i */
#define AF_LESENSE_CH3_PORT(i)       ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH3 location number i */
#define AF_LESENSE_CH4_PORT(i)       ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH4 location number i */
#define AF_LESENSE_CH5_PORT(i)       ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH5 location number i */
#define AF_LESENSE_CH6_PORT(i)       ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH6 location number i */
#define AF_LESENSE_CH7_PORT(i)       ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH7 location number i */
#define AF_LESENSE_CH8_PORT(i)       ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH8 location number i */
#define AF_LESENSE_CH9_PORT(i)       ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH9 location number i */
#define AF_LESENSE_CH10_PORT(i)      ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH10 location number i */
#define AF_LESENSE_CH11_PORT(i)      ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH11 location number i */
#define AF_LESENSE_CH12_PORT(i)      ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH12 location number i */
#define AF_LESENSE_CH13_PORT(i)      ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH13 location number i */
#define AF_LESENSE_CH14_PORT(i)      ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH14 location number i */
#define AF_LESENSE_CH15_PORT(i)      ((i) == 0 ? 2 :  -1)                                                                                            /**< Port number for AF_LESENSE_CH15 location number i */
#define AF_LESENSE_ALTEX0_PORT(i)    ((i) == 0 ? 3 :  -1)                                                                                            /**< Port number for AF_LESENSE_ALTEX0 location number i */
#define AF_LESENSE_ALTEX1_PORT(i)    ((i) == 0 ? 3 :  -1)                                                                                            /**< Port number for AF_LESENSE_ALTEX1 location number i */
#define AF_LESENSE_ALTEX2_PORT(i)    ((i) == 0 ? 0 :  -1)                                                                                            /**< Port number for AF_LESENSE_ALTEX2 location number i */
#define AF_LESENSE_ALTEX3_PORT(i)    ((i) == 0 ? 0 :  -1)                                                                                            /**< Port number for AF_LESENSE_ALTEX3 location number i */
#define AF_LESENSE_ALTEX4_PORT(i)    ((i) == 0 ? 0 :  -1)                                                                                            /**< Port number for AF_LESENSE_ALTEX4 location number i */
#define AF_LESENSE_ALTEX5_PORT(i)    ((i) == 0 ? 4 :  -1)                                                                                            /**< Port number for AF_LESENSE_ALTEX5 location number i */
#define AF_LESENSE_ALTEX6_PORT(i)    ((i) == 0 ? 4 :  -1)                                                                                            /**< Port number for AF_LESENSE_ALTEX6 location number i */
#define AF_LESENSE_ALTEX7_PORT(i)    ((i) == 0 ? 4 :  -1)                                                                                            /**< Port number for AF_LESENSE_ALTEX7 location number i */
#define AF_ACMP0_OUT_PORT(i)         ((i) == 0 ? 4 : (i) == 1 ? -1 : (i) == 2 ? 3 :  -1)                                                             /**< Port number for AF_ACMP0_OUT location number i */
#define AF_ACMP1_OUT_PORT(i)         ((i) == 0 ? 5 : (i) == 1 ? -1 : (i) == 2 ? 3 :  -1)                                                             /**< Port number for AF_ACMP1_OUT location number i */
#define AF_USART0_TX_PORT(i)         ((i) == 0 ? 4 : (i) == 1 ? 4 : (i) == 2 ? 2 : (i) == 3 ? 4 : (i) == 4 ? 1 : (i) == 5 ? 2 :  -1)                 /**< Port number for AF_USART0_TX location number i */
#define AF_USART0_RX_PORT(i)         ((i) == 0 ? 4 : (i) == 1 ? 4 : (i) == 2 ? 2 : (i) == 3 ? 4 : (i) == 4 ? 1 : (i) == 5 ? 2 :  -1)                 /**< Port number for AF_USART0_RX location number i */
#define AF_USART0_CLK_PORT(i)        ((i) == 0 ? 4 : (i) == 1 ? 4 : (i) == 2 ? 2 : (i) == 3 ? 2 : (i) == 4 ? 1 : (i) == 5 ? 1 :  -1)                 /**< Port number for AF_USART0_CLK location number i */
#define AF_USART0_CS_PORT(i)         ((i) == 0 ? 4 : (i) == 1 ? 4 : (i) == 2 ? 2 : (i) == 3 ? 2 : (i) == 4 ? 1 : (i) == 5 ? 1 :  -1)                 /**< Port number for AF_USART0_CS location number i */
#define AF_USART1_TX_PORT(i)         ((i) == 0 ? 2 : (i) == 1 ? 3 : (i) == 2 ? 3 :  -1)                                                              /**< Port number for AF_USART1_TX location number i */
#define AF_USART1_RX_PORT(i)         ((i) == 0 ? 2 : (i) == 1 ? 3 : (i) == 2 ? 3 :  -1)                                                              /**< Port number for AF_USART1_RX location number i */
#define AF_USART1_CLK_PORT(i)        ((i) == 0 ? 1 : (i) == 1 ? 3 : (i) == 2 ? 5 :  -1)                                                              /**< Port number for AF_USART1_CLK location number i */
#define AF_USART1_CS_PORT(i)         ((i) == 0 ? 1 : (i) == 1 ? 3 : (i) == 2 ? 5 :  -1)                                                              /**< Port number for AF_USART1_CS location number i */
#define AF_TIMER0_CC0_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? -1 : (i) == 3 ? 3 : (i) == 4 ? 0 : (i) == 5 ? 5 :  -1)                /**< Port number for AF_TIMER0_CC0 location number i */
#define AF_TIMER0_CC1_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? -1 : (i) == 3 ? 3 : (i) == 4 ? 2 : (i) == 5 ? 5 :  -1)                /**< Port number for AF_TIMER0_CC1 location number i */
#define AF_TIMER0_CC2_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? -1 : (i) == 3 ? 3 : (i) == 4 ? 2 : (i) == 5 ? 5 :  -1)                /**< Port number for AF_TIMER0_CC2 location number i */
#define AF_TIMER0_CDTI0_PORT(i)      (-1)                                                                                                            /**< Port number for AF_TIMER0_CDTI0 location number i */
#define AF_TIMER0_CDTI1_PORT(i)      (-1)                                                                                                            /**< Port number for AF_TIMER0_CDTI1 location number i */
#define AF_TIMER0_CDTI2_PORT(i)      (-1)                                                                                                            /**< Port number for AF_TIMER0_CDTI2 location number i */
#define AF_TIMER1_CC0_PORT(i)        ((i) == 0 ? 2 : (i) == 1 ? 4 : (i) == 2 ? -1 : (i) == 3 ? 1 : (i) == 4 ? 3 :  -1)                               /**< Port number for AF_TIMER1_CC0 location number i */
#define AF_TIMER1_CC1_PORT(i)        ((i) == 0 ? 2 : (i) == 1 ? 4 : (i) == 2 ? -1 : (i) == 3 ? 1 : (i) == 4 ? 3 :  -1)                               /**< Port number for AF_TIMER1_CC1 location number i */
#define AF_TIMER1_CC2_PORT(i)        ((i) == 0 ? 2 : (i) == 1 ? 4 : (i) == 2 ? -1 : (i) == 3 ? 1 : (i) == 4 ? 2 :  -1)                               /**< Port number for AF_TIMER1_CC2 location number i */
#define AF_TIMER1_CDTI0_PORT(i)      (-1)                                                                                                            /**< Port number for AF_TIMER1_CDTI0 location number i */
#define AF_TIMER1_CDTI1_PORT(i)      (-1)                                                                                                            /**< Port number for AF_TIMER1_CDTI1 location number i */
#define AF_TIMER1_CDTI2_PORT(i)      (-1)                                                                                                            /**< Port number for AF_TIMER1_CDTI2 location number i */
#define AF_PRS_CH0_PORT(i)           ((i) == 0 ? 0 : (i) == 1 ? 5 :  -1)                                                                             /**< Port number for AF_PRS_CH0 location number i */
#define AF_PRS_CH1_PORT(i)           ((i) == 0 ? 0 : (i) == 1 ? 5 :  -1)                                                                             /**< Port number for AF_PRS_CH1 location number i */
#define AF_PRS_CH2_PORT(i)           ((i) == 0 ? 2 : (i) == 1 ? 5 :  -1)                                                                             /**< Port number for AF_PRS_CH2 location number i */
#define AF_PRS_CH3_PORT(i)           ((i) == 0 ? 2 : (i) == 1 ? 4 :  -1)                                                                             /**< Port number for AF_PRS_CH3 location number i */
#define AF_LEUART0_TX_PORT(i)        ((i) == 0 ? 3 : (i) == 1 ? 1 : (i) == 2 ? 4 : (i) == 3 ? 5 : (i) == 4 ? 5 :  -1)                                /**< Port number for AF_LEUART0_TX location number i */
#define AF_LEUART0_RX_PORT(i)        ((i) == 0 ? 3 : (i) == 1 ? 1 : (i) == 2 ? 4 : (i) == 3 ? 5 : (i) == 4 ? 0 :  -1)                                /**< Port number for AF_LEUART0_RX location number i */
#define AF_LETIMER0_OUT0_PORT(i)     ((i) == 0 ? 3 : (i) == 1 ? 1 : (i) == 2 ? 5 : (i) == 3 ? 2 :  -1)                                               /**< Port number for AF_LETIMER0_OUT0 location number i */
#define AF_LETIMER0_OUT1_PORT(i)     ((i) == 0 ? 3 : (i) == 1 ? 1 : (i) == 2 ? 5 : (i) == 3 ? 2 :  -1)                                               /**< Port number for AF_LETIMER0_OUT1 location number i */
#define AF_PCNT0_S0IN_PORT(i)        ((i) == 0 ? 2 : (i) == 1 ? -1 : (i) == 2 ? 2 : (i) == 3 ? 3 :  -1)                                              /**< Port number for AF_PCNT0_S0IN location number i */
#define AF_PCNT0_S1IN_PORT(i)        ((i) == 0 ? 2 : (i) == 1 ? -1 : (i) == 2 ? 2 : (i) == 3 ? 3 :  -1)                                              /**< Port number for AF_PCNT0_S1IN location number i */
#define AF_I2C0_SDA_PORT(i)          ((i) == 0 ? 0 : (i) == 1 ? 3 : (i) == 2 ? 2 : (i) == 3 ? -1 : (i) == 4 ? 2 : (i) == 5 ? 5 : (i) == 6 ? 4 :  -1) /**< Port number for AF_I2C0_SDA location number i */
#define AF_I2C0_SCL_PORT(i)          ((i) == 0 ? 0 : (i) == 1 ? 3 : (i) == 2 ? 2 : (i) == 3 ? -1 : (i) == 4 ? 2 : (i) == 5 ? 5 : (i) == 6 ? 4 :  -1) /**< Port number for AF_I2C0_SCL location number i */
#define AF_DBG_SWO_PORT(i)           ((i) == 0 ? 5 : (i) == 1 ? 2 :  -1)                                                                             /**< Port number for AF_DBG_SWO location number i */
#define AF_DBG_SWDIO_PORT(i)         ((i) == 0 ? 5 : (i) == 1 ? 5 :  -1)                                                                             /**< Port number for AF_DBG_SWDIO location number i */
#define AF_DBG_SWCLK_PORT(i)         ((i) == 0 ? 5 : (i) == 1 ? 5 :  -1)                                                                             /**< Port number for AF_DBG_SWCLK location number i */

/** @} End of group EFM32TG_AF_Ports */
/** @} End of group Parts */
