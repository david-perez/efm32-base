/***************************************************************************//**
 * @file
 * @brief Kit specific board defines for the CPT007B demo
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

#ifndef CPT007B_CONFIG_H
#define CPT007B_CONFIG_H

/////////////////////////////////////////////////////////////////////////////
// Project Configurations
/////////////////////////////////////////////////////////////////////////////
// The Demo mode determines the total number of total capsense buttons,
// the pins on the STK that correspond to the pins on the CPT device
// and so on.

// 0 - STK works with CPT007B board with GPIO mode capsense buttons
// 1 - STK works with CPT112S board with I2C mode capsense buttons
#ifndef CPT_DEMO_MODE
#define CPT_DEMO_MODE             0

#if CPT_DEMO_MODE
#define TOTAL_CAPSENSE_PIN        12
#define CS0_I2C_SDA_LOC           15
#define CS0_I2C_SCL_LOC           15
#define CS0_I2C_INT_PORT          gpioPortC
#define CS0_I2C_INT_PIN           7
#define CS0_I2C_SDA_PORT          gpioPortC
#define CS0_I2C_SDA_PIN           11
#define CS0_I2C_SCL_PORT          gpioPortC
#define CS0_I2C_SCL_PIN           10

#define CS0_SENSOR_EN_PORT        gpioPortB
#define CS0_SENSOR_EN_PIN         10

/** Config for I2C init structure in Fast Mode bit rate (upto 400 kbits/s). */
#define I2C_INIT_FAST_MODE                                                   \
  {                                                                          \
    true,              /* Enable when init done */                           \
    true,              /* Set to master mode */                              \
    0,                 /* Use currently configured reference clock */        \
    I2C_FREQ_FAST_MAX, /* Set to fast rate assuring being within I2C spec */ \
    i2cClockHLRAsymetric /* Set to use 6:3 low/high duty cycle */            \
  }

#else
#define TOTAL_CAPSENSE_PIN        7
#define CS0_0_PORT                gpioPortA
#define CS0_0_PIN                 7
#define CS0_1_PORT                gpioPortA
#define CS0_1_PIN                 9
#define CS0_2_PORT                gpioPortC
#define CS0_2_PIN                 10
#define CS0_3_PORT                gpioPortC
#define CS0_3_PIN                 11
#define CS0_4_PORT                gpioPortD
#define CS0_4_PIN                 9
#define CS0_5_PORT                gpioPortB
#define CS0_5_PIN                 6
#define CS0_6_PORT                gpioPortB
#define CS0_6_PIN                 7

#define CS0_0_PRESENT             0x01
#define CS0_1_PRESENT             0x02
#define CS0_2_PRESENT             0x04
#define CS0_3_PRESENT             0x08
#define CS0_4_PRESENT             0x10
#define CS0_5_PRESENT             0x20
#define CS0_6_PRESENT             0x40
#endif

#endif /* CPT_DEMO_MODE */
#endif /* CPT007B_CONFIG_H */
