/***************************************************************************//**
 * @file
 * @brief Provide BSP (board support package) configuration parameters.
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

#ifndef BSPCONFIG_H
#define BSPCONFIG_H

#define BSP_STK
#define BSP_WSTK
#define BSP_WSTK_BRD4154A

#define BSP_BCC_USART         USART0
#define BSP_BCC_CLK           cmuClock_USART0
#define BSP_BCC_TX_LOCATION   USART_ROUTELOC0_TXLOC_LOC0
#define BSP_BCC_RX_LOCATION   USART_ROUTELOC0_RXLOC_LOC0
#define BSP_BCC_TXPORT        gpioPortA
#define BSP_BCC_TXPIN         0
#define BSP_BCC_RXPORT        gpioPortA
#define BSP_BCC_RXPIN         1

// io expander has BSP_BCC_ENABLE and BSP_DISP_ENABLE
// io expander support not yet implemented
//#define BSP_BCC_ENABLE_PORT   ioExpanderPort1
//#define BSP_BCC_ENABLE_PIN    1                 /* VCOM_ENABLE */

// on io expander
//#define BSP_DISP_ENABLE_PORT  ioExpanderPort1
//#define BSP_DISP_ENABLE_PIN   2                /* MemLCD display enable */

// on io expander
// NOTE: Currently, the io expander is not supported, but the LEDs are connected
// to the io expander in such a way that they change when the button pins change.
// Therefore, a work around until support is ready for the io expander is to
// define both the pins and buttons as being connected to the same ports, and
// if they are to be used in the same application, their shared wire must be
// taken into account
#define BSP_GPIO_LEDS
#define BSP_NO_OF_LEDS          2
#define BSP_GPIO_LED0_PORT      gpioPortD//ioExpanderPort1
#define BSP_GPIO_LED0_PIN       14//5
#define BSP_GPIO_LED1_PORT      gpioPortD//ioExpanderPort1
#define BSP_GPIO_LED1_PIN       15//6
#define BSP_GPIO_LEDARRAY_INIT  { { BSP_GPIO_LED0_PORT, BSP_GPIO_LED0_PIN }, { BSP_GPIO_LED1_PORT, BSP_GPIO_LED1_PIN } }

#define BSP_GPIO_BUTTONS
#define BSP_NO_OF_BUTTONS       2
#define BSP_GPIO_PB0_PORT       gpioPortD
#define BSP_GPIO_PB0_PIN        14
#define BSP_GPIO_PB1_PORT       gpioPortD
#define BSP_GPIO_PB1_PIN        15

#define BSP_GPIO_BUTTONARRAY_INIT { { BSP_GPIO_PB0_PORT, BSP_GPIO_PB0_PIN }, { BSP_GPIO_PB1_PORT, BSP_GPIO_PB1_PIN } }

#define BSP_INIT_DEFAULT        0

#define BSP_LFXO_CTUNE          32U
#define BSP_HFXO_CTUNE          326U

#if !defined(EMU_DCDCINIT_WSTK_DEFAULT)
/* Use emlib defaults */
#define EMU_DCDCINIT_WSTK_DEFAULT       EMU_DCDCINIT_DEFAULT
#endif

#if !defined(CMU_HFXOINIT_WSTK_DEFAULT)
#define CMU_HFXOINIT_WSTK_DEFAULT                                         \
  {                                                                       \
    false,      /* Low-noise mode for EFR32 */                            \
    false,      /* Disable auto-start on EM0/1 entry */                   \
    false,      /* Disable auto-select on EM0/1 entry */                  \
    false,      /* Disable auto-start and select on RAC wakeup */         \
    _CMU_HFXOSTARTUPCTRL_CTUNE_DEFAULT,                                   \
    BSP_HFXO_CTUNE, /* Steady-state CTUNE for boards without load caps */ \
    _CMU_HFXOSTEADYSTATECTRL_REGISH_DEFAULT,                              \
    0x20,       /* Matching errata fix in CHIP_Init() */                  \
    0x7,        /* Recommended steady-state osc core bias current */      \
    0x6,        /* Recommended peak detection threshold */                \
    _CMU_HFXOTIMEOUTCTRL_SHUNTOPTTIMEOUT_DEFAULT,                         \
    0xA,        /* Recommended peak detection timeout  */                 \
    0x4,        /* Recommended steady timeout */                          \
    _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_DEFAULT,                          \
    cmuOscMode_Crystal,                                                   \
  }
#endif

#if !defined(RADIO_PTI_INIT)
#define RADIO_PTI_INIT                                                     \
  {                                                                        \
    RADIO_PTI_MODE_UART,    /* Simplest output mode is UART mode */        \
    1600000,                /* Choose 1.6 MHz for best compatibility */    \
    6,                      /* WSTK uses location 6 for DOUT */            \
    gpioPortB,              /* Get the port for this loc */                \
    12,                     /* Get the pin, location should match above */ \
    6,                      /* WSTK uses location 6 for DCLK */            \
    gpioPortB,              /* Get the port for this loc */                \
    11,                     /* Get the pin, location should match above */ \
    6,                      /* WSTK uses location 6 for DFRAME */          \
    gpioPortB,              /* Get the port for this loc */                \
    13,                     /* Get the pin, location should match above */ \
  }
#endif

#if !defined(RAIL_PTI_CONFIG)
#define RAIL_PTI_CONFIG                                                    \
  {                                                                        \
    RAIL_PTI_MODE_UART,     /* Simplest output mode is UART mode */        \
    1600000,                /* Choose 1.6 MHz for best compatibility */    \
    6,                      /* WSTK uses location 6 for DOUT */            \
    gpioPortB,              /* Get the port for this loc */                \
    12,                     /* Get the pin, location should match above */ \
    6,                      /* WSTK uses location 6 for DCLK */            \
    gpioPortB,              /* Get the port for this loc */                \
    11,                     /* Get the pin, location should match above */ \
    6,                      /* WSTK uses location 6 for DFRAME */          \
    gpioPortB,              /* Get the port for this loc */                \
    13,                     /* Get the pin, location should match above */ \
  }
#endif

#if !defined(RADIO_PA_2P4_INIT)
#define RADIO_PA_2P4_INIT                                    \
  {                                                          \
    PA_SEL_2P4_HP,    /* Power Amplifier mode */             \
    PA_VOLTMODE_VBAT, /* Power Amplifier vPA Voltage mode */ \
    190,              /* Desired output power in dBm * 10 */ \
    0,                /* Output power offset in dBm * 10 */  \
    10,               /* Desired ramp time in us */          \
  }
#endif

#if !defined(RAIL_PA_2P4_CONFIG)
#define RAIL_PA_2P4_CONFIG                                            \
  {                                                                   \
    RAIL_TX_POWER_MODE_2P4_HP, /* Power Amplifier mode */             \
    3300,                      /* Power Amplifier vPA Voltage mode */ \
    10,                        /* Desired ramp time in us */          \
  }
#endif

#if !defined(RAIL_PA_DEFAULT_POWER)
#define RAIL_PA_DEFAULT_POWER 100
#endif

#define BSP_BCP_VERSION 2
#include "bsp_bcp.h"

#endif /* BSPCONFIG_H */
