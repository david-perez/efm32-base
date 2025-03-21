/***************************************************************************//**
 * @file
 * @brief CMSIS Cortex-M3 Peripheral Access Layer Header File
 *        for EFM EFM32G290F64
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

#ifndef EFM32G290F64_H
#define EFM32G290F64_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************************************************************//**
 * @addtogroup Parts
 * @{
 ******************************************************************************/

/***************************************************************************//**
 * @defgroup EFM32G290F64 EFM32G290F64
 * @{
 ******************************************************************************/

/** Interrupt Number Definition */
typedef enum IRQn{
/******  Cortex-M3 Processor Exceptions Numbers ********************************************/
  NonMaskableInt_IRQn   = -14,              /*!< -14 Cortex-M3 Non Maskable Interrupt      */
  HardFault_IRQn        = -13,              /*!< -13 Cortex-M3 Hard Fault Interrupt        */
  MemoryManagement_IRQn = -12,              /*!< -12 Cortex-M3 Memory Management Interrupt */
  BusFault_IRQn         = -11,              /*!< -11 Cortex-M3 Bus Fault Interrupt         */
  UsageFault_IRQn       = -10,              /*!< -10 Cortex-M3 Usage Fault Interrupt       */
  SVCall_IRQn           = -5,               /*!< -5  Cortex-M3 SV Call Interrupt           */
  DebugMonitor_IRQn     = -4,               /*!< -4  Cortex-M3 Debug Monitor Interrupt     */
  PendSV_IRQn           = -2,               /*!< -2  Cortex-M3 Pend SV Interrupt           */
  SysTick_IRQn          = -1,               /*!< -1  Cortex-M3 System Tick Interrupt       */

/******  EFM32G Peripheral Interrupt Numbers ***********************************************/
  DMA_IRQn              = 0,  /*!< 0 EFM32 DMA Interrupt */
  GPIO_EVEN_IRQn        = 1,  /*!< 1 EFM32 GPIO_EVEN Interrupt */
  TIMER0_IRQn           = 2,  /*!< 2 EFM32 TIMER0 Interrupt */
  USART0_RX_IRQn        = 3,  /*!< 3 EFM32 USART0_RX Interrupt */
  USART0_TX_IRQn        = 4,  /*!< 4 EFM32 USART0_TX Interrupt */
  ACMP0_IRQn            = 5,  /*!< 5 EFM32 ACMP0 Interrupt */
  ADC0_IRQn             = 6,  /*!< 6 EFM32 ADC0 Interrupt */
  DAC0_IRQn             = 7,  /*!< 7 EFM32 DAC0 Interrupt */
  I2C0_IRQn             = 8,  /*!< 8 EFM32 I2C0 Interrupt */
  GPIO_ODD_IRQn         = 9,  /*!< 9 EFM32 GPIO_ODD Interrupt */
  TIMER1_IRQn           = 10, /*!< 10 EFM32 TIMER1 Interrupt */
  TIMER2_IRQn           = 11, /*!< 11 EFM32 TIMER2 Interrupt */
  USART1_RX_IRQn        = 12, /*!< 12 EFM32 USART1_RX Interrupt */
  USART1_TX_IRQn        = 13, /*!< 13 EFM32 USART1_TX Interrupt */
  USART2_RX_IRQn        = 14, /*!< 14 EFM32 USART2_RX Interrupt */
  USART2_TX_IRQn        = 15, /*!< 15 EFM32 USART2_TX Interrupt */
  UART0_RX_IRQn         = 16, /*!< 16 EFM32 UART0_RX Interrupt */
  UART0_TX_IRQn         = 17, /*!< 17 EFM32 UART0_TX Interrupt */
  LEUART0_IRQn          = 18, /*!< 18 EFM32 LEUART0 Interrupt */
  LEUART1_IRQn          = 19, /*!< 19 EFM32 LEUART1 Interrupt */
  LETIMER0_IRQn         = 20, /*!< 20 EFM32 LETIMER0 Interrupt */
  PCNT0_IRQn            = 21, /*!< 21 EFM32 PCNT0 Interrupt */
  PCNT1_IRQn            = 22, /*!< 22 EFM32 PCNT1 Interrupt */
  PCNT2_IRQn            = 23, /*!< 23 EFM32 PCNT2 Interrupt */
  RTC_IRQn              = 24, /*!< 24 EFM32 RTC Interrupt */
  CMU_IRQn              = 25, /*!< 25 EFM32 CMU Interrupt */
  VCMP_IRQn             = 26, /*!< 26 EFM32 VCMP Interrupt */
  MSC_IRQn              = 28, /*!< 28 EFM32 MSC Interrupt */
  AES_IRQn              = 29, /*!< 29 EFM32 AES Interrupt */
} IRQn_Type;

/***************************************************************************//**
 * @defgroup EFM32G290F64_Core EFM32G290F64 Core
 * @{
 * @brief Processor and Core Peripheral Section
 ******************************************************************************/
#define __MPU_PRESENT             1U /**< Presence of MPU  */
#define __VTOR_PRESENT            1U /**< Presence of VTOR register in SCB */
#define __NVIC_PRIO_BITS          3U /**< NVIC interrupt priority bits */
#define __Vendor_SysTickConfig    0U /**< Is 1 if different SysTick counter is used */

/** @} End of group EFM32G290F64_Core */

/***************************************************************************//**
* @defgroup EFM32G290F64_Part EFM32G290F64 Part
* @{
*******************************************************************************/

/** Part family */
#define _EFM32_GECKO_FAMILY                     1  /**< Gecko EFM32G MCU Family */
#define _EFM_DEVICE                                /**< Silicon Labs EFM-type microcontroller */
#define _SILICON_LABS_32B_SERIES_0                 /**< Silicon Labs series number */
#define _SILICON_LABS_32B_SERIES                0  /**< Silicon Labs series number */
#define _SILICON_LABS_GECKO_INTERNAL_SDID       71 /**< Silicon Labs internal use only, may change any time */
#define _SILICON_LABS_GECKO_INTERNAL_SDID_71       /**< Silicon Labs internal use only, may change any time */
#define _SILICON_LABS_32B_PLATFORM_1               /**< @deprecated Silicon Labs platform name */
#define _SILICON_LABS_32B_PLATFORM              1  /**< @deprecated Silicon Labs platform name */

/* If part number is not defined as compiler option, define it */
#if !defined(EFM32G290F64)
#define EFM32G290F64    1 /**< Gecko Part  */
#endif

/** Configure part number */
#define PART_NUMBER          "EFM32G290F64" /**< Part Number */

/** Memory Base addresses and limits */
#define FLASH_MEM_BASE       (0x0UL)        /**< FLASH base address  */
#define FLASH_MEM_SIZE       (0x10000000UL) /**< FLASH available address space  */
#define FLASH_MEM_END        (0xFFFFFFFUL)  /**< FLASH end address  */
#define FLASH_MEM_BITS       (0x28UL)       /**< FLASH used bits  */
#define AES_MEM_BASE         (0x400E0000UL) /**< AES base address  */
#define AES_MEM_SIZE         (0x400UL)      /**< AES available address space  */
#define AES_MEM_END          (0x400E03FFUL) /**< AES end address  */
#define AES_MEM_BITS         (0x10UL)       /**< AES used bits  */
#define PER_MEM_BASE         (0x40000000UL) /**< PER base address  */
#define PER_MEM_SIZE         (0xE0000UL)    /**< PER available address space  */
#define PER_MEM_END          (0x400DFFFFUL) /**< PER end address  */
#define PER_MEM_BITS         (0x20UL)       /**< PER used bits  */
#define RAM_MEM_BASE         (0x20000000UL) /**< RAM base address  */
#define RAM_MEM_SIZE         (0x8000UL)     /**< RAM available address space  */
#define RAM_MEM_END          (0x20007FFFUL) /**< RAM end address  */
#define RAM_MEM_BITS         (0x15UL)       /**< RAM used bits  */
#define RAM_CODE_MEM_BASE    (0x10000000UL) /**< RAM_CODE base address  */
#define RAM_CODE_MEM_SIZE    (0x4000UL)     /**< RAM_CODE available address space  */
#define RAM_CODE_MEM_END     (0x10003FFFUL) /**< RAM_CODE end address  */
#define RAM_CODE_MEM_BITS    (0x14UL)       /**< RAM_CODE used bits  */
#define EBI_MEM_BASE         (0x80000000UL) /**< EBI base address  */
#define EBI_MEM_SIZE         (0x10000000UL) /**< EBI available address space  */
#define EBI_MEM_END          (0x8FFFFFFFUL) /**< EBI end address  */
#define EBI_MEM_BITS         (0x28UL)       /**< EBI used bits  */

/** Bit banding area */
#define BITBAND_PER_BASE     (0x42000000UL) /**< Peripheral Address Space bit-band area */
#define BITBAND_RAM_BASE     (0x22000000UL) /**< SRAM Address Space bit-band area */

/** Flash and SRAM limits for EFM32G290F64 */
#define FLASH_BASE           (0x00000000UL) /**< Flash Base Address */
#define FLASH_SIZE           (0x00010000UL) /**< Available Flash Memory */
#define FLASH_PAGE_SIZE      512U           /**< Flash Memory page size */
#define SRAM_BASE            (0x20000000UL) /**< SRAM Base Address */
#define SRAM_SIZE            (0x00004000UL) /**< Available SRAM Memory */
#define __CM3_REV            0x0200U        /**< Cortex-M3 Core revision r2p0 */
#define PRS_CHAN_COUNT       8              /**< Number of PRS channels */
#define DMA_CHAN_COUNT       8              /**< Number of DMA channels */
#define EXT_IRQ_COUNT        31             /**< Number of External (NVIC) interrupts */

/** AF channels connect the different on-chip peripherals with the af-mux */
#define AFCHAN_MAX           79U
#define AFCHANLOC_MAX        4U
/** Analog AF channels */
#define AFACHAN_MAX          37U

/* Part number capabilities */

#define TIMER_PRESENT           /**< TIMER is available in this part */
#define TIMER_COUNT           3 /**< 3 TIMERs available  */
#define USART_PRESENT           /**< USART is available in this part */
#define USART_COUNT           3 /**< 3 USARTs available  */
#define UART_PRESENT            /**< UART is available in this part */
#define UART_COUNT            1 /**< 1 UARTs available  */
#define LEUART_PRESENT          /**< LEUART is available in this part */
#define LEUART_COUNT          2 /**< 2 LEUARTs available  */
#define LETIMER_PRESENT         /**< LETIMER is available in this part */
#define LETIMER_COUNT         1 /**< 1 LETIMERs available  */
#define PCNT_PRESENT            /**< PCNT is available in this part */
#define PCNT_COUNT            3 /**< 3 PCNTs available  */
#define ACMP_PRESENT            /**< ACMP is available in this part */
#define ACMP_COUNT            2 /**< 2 ACMPs available  */
#define DAC_PRESENT             /**< DAC is available in this part */
#define DAC_COUNT             1 /**< 1 DACs available  */
#define ADC_PRESENT             /**< ADC is available in this part */
#define ADC_COUNT             1 /**< 1 ADCs available  */
#define I2C_PRESENT             /**< I2C is available in this part */
#define I2C_COUNT             1 /**< 1 I2Cs available  */
#define AES_PRESENT             /**< AES is available in this part */
#define AES_COUNT             1 /**< 1 AES available */
#define DMA_PRESENT             /**< DMA is available in this part */
#define DMA_COUNT             1 /**< 1 DMA available */
#define LE_PRESENT              /**< LE is available in this part */
#define LE_COUNT              1 /**< 1 LE available */
#define MSC_PRESENT             /**< MSC is available in this part */
#define MSC_COUNT             1 /**< 1 MSC available */
#define EMU_PRESENT             /**< EMU is available in this part */
#define EMU_COUNT             1 /**< 1 EMU available */
#define RMU_PRESENT             /**< RMU is available in this part */
#define RMU_COUNT             1 /**< 1 RMU available */
#define CMU_PRESENT             /**< CMU is available in this part */
#define CMU_COUNT             1 /**< 1 CMU available */
#define EBI_PRESENT             /**< EBI is available in this part */
#define EBI_COUNT             1 /**< 1 EBI available */
#define RTC_PRESENT             /**< RTC is available in this part */
#define RTC_COUNT             1 /**< 1 RTC available */
#define PRS_PRESENT             /**< PRS is available in this part */
#define PRS_COUNT             1 /**< 1 PRS available */
#define GPIO_PRESENT            /**< GPIO is available in this part */
#define GPIO_COUNT            1 /**< 1 GPIO available */
#define VCMP_PRESENT            /**< VCMP is available in this part */
#define VCMP_COUNT            1 /**< 1 VCMP available */
#define HFXTAL_PRESENT          /**< HFXTAL is available in this part */
#define HFXTAL_COUNT          1 /**< 1 HFXTAL available */
#define LFXTAL_PRESENT          /**< LFXTAL is available in this part */
#define LFXTAL_COUNT          1 /**< 1 LFXTAL available */
#define WDOG_PRESENT            /**< WDOG is available in this part */
#define WDOG_COUNT            1 /**< 1 WDOG available */
#define DBG_PRESENT             /**< DBG is available in this part */
#define DBG_COUNT             1 /**< 1 DBG available */
#define BOOTLOADER_PRESENT      /**< BOOTLOADER is available in this part */
#define BOOTLOADER_COUNT      1 /**< 1 BOOTLOADER available */
#define ANALOG_PRESENT          /**< ANALOG is available in this part */
#define ANALOG_COUNT          1 /**< 1 ANALOG available */

#include "core_cm3.h"           /* Cortex-M3 processor and core peripherals */
#include "system_efm32g.h"       /* System Header */

/** @} End of group EFM32G290F64_Part */

/***************************************************************************//**
 * @defgroup EFM32G290F64_Peripheral_TypeDefs EFM32G290F64 Peripheral TypeDefs
 * @{
 * @brief Device Specific Peripheral Register Structures
 ******************************************************************************/

#include "efm32g_aes.h"
#include "efm32g_dma_ch.h"
#include "efm32g_dma.h"
#include "efm32g_msc.h"
#include "efm32g_emu.h"
#include "efm32g_rmu.h"

/***************************************************************************//**
 * @defgroup EFM32G290F64_CMU EFM32G290F64 CMU
 * @{
 * @brief EFM32G290F64_CMU Register Declaration
 ******************************************************************************/
typedef struct {
  __IOM uint32_t CTRL;          /**< CMU Control Register  */
  __IOM uint32_t HFCORECLKDIV;  /**< High Frequency Core Clock Division Register  */
  __IOM uint32_t HFPERCLKDIV;   /**< High Frequency Peripheral Clock Division Register  */
  __IOM uint32_t HFRCOCTRL;     /**< HFRCO Control Register  */
  __IOM uint32_t LFRCOCTRL;     /**< LFRCO Control Register  */
  __IOM uint32_t AUXHFRCOCTRL;  /**< AUXHFRCO Control Register  */
  __IOM uint32_t CALCTRL;       /**< Calibration Control Register  */
  __IOM uint32_t CALCNT;        /**< Calibration Counter Register  */
  __IOM uint32_t OSCENCMD;      /**< Oscillator Enable/Disable Command Register  */
  __IOM uint32_t CMD;           /**< Command Register  */
  __IOM uint32_t LFCLKSEL;      /**< Low Frequency Clock Select Register  */
  __IM uint32_t  STATUS;        /**< Status Register  */
  __IM uint32_t  IF;            /**< Interrupt Flag Register  */
  __IOM uint32_t IFS;           /**< Interrupt Flag Set Register  */
  __IOM uint32_t IFC;           /**< Interrupt Flag Clear Register  */
  __IOM uint32_t IEN;           /**< Interrupt Enable Register  */
  __IOM uint32_t HFCORECLKEN0;  /**< High Frequency Core Clock Enable Register 0  */
  __IOM uint32_t HFPERCLKEN0;   /**< High Frequency Peripheral Clock Enable Register 0  */
  uint32_t       RESERVED0[2U]; /**< Reserved for future use **/
  __IM uint32_t  SYNCBUSY;      /**< Synchronization Busy Register  */
  __IOM uint32_t FREEZE;        /**< Freeze Register  */
  __IOM uint32_t LFACLKEN0;     /**< Low Frequency A Clock Enable Register 0  (Async Reg)  */
  uint32_t       RESERVED1[1U]; /**< Reserved for future use **/
  __IOM uint32_t LFBCLKEN0;     /**< Low Frequency B Clock Enable Register 0 (Async Reg)  */
  uint32_t       RESERVED2[1U]; /**< Reserved for future use **/
  __IOM uint32_t LFAPRESC0;     /**< Low Frequency A Prescaler Register 0 (Async Reg)  */
  uint32_t       RESERVED3[1U]; /**< Reserved for future use **/
  __IOM uint32_t LFBPRESC0;     /**< Low Frequency B Prescaler Register 0  (Async Reg)  */
  uint32_t       RESERVED4[1U]; /**< Reserved for future use **/
  __IOM uint32_t PCNTCTRL;      /**< PCNT Control Register  */
  uint32_t       RESERVED5[1U]; /**< Reserved for future use **/
  __IOM uint32_t ROUTE;         /**< I/O Routing Register  */
  __IOM uint32_t LOCK;          /**< Configuration Lock Register  */
} CMU_TypeDef;                  /**< CMU Register Declaration *//** @} */

#include "efm32g_ebi.h"
#include "efm32g_timer_cc.h"
#include "efm32g_timer.h"
#include "efm32g_usart.h"
#include "efm32g_leuart.h"
#include "efm32g_rtc.h"
#include "efm32g_letimer.h"
#include "efm32g_pcnt.h"
#include "efm32g_acmp.h"
#include "efm32g_prs_ch.h"
#include "efm32g_prs.h"
#include "efm32g_dac.h"
#include "efm32g_gpio_p.h"
#include "efm32g_gpio.h"
#include "efm32g_vcmp.h"
#include "efm32g_adc.h"
#include "efm32g_i2c.h"
#include "efm32g_wdog.h"
#include "efm32g_dma_descriptor.h"
#include "efm32g_devinfo.h"
#include "efm32g_romtable.h"
#include "efm32g_calibrate.h"

/** @} End of group EFM32G290F64_Peripheral_TypeDefs */

/***************************************************************************//**
 * @defgroup EFM32G290F64_Peripheral_Base EFM32G290F64 Peripheral Memory Map
 * @{
 ******************************************************************************/

#define AES_BASE          (0x400E0000UL) /**< AES base address  */
#define DMA_BASE          (0x400C2000UL) /**< DMA base address  */
#define MSC_BASE          (0x400C0000UL) /**< MSC base address  */
#define EMU_BASE          (0x400C6000UL) /**< EMU base address  */
#define RMU_BASE          (0x400CA000UL) /**< RMU base address  */
#define CMU_BASE          (0x400C8000UL) /**< CMU base address  */
#define EBI_BASE          (0x40008000UL) /**< EBI base address  */
#define TIMER0_BASE       (0x40010000UL) /**< TIMER0 base address  */
#define TIMER1_BASE       (0x40010400UL) /**< TIMER1 base address  */
#define TIMER2_BASE       (0x40010800UL) /**< TIMER2 base address  */
#define USART0_BASE       (0x4000C000UL) /**< USART0 base address  */
#define USART1_BASE       (0x4000C400UL) /**< USART1 base address  */
#define USART2_BASE       (0x4000C800UL) /**< USART2 base address  */
#define UART0_BASE        (0x4000E000UL) /**< UART0 base address  */
#define LEUART0_BASE      (0x40084000UL) /**< LEUART0 base address  */
#define LEUART1_BASE      (0x40084400UL) /**< LEUART1 base address  */
#define RTC_BASE          (0x40080000UL) /**< RTC base address  */
#define LETIMER0_BASE     (0x40082000UL) /**< LETIMER0 base address  */
#define PCNT0_BASE        (0x40086000UL) /**< PCNT0 base address  */
#define PCNT1_BASE        (0x40086400UL) /**< PCNT1 base address  */
#define PCNT2_BASE        (0x40086800UL) /**< PCNT2 base address  */
#define ACMP0_BASE        (0x40001000UL) /**< ACMP0 base address  */
#define ACMP1_BASE        (0x40001400UL) /**< ACMP1 base address  */
#define PRS_BASE          (0x400CC000UL) /**< PRS base address  */
#define DAC0_BASE         (0x40004000UL) /**< DAC0 base address  */
#define GPIO_BASE         (0x40006000UL) /**< GPIO base address  */
#define VCMP_BASE         (0x40000000UL) /**< VCMP base address  */
#define ADC0_BASE         (0x40002000UL) /**< ADC0 base address  */
#define I2C0_BASE         (0x4000A000UL) /**< I2C0 base address  */
#define WDOG_BASE         (0x40088000UL) /**< WDOG base address  */
#define CALIBRATE_BASE    (0x0FE08000UL) /**< CALIBRATE base address */
#define DEVINFO_BASE      (0x0FE081B0UL) /**< DEVINFO base address */
#define ROMTABLE_BASE     (0xE00FFFD0UL) /**< ROMTABLE base address */
#define LOCKBITS_BASE     (0x0FE04000UL) /**< Lock-bits page base address */
#define USERDATA_BASE     (0x0FE00000UL) /**< User data page base address */

/** @} End of group EFM32G290F64_Peripheral_Base */

/***************************************************************************//**
 * @defgroup EFM32G290F64_Peripheral_Declaration  EFM32G290F64 Peripheral Declarations
 * @{
 ******************************************************************************/

#define AES          ((AES_TypeDef *) AES_BASE)             /**< AES base pointer */
#define DMA          ((DMA_TypeDef *) DMA_BASE)             /**< DMA base pointer */
#define MSC          ((MSC_TypeDef *) MSC_BASE)             /**< MSC base pointer */
#define EMU          ((EMU_TypeDef *) EMU_BASE)             /**< EMU base pointer */
#define RMU          ((RMU_TypeDef *) RMU_BASE)             /**< RMU base pointer */
#define CMU          ((CMU_TypeDef *) CMU_BASE)             /**< CMU base pointer */
#define EBI          ((EBI_TypeDef *) EBI_BASE)             /**< EBI base pointer */
#define TIMER0       ((TIMER_TypeDef *) TIMER0_BASE)        /**< TIMER0 base pointer */
#define TIMER1       ((TIMER_TypeDef *) TIMER1_BASE)        /**< TIMER1 base pointer */
#define TIMER2       ((TIMER_TypeDef *) TIMER2_BASE)        /**< TIMER2 base pointer */
#define USART0       ((USART_TypeDef *) USART0_BASE)        /**< USART0 base pointer */
#define USART1       ((USART_TypeDef *) USART1_BASE)        /**< USART1 base pointer */
#define USART2       ((USART_TypeDef *) USART2_BASE)        /**< USART2 base pointer */
#define UART0        ((USART_TypeDef *) UART0_BASE)         /**< UART0 base pointer */
#define LEUART0      ((LEUART_TypeDef *) LEUART0_BASE)      /**< LEUART0 base pointer */
#define LEUART1      ((LEUART_TypeDef *) LEUART1_BASE)      /**< LEUART1 base pointer */
#define RTC          ((RTC_TypeDef *) RTC_BASE)             /**< RTC base pointer */
#define LETIMER0     ((LETIMER_TypeDef *) LETIMER0_BASE)    /**< LETIMER0 base pointer */
#define PCNT0        ((PCNT_TypeDef *) PCNT0_BASE)          /**< PCNT0 base pointer */
#define PCNT1        ((PCNT_TypeDef *) PCNT1_BASE)          /**< PCNT1 base pointer */
#define PCNT2        ((PCNT_TypeDef *) PCNT2_BASE)          /**< PCNT2 base pointer */
#define ACMP0        ((ACMP_TypeDef *) ACMP0_BASE)          /**< ACMP0 base pointer */
#define ACMP1        ((ACMP_TypeDef *) ACMP1_BASE)          /**< ACMP1 base pointer */
#define PRS          ((PRS_TypeDef *) PRS_BASE)             /**< PRS base pointer */
#define DAC0         ((DAC_TypeDef *) DAC0_BASE)            /**< DAC0 base pointer */
#define GPIO         ((GPIO_TypeDef *) GPIO_BASE)           /**< GPIO base pointer */
#define VCMP         ((VCMP_TypeDef *) VCMP_BASE)           /**< VCMP base pointer */
#define ADC0         ((ADC_TypeDef *) ADC0_BASE)            /**< ADC0 base pointer */
#define I2C0         ((I2C_TypeDef *) I2C0_BASE)            /**< I2C0 base pointer */
#define WDOG         ((WDOG_TypeDef *) WDOG_BASE)           /**< WDOG base pointer */
#define CALIBRATE    ((CALIBRATE_TypeDef *) CALIBRATE_BASE) /**< CALIBRATE base pointer */
#define DEVINFO      ((DEVINFO_TypeDef *) DEVINFO_BASE)     /**< DEVINFO base pointer */
#define ROMTABLE     ((ROMTABLE_TypeDef *) ROMTABLE_BASE)   /**< ROMTABLE base pointer */

/** @} End of group EFM32G290F64_Peripheral_Declaration */

/***************************************************************************//**
 * @defgroup EFM32G290F64_BitFields EFM32G290F64 Bit Fields
 * @{
 ******************************************************************************/

#include "efm32g_prs_signals.h"
#include "efm32g_dmareq.h"
#include "efm32g_dmactrl.h"
#include "efm32g_uart.h"

/***************************************************************************//**
 * @defgroup EFM32G290F64_CMU_BitFields  EFM32G290F64_CMU Bit Fields
 * @{
 ******************************************************************************/

/* Bit fields for CMU CTRL */
#define _CMU_CTRL_RESETVALUE                       0x000C262CUL                             /**< Default value for CMU_CTRL */
#define _CMU_CTRL_MASK                             0x00FE3EEFUL                             /**< Mask for CMU_CTRL */
#define _CMU_CTRL_HFXOMODE_SHIFT                   0                                        /**< Shift value for CMU_HFXOMODE */
#define _CMU_CTRL_HFXOMODE_MASK                    0x3UL                                    /**< Bit mask for CMU_HFXOMODE */
#define _CMU_CTRL_HFXOMODE_DEFAULT                 0x00000000UL                             /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOMODE_XTAL                    0x00000000UL                             /**< Mode XTAL for CMU_CTRL */
#define _CMU_CTRL_HFXOMODE_BUFEXTCLK               0x00000001UL                             /**< Mode BUFEXTCLK for CMU_CTRL */
#define _CMU_CTRL_HFXOMODE_DIGEXTCLK               0x00000002UL                             /**< Mode DIGEXTCLK for CMU_CTRL */
#define CMU_CTRL_HFXOMODE_DEFAULT                  (_CMU_CTRL_HFXOMODE_DEFAULT << 0)        /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFXOMODE_XTAL                     (_CMU_CTRL_HFXOMODE_XTAL << 0)           /**< Shifted mode XTAL for CMU_CTRL */
#define CMU_CTRL_HFXOMODE_BUFEXTCLK                (_CMU_CTRL_HFXOMODE_BUFEXTCLK << 0)      /**< Shifted mode BUFEXTCLK for CMU_CTRL */
#define CMU_CTRL_HFXOMODE_DIGEXTCLK                (_CMU_CTRL_HFXOMODE_DIGEXTCLK << 0)      /**< Shifted mode DIGEXTCLK for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_SHIFT                  2                                        /**< Shift value for CMU_HFXOBOOST */
#define _CMU_CTRL_HFXOBOOST_MASK                   0xCUL                                    /**< Bit mask for CMU_HFXOBOOST */
#define _CMU_CTRL_HFXOBOOST_50PCENT                0x00000000UL                             /**< Mode 50PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_70PCENT                0x00000001UL                             /**< Mode 70PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_80PCENT                0x00000002UL                             /**< Mode 80PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_DEFAULT                0x00000003UL                             /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_100PCENT               0x00000003UL                             /**< Mode 100PCENT for CMU_CTRL */
#define CMU_CTRL_HFXOBOOST_50PCENT                 (_CMU_CTRL_HFXOBOOST_50PCENT << 2)       /**< Shifted mode 50PCENT for CMU_CTRL */
#define CMU_CTRL_HFXOBOOST_70PCENT                 (_CMU_CTRL_HFXOBOOST_70PCENT << 2)       /**< Shifted mode 70PCENT for CMU_CTRL */
#define CMU_CTRL_HFXOBOOST_80PCENT                 (_CMU_CTRL_HFXOBOOST_80PCENT << 2)       /**< Shifted mode 80PCENT for CMU_CTRL */
#define CMU_CTRL_HFXOBOOST_DEFAULT                 (_CMU_CTRL_HFXOBOOST_DEFAULT << 2)       /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFXOBOOST_100PCENT                (_CMU_CTRL_HFXOBOOST_100PCENT << 2)      /**< Shifted mode 100PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBUFCUR_SHIFT                 5                                        /**< Shift value for CMU_HFXOBUFCUR */
#define _CMU_CTRL_HFXOBUFCUR_MASK                  0x60UL                                   /**< Bit mask for CMU_HFXOBUFCUR */
#define _CMU_CTRL_HFXOBUFCUR_DEFAULT               0x00000001UL                             /**< Mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFXOBUFCUR_DEFAULT                (_CMU_CTRL_HFXOBUFCUR_DEFAULT << 5)      /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFXOGLITCHDETEN                   (0x1UL << 7)                             /**< HFXO Glitch Detector Enable */
#define _CMU_CTRL_HFXOGLITCHDETEN_SHIFT            7                                        /**< Shift value for CMU_HFXOGLITCHDETEN */
#define _CMU_CTRL_HFXOGLITCHDETEN_MASK             0x80UL                                   /**< Bit mask for CMU_HFXOGLITCHDETEN */
#define _CMU_CTRL_HFXOGLITCHDETEN_DEFAULT          0x00000000UL                             /**< Mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFXOGLITCHDETEN_DEFAULT           (_CMU_CTRL_HFXOGLITCHDETEN_DEFAULT << 7) /**< Shifted mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_SHIFT                9                                        /**< Shift value for CMU_HFXOTIMEOUT */
#define _CMU_CTRL_HFXOTIMEOUT_MASK                 0x600UL                                  /**< Bit mask for CMU_HFXOTIMEOUT */
#define _CMU_CTRL_HFXOTIMEOUT_8CYCLES              0x00000000UL                             /**< Mode 8CYCLES for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_256CYCLES            0x00000001UL                             /**< Mode 256CYCLES for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_1KCYCLES             0x00000002UL                             /**< Mode 1KCYCLES for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_DEFAULT              0x00000003UL                             /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_16KCYCLES            0x00000003UL                             /**< Mode 16KCYCLES for CMU_CTRL */
#define CMU_CTRL_HFXOTIMEOUT_8CYCLES               (_CMU_CTRL_HFXOTIMEOUT_8CYCLES << 9)     /**< Shifted mode 8CYCLES for CMU_CTRL */
#define CMU_CTRL_HFXOTIMEOUT_256CYCLES             (_CMU_CTRL_HFXOTIMEOUT_256CYCLES << 9)   /**< Shifted mode 256CYCLES for CMU_CTRL */
#define CMU_CTRL_HFXOTIMEOUT_1KCYCLES              (_CMU_CTRL_HFXOTIMEOUT_1KCYCLES << 9)    /**< Shifted mode 1KCYCLES for CMU_CTRL */
#define CMU_CTRL_HFXOTIMEOUT_DEFAULT               (_CMU_CTRL_HFXOTIMEOUT_DEFAULT << 9)     /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFXOTIMEOUT_16KCYCLES             (_CMU_CTRL_HFXOTIMEOUT_16KCYCLES << 9)   /**< Shifted mode 16KCYCLES for CMU_CTRL */
#define _CMU_CTRL_LFXOMODE_SHIFT                   11                                       /**< Shift value for CMU_LFXOMODE */
#define _CMU_CTRL_LFXOMODE_MASK                    0x1800UL                                 /**< Bit mask for CMU_LFXOMODE */
#define _CMU_CTRL_LFXOMODE_DEFAULT                 0x00000000UL                             /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_LFXOMODE_XTAL                    0x00000000UL                             /**< Mode XTAL for CMU_CTRL */
#define _CMU_CTRL_LFXOMODE_BUFEXTCLK               0x00000001UL                             /**< Mode BUFEXTCLK for CMU_CTRL */
#define _CMU_CTRL_LFXOMODE_DIGEXTCLK               0x00000002UL                             /**< Mode DIGEXTCLK for CMU_CTRL */
#define CMU_CTRL_LFXOMODE_DEFAULT                  (_CMU_CTRL_LFXOMODE_DEFAULT << 11)       /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_LFXOMODE_XTAL                     (_CMU_CTRL_LFXOMODE_XTAL << 11)          /**< Shifted mode XTAL for CMU_CTRL */
#define CMU_CTRL_LFXOMODE_BUFEXTCLK                (_CMU_CTRL_LFXOMODE_BUFEXTCLK << 11)     /**< Shifted mode BUFEXTCLK for CMU_CTRL */
#define CMU_CTRL_LFXOMODE_DIGEXTCLK                (_CMU_CTRL_LFXOMODE_DIGEXTCLK << 11)     /**< Shifted mode DIGEXTCLK for CMU_CTRL */
#define CMU_CTRL_LFXOBOOST                         (0x1UL << 13)                            /**< LFXO Start-up Boost Current */
#define _CMU_CTRL_LFXOBOOST_SHIFT                  13                                       /**< Shift value for CMU_LFXOBOOST */
#define _CMU_CTRL_LFXOBOOST_MASK                   0x2000UL                                 /**< Bit mask for CMU_LFXOBOOST */
#define _CMU_CTRL_LFXOBOOST_70PCENT                0x00000000UL                             /**< Mode 70PCENT for CMU_CTRL */
#define _CMU_CTRL_LFXOBOOST_DEFAULT                0x00000001UL                             /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_LFXOBOOST_100PCENT               0x00000001UL                             /**< Mode 100PCENT for CMU_CTRL */
#define CMU_CTRL_LFXOBOOST_70PCENT                 (_CMU_CTRL_LFXOBOOST_70PCENT << 13)      /**< Shifted mode 70PCENT for CMU_CTRL */
#define CMU_CTRL_LFXOBOOST_DEFAULT                 (_CMU_CTRL_LFXOBOOST_DEFAULT << 13)      /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_LFXOBOOST_100PCENT                (_CMU_CTRL_LFXOBOOST_100PCENT << 13)     /**< Shifted mode 100PCENT for CMU_CTRL */
#define CMU_CTRL_LFXOBUFCUR                        (0x1UL << 17)                            /**< LFXO Boost Buffer Current */
#define _CMU_CTRL_LFXOBUFCUR_SHIFT                 17                                       /**< Shift value for CMU_LFXOBUFCUR */
#define _CMU_CTRL_LFXOBUFCUR_MASK                  0x20000UL                                /**< Bit mask for CMU_LFXOBUFCUR */
#define _CMU_CTRL_LFXOBUFCUR_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_LFXOBUFCUR_DEFAULT                (_CMU_CTRL_LFXOBUFCUR_DEFAULT << 17)     /**< Shifted mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_SHIFT                18                                       /**< Shift value for CMU_LFXOTIMEOUT */
#define _CMU_CTRL_LFXOTIMEOUT_MASK                 0xC0000UL                                /**< Bit mask for CMU_LFXOTIMEOUT */
#define _CMU_CTRL_LFXOTIMEOUT_8CYCLES              0x00000000UL                             /**< Mode 8CYCLES for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_1KCYCLES             0x00000001UL                             /**< Mode 1KCYCLES for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_16KCYCLES            0x00000002UL                             /**< Mode 16KCYCLES for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_DEFAULT              0x00000003UL                             /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_32KCYCLES            0x00000003UL                             /**< Mode 32KCYCLES for CMU_CTRL */
#define CMU_CTRL_LFXOTIMEOUT_8CYCLES               (_CMU_CTRL_LFXOTIMEOUT_8CYCLES << 18)    /**< Shifted mode 8CYCLES for CMU_CTRL */
#define CMU_CTRL_LFXOTIMEOUT_1KCYCLES              (_CMU_CTRL_LFXOTIMEOUT_1KCYCLES << 18)   /**< Shifted mode 1KCYCLES for CMU_CTRL */
#define CMU_CTRL_LFXOTIMEOUT_16KCYCLES             (_CMU_CTRL_LFXOTIMEOUT_16KCYCLES << 18)  /**< Shifted mode 16KCYCLES for CMU_CTRL */
#define CMU_CTRL_LFXOTIMEOUT_DEFAULT               (_CMU_CTRL_LFXOTIMEOUT_DEFAULT << 18)    /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_LFXOTIMEOUT_32KCYCLES             (_CMU_CTRL_LFXOTIMEOUT_32KCYCLES << 18)  /**< Shifted mode 32KCYCLES for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_SHIFT                 20                                       /**< Shift value for CMU_CLKOUTSEL0 */
#define _CMU_CTRL_CLKOUTSEL0_MASK                  0x700000UL                               /**< Bit mask for CMU_CLKOUTSEL0 */
#define _CMU_CTRL_CLKOUTSEL0_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFRCO                 0x00000000UL                             /**< Mode HFRCO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFXO                  0x00000001UL                             /**< Mode HFXO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFCLK2                0x00000002UL                             /**< Mode HFCLK2 for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFCLK4                0x00000003UL                             /**< Mode HFCLK4 for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFCLK8                0x00000004UL                             /**< Mode HFCLK8 for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFCLK16               0x00000005UL                             /**< Mode HFCLK16 for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_ULFRCO                0x00000006UL                             /**< Mode ULFRCO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_DEFAULT                (_CMU_CTRL_CLKOUTSEL0_DEFAULT << 20)     /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFRCO                  (_CMU_CTRL_CLKOUTSEL0_HFRCO << 20)       /**< Shifted mode HFRCO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFXO                   (_CMU_CTRL_CLKOUTSEL0_HFXO << 20)        /**< Shifted mode HFXO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFCLK2                 (_CMU_CTRL_CLKOUTSEL0_HFCLK2 << 20)      /**< Shifted mode HFCLK2 for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFCLK4                 (_CMU_CTRL_CLKOUTSEL0_HFCLK4 << 20)      /**< Shifted mode HFCLK4 for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFCLK8                 (_CMU_CTRL_CLKOUTSEL0_HFCLK8 << 20)      /**< Shifted mode HFCLK8 for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFCLK16                (_CMU_CTRL_CLKOUTSEL0_HFCLK16 << 20)     /**< Shifted mode HFCLK16 for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_ULFRCO                 (_CMU_CTRL_CLKOUTSEL0_ULFRCO << 20)      /**< Shifted mode ULFRCO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1                        (0x1UL << 23)                            /**< Clock Output Select 1 */
#define _CMU_CTRL_CLKOUTSEL1_SHIFT                 23                                       /**< Shift value for CMU_CLKOUTSEL1 */
#define _CMU_CTRL_CLKOUTSEL1_MASK                  0x800000UL                               /**< Bit mask for CMU_CLKOUTSEL1 */
#define _CMU_CTRL_CLKOUTSEL1_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_LFRCO                 0x00000000UL                             /**< Mode LFRCO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_LFXO                  0x00000001UL                             /**< Mode LFXO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_DEFAULT                (_CMU_CTRL_CLKOUTSEL1_DEFAULT << 23)     /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_LFRCO                  (_CMU_CTRL_CLKOUTSEL1_LFRCO << 23)       /**< Shifted mode LFRCO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_LFXO                   (_CMU_CTRL_CLKOUTSEL1_LFXO << 23)        /**< Shifted mode LFXO for CMU_CTRL */

/* Bit fields for CMU HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_RESETVALUE               0x00000000UL                                   /**< Default value for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_MASK                     0x0000000FUL                                   /**< Mask for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_SHIFT       0                                              /**< Shift value for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_MASK        0xFUL                                          /**< Bit mask for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_DEFAULT     0x00000000UL                                   /**< Mode DEFAULT for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK       0x00000000UL                                   /**< Mode HFCLK for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK2      0x00000001UL                                   /**< Mode HFCLK2 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK4      0x00000002UL                                   /**< Mode HFCLK4 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK8      0x00000003UL                                   /**< Mode HFCLK8 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK16     0x00000004UL                                   /**< Mode HFCLK16 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK32     0x00000005UL                                   /**< Mode HFCLK32 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK64     0x00000006UL                                   /**< Mode HFCLK64 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK128    0x00000007UL                                   /**< Mode HFCLK128 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK256    0x00000008UL                                   /**< Mode HFCLK256 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK512    0x00000009UL                                   /**< Mode HFCLK512 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_DEFAULT      (_CMU_HFCORECLKDIV_HFCORECLKDIV_DEFAULT << 0)  /**< Shifted mode DEFAULT for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK        (_CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK << 0)    /**< Shifted mode HFCLK for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK2       (_CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK2 << 0)   /**< Shifted mode HFCLK2 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK4       (_CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK4 << 0)   /**< Shifted mode HFCLK4 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK8       (_CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK8 << 0)   /**< Shifted mode HFCLK8 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK16      (_CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK16 << 0)  /**< Shifted mode HFCLK16 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK32      (_CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK32 << 0)  /**< Shifted mode HFCLK32 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK64      (_CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK64 << 0)  /**< Shifted mode HFCLK64 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK128     (_CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK128 << 0) /**< Shifted mode HFCLK128 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK256     (_CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK256 << 0) /**< Shifted mode HFCLK256 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK512     (_CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK512 << 0) /**< Shifted mode HFCLK512 for CMU_HFCORECLKDIV */

/* Bit fields for CMU HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_RESETVALUE                0x00000100UL                                 /**< Default value for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_MASK                      0x0000010FUL                                 /**< Mask for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_SHIFT         0                                            /**< Shift value for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_MASK          0xFUL                                        /**< Bit mask for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_DEFAULT       0x00000000UL                                 /**< Mode DEFAULT for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK         0x00000000UL                                 /**< Mode HFCLK for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK2        0x00000001UL                                 /**< Mode HFCLK2 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK4        0x00000002UL                                 /**< Mode HFCLK4 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK8        0x00000003UL                                 /**< Mode HFCLK8 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK16       0x00000004UL                                 /**< Mode HFCLK16 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK32       0x00000005UL                                 /**< Mode HFCLK32 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK64       0x00000006UL                                 /**< Mode HFCLK64 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK128      0x00000007UL                                 /**< Mode HFCLK128 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK256      0x00000008UL                                 /**< Mode HFCLK256 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK512      0x00000009UL                                 /**< Mode HFCLK512 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_DEFAULT        (_CMU_HFPERCLKDIV_HFPERCLKDIV_DEFAULT << 0)  /**< Shifted mode DEFAULT for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK          (_CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK << 0)    /**< Shifted mode HFCLK for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK2         (_CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK2 << 0)   /**< Shifted mode HFCLK2 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK4         (_CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK4 << 0)   /**< Shifted mode HFCLK4 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK8         (_CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK8 << 0)   /**< Shifted mode HFCLK8 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK16        (_CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK16 << 0)  /**< Shifted mode HFCLK16 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK32        (_CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK32 << 0)  /**< Shifted mode HFCLK32 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK64        (_CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK64 << 0)  /**< Shifted mode HFCLK64 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK128       (_CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK128 << 0) /**< Shifted mode HFCLK128 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK256       (_CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK256 << 0) /**< Shifted mode HFCLK256 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK512       (_CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK512 << 0) /**< Shifted mode HFCLK512 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKEN                 (0x1UL << 8)                                 /**< HFPERCLK Enable */
#define _CMU_HFPERCLKDIV_HFPERCLKEN_SHIFT          8                                            /**< Shift value for CMU_HFPERCLKEN */
#define _CMU_HFPERCLKDIV_HFPERCLKEN_MASK           0x100UL                                      /**< Bit mask for CMU_HFPERCLKEN */
#define _CMU_HFPERCLKDIV_HFPERCLKEN_DEFAULT        0x00000001UL                                 /**< Mode DEFAULT for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKEN_DEFAULT         (_CMU_HFPERCLKDIV_HFPERCLKEN_DEFAULT << 8)   /**< Shifted mode DEFAULT for CMU_HFPERCLKDIV */

/* Bit fields for CMU HFRCOCTRL */
#define _CMU_HFRCOCTRL_RESETVALUE                  0x00000380UL                           /**< Default value for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_MASK                        0x0001F7FFUL                           /**< Mask for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_TUNING_SHIFT                0                                      /**< Shift value for CMU_TUNING */
#define _CMU_HFRCOCTRL_TUNING_MASK                 0xFFUL                                 /**< Bit mask for CMU_TUNING */
#define _CMU_HFRCOCTRL_TUNING_DEFAULT              0x00000080UL                           /**< Mode DEFAULT for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_TUNING_DEFAULT               (_CMU_HFRCOCTRL_TUNING_DEFAULT << 0)   /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_SHIFT                  8                                      /**< Shift value for CMU_BAND */
#define _CMU_HFRCOCTRL_BAND_MASK                   0x700UL                                /**< Bit mask for CMU_BAND */
#define _CMU_HFRCOCTRL_BAND_1MHZ                   0x00000000UL                           /**< Mode 1MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_7MHZ                   0x00000001UL                           /**< Mode 7MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_11MHZ                  0x00000002UL                           /**< Mode 11MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_DEFAULT                0x00000003UL                           /**< Mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_14MHZ                  0x00000003UL                           /**< Mode 14MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_21MHZ                  0x00000004UL                           /**< Mode 21MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_28MHZ                  0x00000005UL                           /**< Mode 28MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_1MHZ                    (_CMU_HFRCOCTRL_BAND_1MHZ << 8)        /**< Shifted mode 1MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_7MHZ                    (_CMU_HFRCOCTRL_BAND_7MHZ << 8)        /**< Shifted mode 7MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_11MHZ                   (_CMU_HFRCOCTRL_BAND_11MHZ << 8)       /**< Shifted mode 11MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_DEFAULT                 (_CMU_HFRCOCTRL_BAND_DEFAULT << 8)     /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_14MHZ                   (_CMU_HFRCOCTRL_BAND_14MHZ << 8)       /**< Shifted mode 14MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_21MHZ                   (_CMU_HFRCOCTRL_BAND_21MHZ << 8)       /**< Shifted mode 21MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_28MHZ                   (_CMU_HFRCOCTRL_BAND_28MHZ << 8)       /**< Shifted mode 28MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_SUDELAY_SHIFT               12                                     /**< Shift value for CMU_SUDELAY */
#define _CMU_HFRCOCTRL_SUDELAY_MASK                0x1F000UL                              /**< Bit mask for CMU_SUDELAY */
#define _CMU_HFRCOCTRL_SUDELAY_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_SUDELAY_DEFAULT              (_CMU_HFRCOCTRL_SUDELAY_DEFAULT << 12) /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */

/* Bit fields for CMU LFRCOCTRL */
#define _CMU_LFRCOCTRL_RESETVALUE                  0x00000040UL                         /**< Default value for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_MASK                        0x0000007FUL                         /**< Mask for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_TUNING_SHIFT                0                                    /**< Shift value for CMU_TUNING */
#define _CMU_LFRCOCTRL_TUNING_MASK                 0x7FUL                               /**< Bit mask for CMU_TUNING */
#define _CMU_LFRCOCTRL_TUNING_DEFAULT              0x00000040UL                         /**< Mode DEFAULT for CMU_LFRCOCTRL */
#define CMU_LFRCOCTRL_TUNING_DEFAULT               (_CMU_LFRCOCTRL_TUNING_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_LFRCOCTRL */

/* Bit fields for CMU AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_RESETVALUE               0x00000080UL                            /**< Default value for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_MASK                     0x000000FFUL                            /**< Mask for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_TUNING_SHIFT             0                                       /**< Shift value for CMU_TUNING */
#define _CMU_AUXHFRCOCTRL_TUNING_MASK              0xFFUL                                  /**< Bit mask for CMU_TUNING */
#define _CMU_AUXHFRCOCTRL_TUNING_DEFAULT           0x00000080UL                            /**< Mode DEFAULT for CMU_AUXHFRCOCTRL */
#define CMU_AUXHFRCOCTRL_TUNING_DEFAULT            (_CMU_AUXHFRCOCTRL_TUNING_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_AUXHFRCOCTRL */

/* Bit fields for CMU CALCTRL */
#define _CMU_CALCTRL_RESETVALUE                    0x00000000UL                       /**< Default value for CMU_CALCTRL */
#define _CMU_CALCTRL_MASK                          0x00000007UL                       /**< Mask for CMU_CALCTRL */
#define _CMU_CALCTRL_UPSEL_SHIFT                   0                                  /**< Shift value for CMU_UPSEL */
#define _CMU_CALCTRL_UPSEL_MASK                    0x7UL                              /**< Bit mask for CMU_UPSEL */
#define _CMU_CALCTRL_UPSEL_DEFAULT                 0x00000000UL                       /**< Mode DEFAULT for CMU_CALCTRL */
#define _CMU_CALCTRL_UPSEL_HFXO                    0x00000000UL                       /**< Mode HFXO for CMU_CALCTRL */
#define _CMU_CALCTRL_UPSEL_LFXO                    0x00000001UL                       /**< Mode LFXO for CMU_CALCTRL */
#define _CMU_CALCTRL_UPSEL_HFRCO                   0x00000002UL                       /**< Mode HFRCO for CMU_CALCTRL */
#define _CMU_CALCTRL_UPSEL_LFRCO                   0x00000003UL                       /**< Mode LFRCO for CMU_CALCTRL */
#define _CMU_CALCTRL_UPSEL_AUXHFRCO                0x00000004UL                       /**< Mode AUXHFRCO for CMU_CALCTRL */
#define CMU_CALCTRL_UPSEL_DEFAULT                  (_CMU_CALCTRL_UPSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for CMU_CALCTRL */
#define CMU_CALCTRL_UPSEL_HFXO                     (_CMU_CALCTRL_UPSEL_HFXO << 0)     /**< Shifted mode HFXO for CMU_CALCTRL */
#define CMU_CALCTRL_UPSEL_LFXO                     (_CMU_CALCTRL_UPSEL_LFXO << 0)     /**< Shifted mode LFXO for CMU_CALCTRL */
#define CMU_CALCTRL_UPSEL_HFRCO                    (_CMU_CALCTRL_UPSEL_HFRCO << 0)    /**< Shifted mode HFRCO for CMU_CALCTRL */
#define CMU_CALCTRL_UPSEL_LFRCO                    (_CMU_CALCTRL_UPSEL_LFRCO << 0)    /**< Shifted mode LFRCO for CMU_CALCTRL */
#define CMU_CALCTRL_UPSEL_AUXHFRCO                 (_CMU_CALCTRL_UPSEL_AUXHFRCO << 0) /**< Shifted mode AUXHFRCO for CMU_CALCTRL */

/* Bit fields for CMU CALCNT */
#define _CMU_CALCNT_RESETVALUE                     0x00000000UL                      /**< Default value for CMU_CALCNT */
#define _CMU_CALCNT_MASK                           0x000FFFFFUL                      /**< Mask for CMU_CALCNT */
#define _CMU_CALCNT_CALCNT_SHIFT                   0                                 /**< Shift value for CMU_CALCNT */
#define _CMU_CALCNT_CALCNT_MASK                    0xFFFFFUL                         /**< Bit mask for CMU_CALCNT */
#define _CMU_CALCNT_CALCNT_DEFAULT                 0x00000000UL                      /**< Mode DEFAULT for CMU_CALCNT */
#define CMU_CALCNT_CALCNT_DEFAULT                  (_CMU_CALCNT_CALCNT_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_CALCNT */

/* Bit fields for CMU OSCENCMD */
#define _CMU_OSCENCMD_RESETVALUE                   0x00000000UL                             /**< Default value for CMU_OSCENCMD */
#define _CMU_OSCENCMD_MASK                         0x000003FFUL                             /**< Mask for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFRCOEN                       (0x1UL << 0)                             /**< HFRCO Enable */
#define _CMU_OSCENCMD_HFRCOEN_SHIFT                0                                        /**< Shift value for CMU_HFRCOEN */
#define _CMU_OSCENCMD_HFRCOEN_MASK                 0x1UL                                    /**< Bit mask for CMU_HFRCOEN */
#define _CMU_OSCENCMD_HFRCOEN_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFRCOEN_DEFAULT               (_CMU_OSCENCMD_HFRCOEN_DEFAULT << 0)     /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFRCODIS                      (0x1UL << 1)                             /**< HFRCO Disable */
#define _CMU_OSCENCMD_HFRCODIS_SHIFT               1                                        /**< Shift value for CMU_HFRCODIS */
#define _CMU_OSCENCMD_HFRCODIS_MASK                0x2UL                                    /**< Bit mask for CMU_HFRCODIS */
#define _CMU_OSCENCMD_HFRCODIS_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFRCODIS_DEFAULT              (_CMU_OSCENCMD_HFRCODIS_DEFAULT << 1)    /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFXOEN                        (0x1UL << 2)                             /**< HFXO Enable */
#define _CMU_OSCENCMD_HFXOEN_SHIFT                 2                                        /**< Shift value for CMU_HFXOEN */
#define _CMU_OSCENCMD_HFXOEN_MASK                  0x4UL                                    /**< Bit mask for CMU_HFXOEN */
#define _CMU_OSCENCMD_HFXOEN_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFXOEN_DEFAULT                (_CMU_OSCENCMD_HFXOEN_DEFAULT << 2)      /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFXODIS                       (0x1UL << 3)                             /**< HFXO Disable */
#define _CMU_OSCENCMD_HFXODIS_SHIFT                3                                        /**< Shift value for CMU_HFXODIS */
#define _CMU_OSCENCMD_HFXODIS_MASK                 0x8UL                                    /**< Bit mask for CMU_HFXODIS */
#define _CMU_OSCENCMD_HFXODIS_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFXODIS_DEFAULT               (_CMU_OSCENCMD_HFXODIS_DEFAULT << 3)     /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_AUXHFRCOEN                    (0x1UL << 4)                             /**< AUXHFRCO Enable */
#define _CMU_OSCENCMD_AUXHFRCOEN_SHIFT             4                                        /**< Shift value for CMU_AUXHFRCOEN */
#define _CMU_OSCENCMD_AUXHFRCOEN_MASK              0x10UL                                   /**< Bit mask for CMU_AUXHFRCOEN */
#define _CMU_OSCENCMD_AUXHFRCOEN_DEFAULT           0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_AUXHFRCOEN_DEFAULT            (_CMU_OSCENCMD_AUXHFRCOEN_DEFAULT << 4)  /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_AUXHFRCODIS                   (0x1UL << 5)                             /**< AUXHFRCO Disable */
#define _CMU_OSCENCMD_AUXHFRCODIS_SHIFT            5                                        /**< Shift value for CMU_AUXHFRCODIS */
#define _CMU_OSCENCMD_AUXHFRCODIS_MASK             0x20UL                                   /**< Bit mask for CMU_AUXHFRCODIS */
#define _CMU_OSCENCMD_AUXHFRCODIS_DEFAULT          0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_AUXHFRCODIS_DEFAULT           (_CMU_OSCENCMD_AUXHFRCODIS_DEFAULT << 5) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFRCOEN                       (0x1UL << 6)                             /**< LFRCO Enable */
#define _CMU_OSCENCMD_LFRCOEN_SHIFT                6                                        /**< Shift value for CMU_LFRCOEN */
#define _CMU_OSCENCMD_LFRCOEN_MASK                 0x40UL                                   /**< Bit mask for CMU_LFRCOEN */
#define _CMU_OSCENCMD_LFRCOEN_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFRCOEN_DEFAULT               (_CMU_OSCENCMD_LFRCOEN_DEFAULT << 6)     /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFRCODIS                      (0x1UL << 7)                             /**< LFRCO Disable */
#define _CMU_OSCENCMD_LFRCODIS_SHIFT               7                                        /**< Shift value for CMU_LFRCODIS */
#define _CMU_OSCENCMD_LFRCODIS_MASK                0x80UL                                   /**< Bit mask for CMU_LFRCODIS */
#define _CMU_OSCENCMD_LFRCODIS_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFRCODIS_DEFAULT              (_CMU_OSCENCMD_LFRCODIS_DEFAULT << 7)    /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFXOEN                        (0x1UL << 8)                             /**< LFXO Enable */
#define _CMU_OSCENCMD_LFXOEN_SHIFT                 8                                        /**< Shift value for CMU_LFXOEN */
#define _CMU_OSCENCMD_LFXOEN_MASK                  0x100UL                                  /**< Bit mask for CMU_LFXOEN */
#define _CMU_OSCENCMD_LFXOEN_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFXOEN_DEFAULT                (_CMU_OSCENCMD_LFXOEN_DEFAULT << 8)      /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFXODIS                       (0x1UL << 9)                             /**< LFXO Disable */
#define _CMU_OSCENCMD_LFXODIS_SHIFT                9                                        /**< Shift value for CMU_LFXODIS */
#define _CMU_OSCENCMD_LFXODIS_MASK                 0x200UL                                  /**< Bit mask for CMU_LFXODIS */
#define _CMU_OSCENCMD_LFXODIS_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFXODIS_DEFAULT               (_CMU_OSCENCMD_LFXODIS_DEFAULT << 9)     /**< Shifted mode DEFAULT for CMU_OSCENCMD */

/* Bit fields for CMU CMD */
#define _CMU_CMD_RESETVALUE                        0x00000000UL                     /**< Default value for CMU_CMD */
#define _CMU_CMD_MASK                              0x0000000FUL                     /**< Mask for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_SHIFT                    0                                /**< Shift value for CMU_HFCLKSEL */
#define _CMU_CMD_HFCLKSEL_MASK                     0x7UL                            /**< Bit mask for CMU_HFCLKSEL */
#define _CMU_CMD_HFCLKSEL_DEFAULT                  0x00000000UL                     /**< Mode DEFAULT for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_HFRCO                    0x00000001UL                     /**< Mode HFRCO for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_HFXO                     0x00000002UL                     /**< Mode HFXO for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_LFRCO                    0x00000003UL                     /**< Mode LFRCO for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_LFXO                     0x00000004UL                     /**< Mode LFXO for CMU_CMD */
#define CMU_CMD_HFCLKSEL_DEFAULT                   (_CMU_CMD_HFCLKSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_CMD */
#define CMU_CMD_HFCLKSEL_HFRCO                     (_CMU_CMD_HFCLKSEL_HFRCO << 0)   /**< Shifted mode HFRCO for CMU_CMD */
#define CMU_CMD_HFCLKSEL_HFXO                      (_CMU_CMD_HFCLKSEL_HFXO << 0)    /**< Shifted mode HFXO for CMU_CMD */
#define CMU_CMD_HFCLKSEL_LFRCO                     (_CMU_CMD_HFCLKSEL_LFRCO << 0)   /**< Shifted mode LFRCO for CMU_CMD */
#define CMU_CMD_HFCLKSEL_LFXO                      (_CMU_CMD_HFCLKSEL_LFXO << 0)    /**< Shifted mode LFXO for CMU_CMD */
#define CMU_CMD_CALSTART                           (0x1UL << 3)                     /**< Calibration Start */
#define _CMU_CMD_CALSTART_SHIFT                    3                                /**< Shift value for CMU_CALSTART */
#define _CMU_CMD_CALSTART_MASK                     0x8UL                            /**< Bit mask for CMU_CALSTART */
#define _CMU_CMD_CALSTART_DEFAULT                  0x00000000UL                     /**< Mode DEFAULT for CMU_CMD */
#define CMU_CMD_CALSTART_DEFAULT                   (_CMU_CMD_CALSTART_DEFAULT << 3) /**< Shifted mode DEFAULT for CMU_CMD */

/* Bit fields for CMU LFCLKSEL */
#define _CMU_LFCLKSEL_RESETVALUE                   0x00000005UL                             /**< Default value for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_MASK                         0x0000000FUL                             /**< Mask for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_SHIFT                    0                                        /**< Shift value for CMU_LFA */
#define _CMU_LFCLKSEL_LFA_MASK                     0x3UL                                    /**< Bit mask for CMU_LFA */
#define _CMU_LFCLKSEL_LFA_DISABLED                 0x00000000UL                             /**< Mode DISABLED for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_DEFAULT                  0x00000001UL                             /**< Mode DEFAULT for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_LFRCO                    0x00000001UL                             /**< Mode LFRCO for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_LFXO                     0x00000002UL                             /**< Mode LFXO for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_HFCORECLKLEDIV2          0x00000003UL                             /**< Mode HFCORECLKLEDIV2 for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFA_DISABLED                  (_CMU_LFCLKSEL_LFA_DISABLED << 0)        /**< Shifted mode DISABLED for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFA_DEFAULT                   (_CMU_LFCLKSEL_LFA_DEFAULT << 0)         /**< Shifted mode DEFAULT for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFA_LFRCO                     (_CMU_LFCLKSEL_LFA_LFRCO << 0)           /**< Shifted mode LFRCO for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFA_LFXO                      (_CMU_LFCLKSEL_LFA_LFXO << 0)            /**< Shifted mode LFXO for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFA_HFCORECLKLEDIV2           (_CMU_LFCLKSEL_LFA_HFCORECLKLEDIV2 << 0) /**< Shifted mode HFCORECLKLEDIV2 for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_SHIFT                    2                                        /**< Shift value for CMU_LFB */
#define _CMU_LFCLKSEL_LFB_MASK                     0xCUL                                    /**< Bit mask for CMU_LFB */
#define _CMU_LFCLKSEL_LFB_DISABLED                 0x00000000UL                             /**< Mode DISABLED for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_DEFAULT                  0x00000001UL                             /**< Mode DEFAULT for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_LFRCO                    0x00000001UL                             /**< Mode LFRCO for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_LFXO                     0x00000002UL                             /**< Mode LFXO for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_HFCORECLKLEDIV2          0x00000003UL                             /**< Mode HFCORECLKLEDIV2 for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFB_DISABLED                  (_CMU_LFCLKSEL_LFB_DISABLED << 2)        /**< Shifted mode DISABLED for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFB_DEFAULT                   (_CMU_LFCLKSEL_LFB_DEFAULT << 2)         /**< Shifted mode DEFAULT for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFB_LFRCO                     (_CMU_LFCLKSEL_LFB_LFRCO << 2)           /**< Shifted mode LFRCO for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFB_LFXO                      (_CMU_LFCLKSEL_LFB_LFXO << 2)            /**< Shifted mode LFXO for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFB_HFCORECLKLEDIV2           (_CMU_LFCLKSEL_LFB_HFCORECLKLEDIV2 << 2) /**< Shifted mode HFCORECLKLEDIV2 for CMU_LFCLKSEL */

/* Bit fields for CMU STATUS */
#define _CMU_STATUS_RESETVALUE                     0x00000403UL                           /**< Default value for CMU_STATUS */
#define _CMU_STATUS_MASK                           0x00007FFFUL                           /**< Mask for CMU_STATUS */
#define CMU_STATUS_HFRCOENS                        (0x1UL << 0)                           /**< HFRCO Enable Status */
#define _CMU_STATUS_HFRCOENS_SHIFT                 0                                      /**< Shift value for CMU_HFRCOENS */
#define _CMU_STATUS_HFRCOENS_MASK                  0x1UL                                  /**< Bit mask for CMU_HFRCOENS */
#define _CMU_STATUS_HFRCOENS_DEFAULT               0x00000001UL                           /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFRCOENS_DEFAULT                (_CMU_STATUS_HFRCOENS_DEFAULT << 0)    /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFRCORDY                        (0x1UL << 1)                           /**< HFRCO Ready */
#define _CMU_STATUS_HFRCORDY_SHIFT                 1                                      /**< Shift value for CMU_HFRCORDY */
#define _CMU_STATUS_HFRCORDY_MASK                  0x2UL                                  /**< Bit mask for CMU_HFRCORDY */
#define _CMU_STATUS_HFRCORDY_DEFAULT               0x00000001UL                           /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFRCORDY_DEFAULT                (_CMU_STATUS_HFRCORDY_DEFAULT << 1)    /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOENS                         (0x1UL << 2)                           /**< HFXO Enable Status */
#define _CMU_STATUS_HFXOENS_SHIFT                  2                                      /**< Shift value for CMU_HFXOENS */
#define _CMU_STATUS_HFXOENS_MASK                   0x4UL                                  /**< Bit mask for CMU_HFXOENS */
#define _CMU_STATUS_HFXOENS_DEFAULT                0x00000000UL                           /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOENS_DEFAULT                 (_CMU_STATUS_HFXOENS_DEFAULT << 2)     /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXORDY                         (0x1UL << 3)                           /**< HFXO Ready */
#define _CMU_STATUS_HFXORDY_SHIFT                  3                                      /**< Shift value for CMU_HFXORDY */
#define _CMU_STATUS_HFXORDY_MASK                   0x8UL                                  /**< Bit mask for CMU_HFXORDY */
#define _CMU_STATUS_HFXORDY_DEFAULT                0x00000000UL                           /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXORDY_DEFAULT                 (_CMU_STATUS_HFXORDY_DEFAULT << 3)     /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_AUXHFRCOENS                     (0x1UL << 4)                           /**< AUXHFRCO Enable Status */
#define _CMU_STATUS_AUXHFRCOENS_SHIFT              4                                      /**< Shift value for CMU_AUXHFRCOENS */
#define _CMU_STATUS_AUXHFRCOENS_MASK               0x10UL                                 /**< Bit mask for CMU_AUXHFRCOENS */
#define _CMU_STATUS_AUXHFRCOENS_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_AUXHFRCOENS_DEFAULT             (_CMU_STATUS_AUXHFRCOENS_DEFAULT << 4) /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_AUXHFRCORDY                     (0x1UL << 5)                           /**< AUXHFRCO Ready */
#define _CMU_STATUS_AUXHFRCORDY_SHIFT              5                                      /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_STATUS_AUXHFRCORDY_MASK               0x20UL                                 /**< Bit mask for CMU_AUXHFRCORDY */
#define _CMU_STATUS_AUXHFRCORDY_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_AUXHFRCORDY_DEFAULT             (_CMU_STATUS_AUXHFRCORDY_DEFAULT << 5) /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCOENS                        (0x1UL << 6)                           /**< LFRCO Enable Status */
#define _CMU_STATUS_LFRCOENS_SHIFT                 6                                      /**< Shift value for CMU_LFRCOENS */
#define _CMU_STATUS_LFRCOENS_MASK                  0x40UL                                 /**< Bit mask for CMU_LFRCOENS */
#define _CMU_STATUS_LFRCOENS_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCOENS_DEFAULT                (_CMU_STATUS_LFRCOENS_DEFAULT << 6)    /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCORDY                        (0x1UL << 7)                           /**< LFRCO Ready */
#define _CMU_STATUS_LFRCORDY_SHIFT                 7                                      /**< Shift value for CMU_LFRCORDY */
#define _CMU_STATUS_LFRCORDY_MASK                  0x80UL                                 /**< Bit mask for CMU_LFRCORDY */
#define _CMU_STATUS_LFRCORDY_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCORDY_DEFAULT                (_CMU_STATUS_LFRCORDY_DEFAULT << 7)    /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXOENS                         (0x1UL << 8)                           /**< LFXO Enable Status */
#define _CMU_STATUS_LFXOENS_SHIFT                  8                                      /**< Shift value for CMU_LFXOENS */
#define _CMU_STATUS_LFXOENS_MASK                   0x100UL                                /**< Bit mask for CMU_LFXOENS */
#define _CMU_STATUS_LFXOENS_DEFAULT                0x00000000UL                           /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXOENS_DEFAULT                 (_CMU_STATUS_LFXOENS_DEFAULT << 8)     /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXORDY                         (0x1UL << 9)                           /**< LFXO Ready */
#define _CMU_STATUS_LFXORDY_SHIFT                  9                                      /**< Shift value for CMU_LFXORDY */
#define _CMU_STATUS_LFXORDY_MASK                   0x200UL                                /**< Bit mask for CMU_LFXORDY */
#define _CMU_STATUS_LFXORDY_DEFAULT                0x00000000UL                           /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXORDY_DEFAULT                 (_CMU_STATUS_LFXORDY_DEFAULT << 9)     /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFRCOSEL                        (0x1UL << 10)                          /**< HFRCO Selected */
#define _CMU_STATUS_HFRCOSEL_SHIFT                 10                                     /**< Shift value for CMU_HFRCOSEL */
#define _CMU_STATUS_HFRCOSEL_MASK                  0x400UL                                /**< Bit mask for CMU_HFRCOSEL */
#define _CMU_STATUS_HFRCOSEL_DEFAULT               0x00000001UL                           /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFRCOSEL_DEFAULT                (_CMU_STATUS_HFRCOSEL_DEFAULT << 10)   /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOSEL                         (0x1UL << 11)                          /**< HFXO Selected */
#define _CMU_STATUS_HFXOSEL_SHIFT                  11                                     /**< Shift value for CMU_HFXOSEL */
#define _CMU_STATUS_HFXOSEL_MASK                   0x800UL                                /**< Bit mask for CMU_HFXOSEL */
#define _CMU_STATUS_HFXOSEL_DEFAULT                0x00000000UL                           /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOSEL_DEFAULT                 (_CMU_STATUS_HFXOSEL_DEFAULT << 11)    /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCOSEL                        (0x1UL << 12)                          /**< LFRCO Selected */
#define _CMU_STATUS_LFRCOSEL_SHIFT                 12                                     /**< Shift value for CMU_LFRCOSEL */
#define _CMU_STATUS_LFRCOSEL_MASK                  0x1000UL                               /**< Bit mask for CMU_LFRCOSEL */
#define _CMU_STATUS_LFRCOSEL_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCOSEL_DEFAULT                (_CMU_STATUS_LFRCOSEL_DEFAULT << 12)   /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXOSEL                         (0x1UL << 13)                          /**< LFXO Selected */
#define _CMU_STATUS_LFXOSEL_SHIFT                  13                                     /**< Shift value for CMU_LFXOSEL */
#define _CMU_STATUS_LFXOSEL_MASK                   0x2000UL                               /**< Bit mask for CMU_LFXOSEL */
#define _CMU_STATUS_LFXOSEL_DEFAULT                0x00000000UL                           /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXOSEL_DEFAULT                 (_CMU_STATUS_LFXOSEL_DEFAULT << 13)    /**< Shifted mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_CALBSY                          (0x1UL << 14)                          /**< Calibration Busy */
#define _CMU_STATUS_CALBSY_SHIFT                   14                                     /**< Shift value for CMU_CALBSY */
#define _CMU_STATUS_CALBSY_MASK                    0x4000UL                               /**< Bit mask for CMU_CALBSY */
#define _CMU_STATUS_CALBSY_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_CALBSY_DEFAULT                  (_CMU_STATUS_CALBSY_DEFAULT << 14)     /**< Shifted mode DEFAULT for CMU_STATUS */

/* Bit fields for CMU IF */
#define _CMU_IF_RESETVALUE                         0x00000001UL                       /**< Default value for CMU_IF */
#define _CMU_IF_MASK                               0x0000003FUL                       /**< Mask for CMU_IF */
#define CMU_IF_HFRCORDY                            (0x1UL << 0)                       /**< HFRCO Ready Interrupt Flag */
#define _CMU_IF_HFRCORDY_SHIFT                     0                                  /**< Shift value for CMU_HFRCORDY */
#define _CMU_IF_HFRCORDY_MASK                      0x1UL                              /**< Bit mask for CMU_HFRCORDY */
#define _CMU_IF_HFRCORDY_DEFAULT                   0x00000001UL                       /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_HFRCORDY_DEFAULT                    (_CMU_IF_HFRCORDY_DEFAULT << 0)    /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_HFXORDY                             (0x1UL << 1)                       /**< HFXO Ready Interrupt Flag */
#define _CMU_IF_HFXORDY_SHIFT                      1                                  /**< Shift value for CMU_HFXORDY */
#define _CMU_IF_HFXORDY_MASK                       0x2UL                              /**< Bit mask for CMU_HFXORDY */
#define _CMU_IF_HFXORDY_DEFAULT                    0x00000000UL                       /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_HFXORDY_DEFAULT                     (_CMU_IF_HFXORDY_DEFAULT << 1)     /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_LFRCORDY                            (0x1UL << 2)                       /**< LFRCO Ready Interrupt Flag */
#define _CMU_IF_LFRCORDY_SHIFT                     2                                  /**< Shift value for CMU_LFRCORDY */
#define _CMU_IF_LFRCORDY_MASK                      0x4UL                              /**< Bit mask for CMU_LFRCORDY */
#define _CMU_IF_LFRCORDY_DEFAULT                   0x00000000UL                       /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_LFRCORDY_DEFAULT                    (_CMU_IF_LFRCORDY_DEFAULT << 2)    /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_LFXORDY                             (0x1UL << 3)                       /**< LFXO Ready Interrupt Flag */
#define _CMU_IF_LFXORDY_SHIFT                      3                                  /**< Shift value for CMU_LFXORDY */
#define _CMU_IF_LFXORDY_MASK                       0x8UL                              /**< Bit mask for CMU_LFXORDY */
#define _CMU_IF_LFXORDY_DEFAULT                    0x00000000UL                       /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_LFXORDY_DEFAULT                     (_CMU_IF_LFXORDY_DEFAULT << 3)     /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_AUXHFRCORDY                         (0x1UL << 4)                       /**< AUXHFRCO Ready Interrupt Flag */
#define _CMU_IF_AUXHFRCORDY_SHIFT                  4                                  /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IF_AUXHFRCORDY_MASK                   0x10UL                             /**< Bit mask for CMU_AUXHFRCORDY */
#define _CMU_IF_AUXHFRCORDY_DEFAULT                0x00000000UL                       /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_AUXHFRCORDY_DEFAULT                 (_CMU_IF_AUXHFRCORDY_DEFAULT << 4) /**< Shifted mode DEFAULT for CMU_IF */
#define CMU_IF_CALRDY                              (0x1UL << 5)                       /**< Calibration Ready Interrupt Flag */
#define _CMU_IF_CALRDY_SHIFT                       5                                  /**< Shift value for CMU_CALRDY */
#define _CMU_IF_CALRDY_MASK                        0x20UL                             /**< Bit mask for CMU_CALRDY */
#define _CMU_IF_CALRDY_DEFAULT                     0x00000000UL                       /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_CALRDY_DEFAULT                      (_CMU_IF_CALRDY_DEFAULT << 5)      /**< Shifted mode DEFAULT for CMU_IF */

/* Bit fields for CMU IFS */
#define _CMU_IFS_RESETVALUE                        0x00000000UL                        /**< Default value for CMU_IFS */
#define _CMU_IFS_MASK                              0x0000003FUL                        /**< Mask for CMU_IFS */
#define CMU_IFS_HFRCORDY                           (0x1UL << 0)                        /**< HFRCO Ready Interrupt Flag Set */
#define _CMU_IFS_HFRCORDY_SHIFT                    0                                   /**< Shift value for CMU_HFRCORDY */
#define _CMU_IFS_HFRCORDY_MASK                     0x1UL                               /**< Bit mask for CMU_HFRCORDY */
#define _CMU_IFS_HFRCORDY_DEFAULT                  0x00000000UL                        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFRCORDY_DEFAULT                   (_CMU_IFS_HFRCORDY_DEFAULT << 0)    /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXORDY                            (0x1UL << 1)                        /**< HFXO Ready Interrupt Flag Set */
#define _CMU_IFS_HFXORDY_SHIFT                     1                                   /**< Shift value for CMU_HFXORDY */
#define _CMU_IFS_HFXORDY_MASK                      0x2UL                               /**< Bit mask for CMU_HFXORDY */
#define _CMU_IFS_HFXORDY_DEFAULT                   0x00000000UL                        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXORDY_DEFAULT                    (_CMU_IFS_HFXORDY_DEFAULT << 1)     /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFRCORDY                           (0x1UL << 2)                        /**< LFRCO Ready Interrupt Flag Set */
#define _CMU_IFS_LFRCORDY_SHIFT                    2                                   /**< Shift value for CMU_LFRCORDY */
#define _CMU_IFS_LFRCORDY_MASK                     0x4UL                               /**< Bit mask for CMU_LFRCORDY */
#define _CMU_IFS_LFRCORDY_DEFAULT                  0x00000000UL                        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFRCORDY_DEFAULT                   (_CMU_IFS_LFRCORDY_DEFAULT << 2)    /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFXORDY                            (0x1UL << 3)                        /**< LFXO Ready Interrupt Flag Set */
#define _CMU_IFS_LFXORDY_SHIFT                     3                                   /**< Shift value for CMU_LFXORDY */
#define _CMU_IFS_LFXORDY_MASK                      0x8UL                               /**< Bit mask for CMU_LFXORDY */
#define _CMU_IFS_LFXORDY_DEFAULT                   0x00000000UL                        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFXORDY_DEFAULT                    (_CMU_IFS_LFXORDY_DEFAULT << 3)     /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_AUXHFRCORDY                        (0x1UL << 4)                        /**< AUXHFRCO Ready Interrupt Flag Set */
#define _CMU_IFS_AUXHFRCORDY_SHIFT                 4                                   /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IFS_AUXHFRCORDY_MASK                  0x10UL                              /**< Bit mask for CMU_AUXHFRCORDY */
#define _CMU_IFS_AUXHFRCORDY_DEFAULT               0x00000000UL                        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_AUXHFRCORDY_DEFAULT                (_CMU_IFS_AUXHFRCORDY_DEFAULT << 4) /**< Shifted mode DEFAULT for CMU_IFS */
#define CMU_IFS_CALRDY                             (0x1UL << 5)                        /**< Calibration Ready Interrupt Flag Set */
#define _CMU_IFS_CALRDY_SHIFT                      5                                   /**< Shift value for CMU_CALRDY */
#define _CMU_IFS_CALRDY_MASK                       0x20UL                              /**< Bit mask for CMU_CALRDY */
#define _CMU_IFS_CALRDY_DEFAULT                    0x00000000UL                        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_CALRDY_DEFAULT                     (_CMU_IFS_CALRDY_DEFAULT << 5)      /**< Shifted mode DEFAULT for CMU_IFS */

/* Bit fields for CMU IFC */
#define _CMU_IFC_RESETVALUE                        0x00000000UL                        /**< Default value for CMU_IFC */
#define _CMU_IFC_MASK                              0x0000003FUL                        /**< Mask for CMU_IFC */
#define CMU_IFC_HFRCORDY                           (0x1UL << 0)                        /**< HFRCO Ready Interrupt Flag Clear */
#define _CMU_IFC_HFRCORDY_SHIFT                    0                                   /**< Shift value for CMU_HFRCORDY */
#define _CMU_IFC_HFRCORDY_MASK                     0x1UL                               /**< Bit mask for CMU_HFRCORDY */
#define _CMU_IFC_HFRCORDY_DEFAULT                  0x00000000UL                        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFRCORDY_DEFAULT                   (_CMU_IFC_HFRCORDY_DEFAULT << 0)    /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXORDY                            (0x1UL << 1)                        /**< HFXO Ready Interrupt Flag Clear */
#define _CMU_IFC_HFXORDY_SHIFT                     1                                   /**< Shift value for CMU_HFXORDY */
#define _CMU_IFC_HFXORDY_MASK                      0x2UL                               /**< Bit mask for CMU_HFXORDY */
#define _CMU_IFC_HFXORDY_DEFAULT                   0x00000000UL                        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXORDY_DEFAULT                    (_CMU_IFC_HFXORDY_DEFAULT << 1)     /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFRCORDY                           (0x1UL << 2)                        /**< LFRCO Ready Interrupt Flag Clear */
#define _CMU_IFC_LFRCORDY_SHIFT                    2                                   /**< Shift value for CMU_LFRCORDY */
#define _CMU_IFC_LFRCORDY_MASK                     0x4UL                               /**< Bit mask for CMU_LFRCORDY */
#define _CMU_IFC_LFRCORDY_DEFAULT                  0x00000000UL                        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFRCORDY_DEFAULT                   (_CMU_IFC_LFRCORDY_DEFAULT << 2)    /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFXORDY                            (0x1UL << 3)                        /**< LFXO Ready Interrupt Flag Clear */
#define _CMU_IFC_LFXORDY_SHIFT                     3                                   /**< Shift value for CMU_LFXORDY */
#define _CMU_IFC_LFXORDY_MASK                      0x8UL                               /**< Bit mask for CMU_LFXORDY */
#define _CMU_IFC_LFXORDY_DEFAULT                   0x00000000UL                        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFXORDY_DEFAULT                    (_CMU_IFC_LFXORDY_DEFAULT << 3)     /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_AUXHFRCORDY                        (0x1UL << 4)                        /**< AUXHFRCO Ready Interrupt Flag Clear */
#define _CMU_IFC_AUXHFRCORDY_SHIFT                 4                                   /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IFC_AUXHFRCORDY_MASK                  0x10UL                              /**< Bit mask for CMU_AUXHFRCORDY */
#define _CMU_IFC_AUXHFRCORDY_DEFAULT               0x00000000UL                        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_AUXHFRCORDY_DEFAULT                (_CMU_IFC_AUXHFRCORDY_DEFAULT << 4) /**< Shifted mode DEFAULT for CMU_IFC */
#define CMU_IFC_CALRDY                             (0x1UL << 5)                        /**< Calibration Ready Interrupt Flag Clear */
#define _CMU_IFC_CALRDY_SHIFT                      5                                   /**< Shift value for CMU_CALRDY */
#define _CMU_IFC_CALRDY_MASK                       0x20UL                              /**< Bit mask for CMU_CALRDY */
#define _CMU_IFC_CALRDY_DEFAULT                    0x00000000UL                        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_CALRDY_DEFAULT                     (_CMU_IFC_CALRDY_DEFAULT << 5)      /**< Shifted mode DEFAULT for CMU_IFC */

/* Bit fields for CMU IEN */
#define _CMU_IEN_RESETVALUE                        0x00000000UL                        /**< Default value for CMU_IEN */
#define _CMU_IEN_MASK                              0x0000003FUL                        /**< Mask for CMU_IEN */
#define CMU_IEN_HFRCORDY                           (0x1UL << 0)                        /**< HFRCO Ready Interrupt Enable */
#define _CMU_IEN_HFRCORDY_SHIFT                    0                                   /**< Shift value for CMU_HFRCORDY */
#define _CMU_IEN_HFRCORDY_MASK                     0x1UL                               /**< Bit mask for CMU_HFRCORDY */
#define _CMU_IEN_HFRCORDY_DEFAULT                  0x00000000UL                        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFRCORDY_DEFAULT                   (_CMU_IEN_HFRCORDY_DEFAULT << 0)    /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXORDY                            (0x1UL << 1)                        /**< HFXO Ready Interrupt Enable */
#define _CMU_IEN_HFXORDY_SHIFT                     1                                   /**< Shift value for CMU_HFXORDY */
#define _CMU_IEN_HFXORDY_MASK                      0x2UL                               /**< Bit mask for CMU_HFXORDY */
#define _CMU_IEN_HFXORDY_DEFAULT                   0x00000000UL                        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXORDY_DEFAULT                    (_CMU_IEN_HFXORDY_DEFAULT << 1)     /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFRCORDY                           (0x1UL << 2)                        /**< LFRCO Ready Interrupt Enable */
#define _CMU_IEN_LFRCORDY_SHIFT                    2                                   /**< Shift value for CMU_LFRCORDY */
#define _CMU_IEN_LFRCORDY_MASK                     0x4UL                               /**< Bit mask for CMU_LFRCORDY */
#define _CMU_IEN_LFRCORDY_DEFAULT                  0x00000000UL                        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFRCORDY_DEFAULT                   (_CMU_IEN_LFRCORDY_DEFAULT << 2)    /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFXORDY                            (0x1UL << 3)                        /**< LFXO Ready Interrupt Enable */
#define _CMU_IEN_LFXORDY_SHIFT                     3                                   /**< Shift value for CMU_LFXORDY */
#define _CMU_IEN_LFXORDY_MASK                      0x8UL                               /**< Bit mask for CMU_LFXORDY */
#define _CMU_IEN_LFXORDY_DEFAULT                   0x00000000UL                        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFXORDY_DEFAULT                    (_CMU_IEN_LFXORDY_DEFAULT << 3)     /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_AUXHFRCORDY                        (0x1UL << 4)                        /**< AUXHFRCO Ready Interrupt Enable */
#define _CMU_IEN_AUXHFRCORDY_SHIFT                 4                                   /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IEN_AUXHFRCORDY_MASK                  0x10UL                              /**< Bit mask for CMU_AUXHFRCORDY */
#define _CMU_IEN_AUXHFRCORDY_DEFAULT               0x00000000UL                        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_AUXHFRCORDY_DEFAULT                (_CMU_IEN_AUXHFRCORDY_DEFAULT << 4) /**< Shifted mode DEFAULT for CMU_IEN */
#define CMU_IEN_CALRDY                             (0x1UL << 5)                        /**< Calibration Ready Interrupt Enable */
#define _CMU_IEN_CALRDY_SHIFT                      5                                   /**< Shift value for CMU_CALRDY */
#define _CMU_IEN_CALRDY_MASK                       0x20UL                              /**< Bit mask for CMU_CALRDY */
#define _CMU_IEN_CALRDY_DEFAULT                    0x00000000UL                        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_CALRDY_DEFAULT                     (_CMU_IEN_CALRDY_DEFAULT << 5)      /**< Shifted mode DEFAULT for CMU_IEN */

/* Bit fields for CMU HFCORECLKEN0 */
#define _CMU_HFCORECLKEN0_RESETVALUE               0x00000000UL                         /**< Default value for CMU_HFCORECLKEN0 */
#define _CMU_HFCORECLKEN0_MASK                     0x0000000FUL                         /**< Mask for CMU_HFCORECLKEN0 */
#define CMU_HFCORECLKEN0_AES                       (0x1UL << 0)                         /**< Advanced Encryption Standard Accelerator Clock Enable */
#define _CMU_HFCORECLKEN0_AES_SHIFT                0                                    /**< Shift value for CMU_AES */
#define _CMU_HFCORECLKEN0_AES_MASK                 0x1UL                                /**< Bit mask for CMU_AES */
#define _CMU_HFCORECLKEN0_AES_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for CMU_HFCORECLKEN0 */
#define CMU_HFCORECLKEN0_AES_DEFAULT               (_CMU_HFCORECLKEN0_AES_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_HFCORECLKEN0 */
#define CMU_HFCORECLKEN0_DMA                       (0x1UL << 1)                         /**< Direct Memory Access Controller Clock Enable */
#define _CMU_HFCORECLKEN0_DMA_SHIFT                1                                    /**< Shift value for CMU_DMA */
#define _CMU_HFCORECLKEN0_DMA_MASK                 0x2UL                                /**< Bit mask for CMU_DMA */
#define _CMU_HFCORECLKEN0_DMA_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for CMU_HFCORECLKEN0 */
#define CMU_HFCORECLKEN0_DMA_DEFAULT               (_CMU_HFCORECLKEN0_DMA_DEFAULT << 1) /**< Shifted mode DEFAULT for CMU_HFCORECLKEN0 */
#define CMU_HFCORECLKEN0_LE                        (0x1UL << 2)                         /**< Low Energy Peripheral Interface Clock Enable */
#define _CMU_HFCORECLKEN0_LE_SHIFT                 2                                    /**< Shift value for CMU_LE */
#define _CMU_HFCORECLKEN0_LE_MASK                  0x4UL                                /**< Bit mask for CMU_LE */
#define _CMU_HFCORECLKEN0_LE_DEFAULT               0x00000000UL                         /**< Mode DEFAULT for CMU_HFCORECLKEN0 */
#define CMU_HFCORECLKEN0_LE_DEFAULT                (_CMU_HFCORECLKEN0_LE_DEFAULT << 2)  /**< Shifted mode DEFAULT for CMU_HFCORECLKEN0 */
#define CMU_HFCORECLKEN0_EBI                       (0x1UL << 3)                         /**< External Bus Interface Clock Enable */
#define _CMU_HFCORECLKEN0_EBI_SHIFT                3                                    /**< Shift value for CMU_EBI */
#define _CMU_HFCORECLKEN0_EBI_MASK                 0x8UL                                /**< Bit mask for CMU_EBI */
#define _CMU_HFCORECLKEN0_EBI_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for CMU_HFCORECLKEN0 */
#define CMU_HFCORECLKEN0_EBI_DEFAULT               (_CMU_HFCORECLKEN0_EBI_DEFAULT << 3) /**< Shifted mode DEFAULT for CMU_HFCORECLKEN0 */

/* Bit fields for CMU HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_RESETVALUE                0x00000000UL                           /**< Default value for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_MASK                      0x0000FDFFUL                           /**< Mask for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART0                     (0x1UL << 0)                           /**< Universal Synchronous/Asynchronous Receiver/Transmitter 0 Clock Enable */
#define _CMU_HFPERCLKEN0_USART0_SHIFT              0                                      /**< Shift value for CMU_USART0 */
#define _CMU_HFPERCLKEN0_USART0_MASK               0x1UL                                  /**< Bit mask for CMU_USART0 */
#define _CMU_HFPERCLKEN0_USART0_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART0_DEFAULT             (_CMU_HFPERCLKEN0_USART0_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART1                     (0x1UL << 1)                           /**< Universal Synchronous/Asynchronous Receiver/Transmitter 1 Clock Enable */
#define _CMU_HFPERCLKEN0_USART1_SHIFT              1                                      /**< Shift value for CMU_USART1 */
#define _CMU_HFPERCLKEN0_USART1_MASK               0x2UL                                  /**< Bit mask for CMU_USART1 */
#define _CMU_HFPERCLKEN0_USART1_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART1_DEFAULT             (_CMU_HFPERCLKEN0_USART1_DEFAULT << 1) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART2                     (0x1UL << 2)                           /**< Universal Synchronous/Asynchronous Receiver/Transmitter 2 Clock Enable */
#define _CMU_HFPERCLKEN0_USART2_SHIFT              2                                      /**< Shift value for CMU_USART2 */
#define _CMU_HFPERCLKEN0_USART2_MASK               0x4UL                                  /**< Bit mask for CMU_USART2 */
#define _CMU_HFPERCLKEN0_USART2_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART2_DEFAULT             (_CMU_HFPERCLKEN0_USART2_DEFAULT << 2) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_UART0                      (0x1UL << 3)                           /**< Universal Asynchronous Receiver/Transmitter 0 Clock Enable */
#define _CMU_HFPERCLKEN0_UART0_SHIFT               3                                      /**< Shift value for CMU_UART0 */
#define _CMU_HFPERCLKEN0_UART0_MASK                0x8UL                                  /**< Bit mask for CMU_UART0 */
#define _CMU_HFPERCLKEN0_UART0_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_UART0_DEFAULT              (_CMU_HFPERCLKEN0_UART0_DEFAULT << 3)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TIMER0                     (0x1UL << 4)                           /**< Timer 0 Clock Enable */
#define _CMU_HFPERCLKEN0_TIMER0_SHIFT              4                                      /**< Shift value for CMU_TIMER0 */
#define _CMU_HFPERCLKEN0_TIMER0_MASK               0x10UL                                 /**< Bit mask for CMU_TIMER0 */
#define _CMU_HFPERCLKEN0_TIMER0_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TIMER0_DEFAULT             (_CMU_HFPERCLKEN0_TIMER0_DEFAULT << 4) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TIMER1                     (0x1UL << 5)                           /**< Timer 1 Clock Enable */
#define _CMU_HFPERCLKEN0_TIMER1_SHIFT              5                                      /**< Shift value for CMU_TIMER1 */
#define _CMU_HFPERCLKEN0_TIMER1_MASK               0x20UL                                 /**< Bit mask for CMU_TIMER1 */
#define _CMU_HFPERCLKEN0_TIMER1_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TIMER1_DEFAULT             (_CMU_HFPERCLKEN0_TIMER1_DEFAULT << 5) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TIMER2                     (0x1UL << 6)                           /**< Timer 2 Clock Enable */
#define _CMU_HFPERCLKEN0_TIMER2_SHIFT              6                                      /**< Shift value for CMU_TIMER2 */
#define _CMU_HFPERCLKEN0_TIMER2_MASK               0x40UL                                 /**< Bit mask for CMU_TIMER2 */
#define _CMU_HFPERCLKEN0_TIMER2_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TIMER2_DEFAULT             (_CMU_HFPERCLKEN0_TIMER2_DEFAULT << 6) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ACMP0                      (0x1UL << 7)                           /**< Analog Comparator 0 Clock Enable */
#define _CMU_HFPERCLKEN0_ACMP0_SHIFT               7                                      /**< Shift value for CMU_ACMP0 */
#define _CMU_HFPERCLKEN0_ACMP0_MASK                0x80UL                                 /**< Bit mask for CMU_ACMP0 */
#define _CMU_HFPERCLKEN0_ACMP0_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ACMP0_DEFAULT              (_CMU_HFPERCLKEN0_ACMP0_DEFAULT << 7)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ACMP1                      (0x1UL << 8)                           /**< Analog Comparator 1 Clock Enable */
#define _CMU_HFPERCLKEN0_ACMP1_SHIFT               8                                      /**< Shift value for CMU_ACMP1 */
#define _CMU_HFPERCLKEN0_ACMP1_MASK                0x100UL                                /**< Bit mask for CMU_ACMP1 */
#define _CMU_HFPERCLKEN0_ACMP1_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ACMP1_DEFAULT              (_CMU_HFPERCLKEN0_ACMP1_DEFAULT << 8)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_PRS                        (0x1UL << 10)                          /**< Peripheral Reflex System Clock Enable */
#define _CMU_HFPERCLKEN0_PRS_SHIFT                 10                                     /**< Shift value for CMU_PRS */
#define _CMU_HFPERCLKEN0_PRS_MASK                  0x400UL                                /**< Bit mask for CMU_PRS */
#define _CMU_HFPERCLKEN0_PRS_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_PRS_DEFAULT                (_CMU_HFPERCLKEN0_PRS_DEFAULT << 10)   /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_DAC0                       (0x1UL << 11)                          /**< Digital to Analog Converter 0 Clock Enable */
#define _CMU_HFPERCLKEN0_DAC0_SHIFT                11                                     /**< Shift value for CMU_DAC0 */
#define _CMU_HFPERCLKEN0_DAC0_MASK                 0x800UL                                /**< Bit mask for CMU_DAC0 */
#define _CMU_HFPERCLKEN0_DAC0_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_DAC0_DEFAULT               (_CMU_HFPERCLKEN0_DAC0_DEFAULT << 11)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_GPIO                       (0x1UL << 12)                          /**< General purpose Input/Output Clock Enable */
#define _CMU_HFPERCLKEN0_GPIO_SHIFT                12                                     /**< Shift value for CMU_GPIO */
#define _CMU_HFPERCLKEN0_GPIO_MASK                 0x1000UL                               /**< Bit mask for CMU_GPIO */
#define _CMU_HFPERCLKEN0_GPIO_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_GPIO_DEFAULT               (_CMU_HFPERCLKEN0_GPIO_DEFAULT << 12)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_VCMP                       (0x1UL << 13)                          /**< Voltage Comparator Clock Enable */
#define _CMU_HFPERCLKEN0_VCMP_SHIFT                13                                     /**< Shift value for CMU_VCMP */
#define _CMU_HFPERCLKEN0_VCMP_MASK                 0x2000UL                               /**< Bit mask for CMU_VCMP */
#define _CMU_HFPERCLKEN0_VCMP_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_VCMP_DEFAULT               (_CMU_HFPERCLKEN0_VCMP_DEFAULT << 13)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ADC0                       (0x1UL << 14)                          /**< Analog to Digital Converter 0 Clock Enable */
#define _CMU_HFPERCLKEN0_ADC0_SHIFT                14                                     /**< Shift value for CMU_ADC0 */
#define _CMU_HFPERCLKEN0_ADC0_MASK                 0x4000UL                               /**< Bit mask for CMU_ADC0 */
#define _CMU_HFPERCLKEN0_ADC0_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ADC0_DEFAULT               (_CMU_HFPERCLKEN0_ADC0_DEFAULT << 14)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_I2C0                       (0x1UL << 15)                          /**< I2C 0 Clock Enable */
#define _CMU_HFPERCLKEN0_I2C0_SHIFT                15                                     /**< Shift value for CMU_I2C0 */
#define _CMU_HFPERCLKEN0_I2C0_MASK                 0x8000UL                               /**< Bit mask for CMU_I2C0 */
#define _CMU_HFPERCLKEN0_I2C0_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_I2C0_DEFAULT               (_CMU_HFPERCLKEN0_I2C0_DEFAULT << 15)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */

/* Bit fields for CMU SYNCBUSY */
#define _CMU_SYNCBUSY_RESETVALUE                   0x00000000UL                           /**< Default value for CMU_SYNCBUSY */
#define _CMU_SYNCBUSY_MASK                         0x00000055UL                           /**< Mask for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFACLKEN0                     (0x1UL << 0)                           /**< Low Frequency A Clock Enable 0 Busy */
#define _CMU_SYNCBUSY_LFACLKEN0_SHIFT              0                                      /**< Shift value for CMU_LFACLKEN0 */
#define _CMU_SYNCBUSY_LFACLKEN0_MASK               0x1UL                                  /**< Bit mask for CMU_LFACLKEN0 */
#define _CMU_SYNCBUSY_LFACLKEN0_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFACLKEN0_DEFAULT             (_CMU_SYNCBUSY_LFACLKEN0_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFAPRESC0                     (0x1UL << 2)                           /**< Low Frequency A Prescaler 0 Busy */
#define _CMU_SYNCBUSY_LFAPRESC0_SHIFT              2                                      /**< Shift value for CMU_LFAPRESC0 */
#define _CMU_SYNCBUSY_LFAPRESC0_MASK               0x4UL                                  /**< Bit mask for CMU_LFAPRESC0 */
#define _CMU_SYNCBUSY_LFAPRESC0_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFAPRESC0_DEFAULT             (_CMU_SYNCBUSY_LFAPRESC0_DEFAULT << 2) /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFBCLKEN0                     (0x1UL << 4)                           /**< Low Frequency B Clock Enable 0 Busy */
#define _CMU_SYNCBUSY_LFBCLKEN0_SHIFT              4                                      /**< Shift value for CMU_LFBCLKEN0 */
#define _CMU_SYNCBUSY_LFBCLKEN0_MASK               0x10UL                                 /**< Bit mask for CMU_LFBCLKEN0 */
#define _CMU_SYNCBUSY_LFBCLKEN0_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFBCLKEN0_DEFAULT             (_CMU_SYNCBUSY_LFBCLKEN0_DEFAULT << 4) /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFBPRESC0                     (0x1UL << 6)                           /**< Low Frequency B Prescaler 0 Busy */
#define _CMU_SYNCBUSY_LFBPRESC0_SHIFT              6                                      /**< Shift value for CMU_LFBPRESC0 */
#define _CMU_SYNCBUSY_LFBPRESC0_MASK               0x40UL                                 /**< Bit mask for CMU_LFBPRESC0 */
#define _CMU_SYNCBUSY_LFBPRESC0_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFBPRESC0_DEFAULT             (_CMU_SYNCBUSY_LFBPRESC0_DEFAULT << 6) /**< Shifted mode DEFAULT for CMU_SYNCBUSY */

/* Bit fields for CMU FREEZE */
#define _CMU_FREEZE_RESETVALUE                     0x00000000UL                         /**< Default value for CMU_FREEZE */
#define _CMU_FREEZE_MASK                           0x00000001UL                         /**< Mask for CMU_FREEZE */
#define CMU_FREEZE_REGFREEZE                       (0x1UL << 0)                         /**< Register Update Freeze */
#define _CMU_FREEZE_REGFREEZE_SHIFT                0                                    /**< Shift value for CMU_REGFREEZE */
#define _CMU_FREEZE_REGFREEZE_MASK                 0x1UL                                /**< Bit mask for CMU_REGFREEZE */
#define _CMU_FREEZE_REGFREEZE_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for CMU_FREEZE */
#define _CMU_FREEZE_REGFREEZE_UPDATE               0x00000000UL                         /**< Mode UPDATE for CMU_FREEZE */
#define _CMU_FREEZE_REGFREEZE_FREEZE               0x00000001UL                         /**< Mode FREEZE for CMU_FREEZE */
#define CMU_FREEZE_REGFREEZE_DEFAULT               (_CMU_FREEZE_REGFREEZE_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_FREEZE */
#define CMU_FREEZE_REGFREEZE_UPDATE                (_CMU_FREEZE_REGFREEZE_UPDATE << 0)  /**< Shifted mode UPDATE for CMU_FREEZE */
#define CMU_FREEZE_REGFREEZE_FREEZE                (_CMU_FREEZE_REGFREEZE_FREEZE << 0)  /**< Shifted mode FREEZE for CMU_FREEZE */

/* Bit fields for CMU LFACLKEN0 */
#define _CMU_LFACLKEN0_RESETVALUE                  0x00000000UL                           /**< Default value for CMU_LFACLKEN0 */
#define _CMU_LFACLKEN0_MASK                        0x00000003UL                           /**< Mask for CMU_LFACLKEN0 */
#define CMU_LFACLKEN0_RTC                          (0x1UL << 0)                           /**< Real-Time Counter Clock Enable */
#define _CMU_LFACLKEN0_RTC_SHIFT                   0                                      /**< Shift value for CMU_RTC */
#define _CMU_LFACLKEN0_RTC_MASK                    0x1UL                                  /**< Bit mask for CMU_RTC */
#define _CMU_LFACLKEN0_RTC_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for CMU_LFACLKEN0 */
#define CMU_LFACLKEN0_RTC_DEFAULT                  (_CMU_LFACLKEN0_RTC_DEFAULT << 0)      /**< Shifted mode DEFAULT for CMU_LFACLKEN0 */
#define CMU_LFACLKEN0_LETIMER0                     (0x1UL << 1)                           /**< Low Energy Timer 0 Clock Enable */
#define _CMU_LFACLKEN0_LETIMER0_SHIFT              1                                      /**< Shift value for CMU_LETIMER0 */
#define _CMU_LFACLKEN0_LETIMER0_MASK               0x2UL                                  /**< Bit mask for CMU_LETIMER0 */
#define _CMU_LFACLKEN0_LETIMER0_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for CMU_LFACLKEN0 */
#define CMU_LFACLKEN0_LETIMER0_DEFAULT             (_CMU_LFACLKEN0_LETIMER0_DEFAULT << 1) /**< Shifted mode DEFAULT for CMU_LFACLKEN0 */

/* Bit fields for CMU LFBCLKEN0 */
#define _CMU_LFBCLKEN0_RESETVALUE                  0x00000000UL                          /**< Default value for CMU_LFBCLKEN0 */
#define _CMU_LFBCLKEN0_MASK                        0x00000003UL                          /**< Mask for CMU_LFBCLKEN0 */
#define CMU_LFBCLKEN0_LEUART0                      (0x1UL << 0)                          /**< Low Energy UART 0 Clock Enable */
#define _CMU_LFBCLKEN0_LEUART0_SHIFT               0                                     /**< Shift value for CMU_LEUART0 */
#define _CMU_LFBCLKEN0_LEUART0_MASK                0x1UL                                 /**< Bit mask for CMU_LEUART0 */
#define _CMU_LFBCLKEN0_LEUART0_DEFAULT             0x00000000UL                          /**< Mode DEFAULT for CMU_LFBCLKEN0 */
#define CMU_LFBCLKEN0_LEUART0_DEFAULT              (_CMU_LFBCLKEN0_LEUART0_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_LFBCLKEN0 */
#define CMU_LFBCLKEN0_LEUART1                      (0x1UL << 1)                          /**< Low Energy UART 1 Clock Enable */
#define _CMU_LFBCLKEN0_LEUART1_SHIFT               1                                     /**< Shift value for CMU_LEUART1 */
#define _CMU_LFBCLKEN0_LEUART1_MASK                0x2UL                                 /**< Bit mask for CMU_LEUART1 */
#define _CMU_LFBCLKEN0_LEUART1_DEFAULT             0x00000000UL                          /**< Mode DEFAULT for CMU_LFBCLKEN0 */
#define CMU_LFBCLKEN0_LEUART1_DEFAULT              (_CMU_LFBCLKEN0_LEUART1_DEFAULT << 1) /**< Shifted mode DEFAULT for CMU_LFBCLKEN0 */

/* Bit fields for CMU LFAPRESC0 */
#define _CMU_LFAPRESC0_RESETVALUE                  0x00000000UL                            /**< Default value for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_MASK                        0x000000FFUL                            /**< Mask for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_SHIFT                   0                                       /**< Shift value for CMU_RTC */
#define _CMU_LFAPRESC0_RTC_MASK                    0xFUL                                   /**< Bit mask for CMU_RTC */
#define _CMU_LFAPRESC0_RTC_DIV1                    0x00000000UL                            /**< Mode DIV1 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV2                    0x00000001UL                            /**< Mode DIV2 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV4                    0x00000002UL                            /**< Mode DIV4 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV8                    0x00000003UL                            /**< Mode DIV8 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV16                   0x00000004UL                            /**< Mode DIV16 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV32                   0x00000005UL                            /**< Mode DIV32 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV64                   0x00000006UL                            /**< Mode DIV64 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV128                  0x00000007UL                            /**< Mode DIV128 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV256                  0x00000008UL                            /**< Mode DIV256 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV512                  0x00000009UL                            /**< Mode DIV512 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV1024                 0x0000000AUL                            /**< Mode DIV1024 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV2048                 0x0000000BUL                            /**< Mode DIV2048 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV4096                 0x0000000CUL                            /**< Mode DIV4096 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV8192                 0x0000000DUL                            /**< Mode DIV8192 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV16384                0x0000000EUL                            /**< Mode DIV16384 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV32768                0x0000000FUL                            /**< Mode DIV32768 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV1                     (_CMU_LFAPRESC0_RTC_DIV1 << 0)          /**< Shifted mode DIV1 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV2                     (_CMU_LFAPRESC0_RTC_DIV2 << 0)          /**< Shifted mode DIV2 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV4                     (_CMU_LFAPRESC0_RTC_DIV4 << 0)          /**< Shifted mode DIV4 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV8                     (_CMU_LFAPRESC0_RTC_DIV8 << 0)          /**< Shifted mode DIV8 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV16                    (_CMU_LFAPRESC0_RTC_DIV16 << 0)         /**< Shifted mode DIV16 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV32                    (_CMU_LFAPRESC0_RTC_DIV32 << 0)         /**< Shifted mode DIV32 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV64                    (_CMU_LFAPRESC0_RTC_DIV64 << 0)         /**< Shifted mode DIV64 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV128                   (_CMU_LFAPRESC0_RTC_DIV128 << 0)        /**< Shifted mode DIV128 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV256                   (_CMU_LFAPRESC0_RTC_DIV256 << 0)        /**< Shifted mode DIV256 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV512                   (_CMU_LFAPRESC0_RTC_DIV512 << 0)        /**< Shifted mode DIV512 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV1024                  (_CMU_LFAPRESC0_RTC_DIV1024 << 0)       /**< Shifted mode DIV1024 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV2048                  (_CMU_LFAPRESC0_RTC_DIV2048 << 0)       /**< Shifted mode DIV2048 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV4096                  (_CMU_LFAPRESC0_RTC_DIV4096 << 0)       /**< Shifted mode DIV4096 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV8192                  (_CMU_LFAPRESC0_RTC_DIV8192 << 0)       /**< Shifted mode DIV8192 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV16384                 (_CMU_LFAPRESC0_RTC_DIV16384 << 0)      /**< Shifted mode DIV16384 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV32768                 (_CMU_LFAPRESC0_RTC_DIV32768 << 0)      /**< Shifted mode DIV32768 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_SHIFT              4                                       /**< Shift value for CMU_LETIMER0 */
#define _CMU_LFAPRESC0_LETIMER0_MASK               0xF0UL                                  /**< Bit mask for CMU_LETIMER0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV1               0x00000000UL                            /**< Mode DIV1 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV2               0x00000001UL                            /**< Mode DIV2 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV4               0x00000002UL                            /**< Mode DIV4 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV8               0x00000003UL                            /**< Mode DIV8 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV16              0x00000004UL                            /**< Mode DIV16 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV32              0x00000005UL                            /**< Mode DIV32 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV64              0x00000006UL                            /**< Mode DIV64 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV128             0x00000007UL                            /**< Mode DIV128 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV256             0x00000008UL                            /**< Mode DIV256 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV512             0x00000009UL                            /**< Mode DIV512 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV1024            0x0000000AUL                            /**< Mode DIV1024 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV2048            0x0000000BUL                            /**< Mode DIV2048 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV4096            0x0000000CUL                            /**< Mode DIV4096 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV8192            0x0000000DUL                            /**< Mode DIV8192 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV16384           0x0000000EUL                            /**< Mode DIV16384 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV32768           0x0000000FUL                            /**< Mode DIV32768 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV1                (_CMU_LFAPRESC0_LETIMER0_DIV1 << 4)     /**< Shifted mode DIV1 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV2                (_CMU_LFAPRESC0_LETIMER0_DIV2 << 4)     /**< Shifted mode DIV2 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV4                (_CMU_LFAPRESC0_LETIMER0_DIV4 << 4)     /**< Shifted mode DIV4 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV8                (_CMU_LFAPRESC0_LETIMER0_DIV8 << 4)     /**< Shifted mode DIV8 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV16               (_CMU_LFAPRESC0_LETIMER0_DIV16 << 4)    /**< Shifted mode DIV16 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV32               (_CMU_LFAPRESC0_LETIMER0_DIV32 << 4)    /**< Shifted mode DIV32 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV64               (_CMU_LFAPRESC0_LETIMER0_DIV64 << 4)    /**< Shifted mode DIV64 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV128              (_CMU_LFAPRESC0_LETIMER0_DIV128 << 4)   /**< Shifted mode DIV128 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV256              (_CMU_LFAPRESC0_LETIMER0_DIV256 << 4)   /**< Shifted mode DIV256 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV512              (_CMU_LFAPRESC0_LETIMER0_DIV512 << 4)   /**< Shifted mode DIV512 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV1024             (_CMU_LFAPRESC0_LETIMER0_DIV1024 << 4)  /**< Shifted mode DIV1024 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV2048             (_CMU_LFAPRESC0_LETIMER0_DIV2048 << 4)  /**< Shifted mode DIV2048 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV4096             (_CMU_LFAPRESC0_LETIMER0_DIV4096 << 4)  /**< Shifted mode DIV4096 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV8192             (_CMU_LFAPRESC0_LETIMER0_DIV8192 << 4)  /**< Shifted mode DIV8192 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV16384            (_CMU_LFAPRESC0_LETIMER0_DIV16384 << 4) /**< Shifted mode DIV16384 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV32768            (_CMU_LFAPRESC0_LETIMER0_DIV32768 << 4) /**< Shifted mode DIV32768 for CMU_LFAPRESC0 */

/* Bit fields for CMU LFBPRESC0 */
#define _CMU_LFBPRESC0_RESETVALUE                  0x00000000UL                       /**< Default value for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_MASK                        0x00000033UL                       /**< Mask for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_SHIFT               0                                  /**< Shift value for CMU_LEUART0 */
#define _CMU_LFBPRESC0_LEUART0_MASK                0x3UL                              /**< Bit mask for CMU_LEUART0 */
#define _CMU_LFBPRESC0_LEUART0_DIV1                0x00000000UL                       /**< Mode DIV1 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_DIV2                0x00000001UL                       /**< Mode DIV2 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_DIV4                0x00000002UL                       /**< Mode DIV4 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_DIV8                0x00000003UL                       /**< Mode DIV8 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART0_DIV1                 (_CMU_LFBPRESC0_LEUART0_DIV1 << 0) /**< Shifted mode DIV1 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART0_DIV2                 (_CMU_LFBPRESC0_LEUART0_DIV2 << 0) /**< Shifted mode DIV2 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART0_DIV4                 (_CMU_LFBPRESC0_LEUART0_DIV4 << 0) /**< Shifted mode DIV4 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART0_DIV8                 (_CMU_LFBPRESC0_LEUART0_DIV8 << 0) /**< Shifted mode DIV8 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART1_SHIFT               4                                  /**< Shift value for CMU_LEUART1 */
#define _CMU_LFBPRESC0_LEUART1_MASK                0x30UL                             /**< Bit mask for CMU_LEUART1 */
#define _CMU_LFBPRESC0_LEUART1_DIV1                0x00000000UL                       /**< Mode DIV1 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART1_DIV2                0x00000001UL                       /**< Mode DIV2 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART1_DIV4                0x00000002UL                       /**< Mode DIV4 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART1_DIV8                0x00000003UL                       /**< Mode DIV8 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART1_DIV1                 (_CMU_LFBPRESC0_LEUART1_DIV1 << 4) /**< Shifted mode DIV1 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART1_DIV2                 (_CMU_LFBPRESC0_LEUART1_DIV2 << 4) /**< Shifted mode DIV2 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART1_DIV4                 (_CMU_LFBPRESC0_LEUART1_DIV4 << 4) /**< Shifted mode DIV4 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART1_DIV8                 (_CMU_LFBPRESC0_LEUART1_DIV8 << 4) /**< Shifted mode DIV8 for CMU_LFBPRESC0 */

/* Bit fields for CMU PCNTCTRL */
#define _CMU_PCNTCTRL_RESETVALUE                   0x00000000UL                             /**< Default value for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_MASK                         0x0000003FUL                             /**< Mask for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKEN                    (0x1UL << 0)                             /**< PCNT0 Clock Enable */
#define _CMU_PCNTCTRL_PCNT0CLKEN_SHIFT             0                                        /**< Shift value for CMU_PCNT0CLKEN */
#define _CMU_PCNTCTRL_PCNT0CLKEN_MASK              0x1UL                                    /**< Bit mask for CMU_PCNT0CLKEN */
#define _CMU_PCNTCTRL_PCNT0CLKEN_DEFAULT           0x00000000UL                             /**< Mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKEN_DEFAULT            (_CMU_PCNTCTRL_PCNT0CLKEN_DEFAULT << 0)  /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKSEL                   (0x1UL << 1)                             /**< PCNT0 Clock Select */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_SHIFT            1                                        /**< Shift value for CMU_PCNT0CLKSEL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_MASK             0x2UL                                    /**< Bit mask for CMU_PCNT0CLKSEL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_DEFAULT          0x00000000UL                             /**< Mode DEFAULT for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_LFACLK           0x00000000UL                             /**< Mode LFACLK for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_PCNT0S0          0x00000001UL                             /**< Mode PCNT0S0 for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKSEL_DEFAULT           (_CMU_PCNTCTRL_PCNT0CLKSEL_DEFAULT << 1) /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKSEL_LFACLK            (_CMU_PCNTCTRL_PCNT0CLKSEL_LFACLK << 1)  /**< Shifted mode LFACLK for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKSEL_PCNT0S0           (_CMU_PCNTCTRL_PCNT0CLKSEL_PCNT0S0 << 1) /**< Shifted mode PCNT0S0 for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT1CLKEN                    (0x1UL << 2)                             /**< PCNT1 Clock Enable */
#define _CMU_PCNTCTRL_PCNT1CLKEN_SHIFT             2                                        /**< Shift value for CMU_PCNT1CLKEN */
#define _CMU_PCNTCTRL_PCNT1CLKEN_MASK              0x4UL                                    /**< Bit mask for CMU_PCNT1CLKEN */
#define _CMU_PCNTCTRL_PCNT1CLKEN_DEFAULT           0x00000000UL                             /**< Mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT1CLKEN_DEFAULT            (_CMU_PCNTCTRL_PCNT1CLKEN_DEFAULT << 2)  /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT1CLKSEL                   (0x1UL << 3)                             /**< PCNT1 Clock Select */
#define _CMU_PCNTCTRL_PCNT1CLKSEL_SHIFT            3                                        /**< Shift value for CMU_PCNT1CLKSEL */
#define _CMU_PCNTCTRL_PCNT1CLKSEL_MASK             0x8UL                                    /**< Bit mask for CMU_PCNT1CLKSEL */
#define _CMU_PCNTCTRL_PCNT1CLKSEL_DEFAULT          0x00000000UL                             /**< Mode DEFAULT for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT1CLKSEL_LFACLK           0x00000000UL                             /**< Mode LFACLK for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT1CLKSEL_PCNT1S0          0x00000001UL                             /**< Mode PCNT1S0 for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT1CLKSEL_DEFAULT           (_CMU_PCNTCTRL_PCNT1CLKSEL_DEFAULT << 3) /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT1CLKSEL_LFACLK            (_CMU_PCNTCTRL_PCNT1CLKSEL_LFACLK << 3)  /**< Shifted mode LFACLK for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT1CLKSEL_PCNT1S0           (_CMU_PCNTCTRL_PCNT1CLKSEL_PCNT1S0 << 3) /**< Shifted mode PCNT1S0 for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT2CLKEN                    (0x1UL << 4)                             /**< PCNT2 Clock Enable */
#define _CMU_PCNTCTRL_PCNT2CLKEN_SHIFT             4                                        /**< Shift value for CMU_PCNT2CLKEN */
#define _CMU_PCNTCTRL_PCNT2CLKEN_MASK              0x10UL                                   /**< Bit mask for CMU_PCNT2CLKEN */
#define _CMU_PCNTCTRL_PCNT2CLKEN_DEFAULT           0x00000000UL                             /**< Mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT2CLKEN_DEFAULT            (_CMU_PCNTCTRL_PCNT2CLKEN_DEFAULT << 4)  /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT2CLKSEL                   (0x1UL << 5)                             /**< PCNT2 Clock Select */
#define _CMU_PCNTCTRL_PCNT2CLKSEL_SHIFT            5                                        /**< Shift value for CMU_PCNT2CLKSEL */
#define _CMU_PCNTCTRL_PCNT2CLKSEL_MASK             0x20UL                                   /**< Bit mask for CMU_PCNT2CLKSEL */
#define _CMU_PCNTCTRL_PCNT2CLKSEL_DEFAULT          0x00000000UL                             /**< Mode DEFAULT for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT2CLKSEL_LFACLK           0x00000000UL                             /**< Mode LFACLK for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT2CLKSEL_PCNT2S0          0x00000001UL                             /**< Mode PCNT2S0 for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT2CLKSEL_DEFAULT           (_CMU_PCNTCTRL_PCNT2CLKSEL_DEFAULT << 5) /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT2CLKSEL_LFACLK            (_CMU_PCNTCTRL_PCNT2CLKSEL_LFACLK << 5)  /**< Shifted mode LFACLK for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT2CLKSEL_PCNT2S0           (_CMU_PCNTCTRL_PCNT2CLKSEL_PCNT2S0 << 5) /**< Shifted mode PCNT2S0 for CMU_PCNTCTRL */

/* Bit fields for CMU ROUTE */
#define _CMU_ROUTE_RESETVALUE                      0x00000000UL                         /**< Default value for CMU_ROUTE */
#define _CMU_ROUTE_MASK                            0x00000007UL                         /**< Mask for CMU_ROUTE */
#define CMU_ROUTE_CLKOUT0PEN                       (0x1UL << 0)                         /**< CLKOUT0 Pin Enable */
#define _CMU_ROUTE_CLKOUT0PEN_SHIFT                0                                    /**< Shift value for CMU_CLKOUT0PEN */
#define _CMU_ROUTE_CLKOUT0PEN_MASK                 0x1UL                                /**< Bit mask for CMU_CLKOUT0PEN */
#define _CMU_ROUTE_CLKOUT0PEN_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for CMU_ROUTE */
#define CMU_ROUTE_CLKOUT0PEN_DEFAULT               (_CMU_ROUTE_CLKOUT0PEN_DEFAULT << 0) /**< Shifted mode DEFAULT for CMU_ROUTE */
#define CMU_ROUTE_CLKOUT1PEN                       (0x1UL << 1)                         /**< CLKOUT1 Pin Enable */
#define _CMU_ROUTE_CLKOUT1PEN_SHIFT                1                                    /**< Shift value for CMU_CLKOUT1PEN */
#define _CMU_ROUTE_CLKOUT1PEN_MASK                 0x2UL                                /**< Bit mask for CMU_CLKOUT1PEN */
#define _CMU_ROUTE_CLKOUT1PEN_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for CMU_ROUTE */
#define CMU_ROUTE_CLKOUT1PEN_DEFAULT               (_CMU_ROUTE_CLKOUT1PEN_DEFAULT << 1) /**< Shifted mode DEFAULT for CMU_ROUTE */
#define CMU_ROUTE_LOCATION                         (0x1UL << 2)                         /**< I/O Location */
#define _CMU_ROUTE_LOCATION_SHIFT                  2                                    /**< Shift value for CMU_LOCATION */
#define _CMU_ROUTE_LOCATION_MASK                   0x4UL                                /**< Bit mask for CMU_LOCATION */
#define _CMU_ROUTE_LOCATION_LOC0                   0x00000000UL                         /**< Mode LOC0 for CMU_ROUTE */
#define _CMU_ROUTE_LOCATION_DEFAULT                0x00000000UL                         /**< Mode DEFAULT for CMU_ROUTE */
#define _CMU_ROUTE_LOCATION_LOC1                   0x00000001UL                         /**< Mode LOC1 for CMU_ROUTE */
#define CMU_ROUTE_LOCATION_LOC0                    (_CMU_ROUTE_LOCATION_LOC0 << 2)      /**< Shifted mode LOC0 for CMU_ROUTE */
#define CMU_ROUTE_LOCATION_DEFAULT                 (_CMU_ROUTE_LOCATION_DEFAULT << 2)   /**< Shifted mode DEFAULT for CMU_ROUTE */
#define CMU_ROUTE_LOCATION_LOC1                    (_CMU_ROUTE_LOCATION_LOC1 << 2)      /**< Shifted mode LOC1 for CMU_ROUTE */

/* Bit fields for CMU LOCK */
#define _CMU_LOCK_RESETVALUE                       0x00000000UL                      /**< Default value for CMU_LOCK */
#define _CMU_LOCK_MASK                             0x0000FFFFUL                      /**< Mask for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_SHIFT                    0                                 /**< Shift value for CMU_LOCKKEY */
#define _CMU_LOCK_LOCKKEY_MASK                     0xFFFFUL                          /**< Bit mask for CMU_LOCKKEY */
#define _CMU_LOCK_LOCKKEY_DEFAULT                  0x00000000UL                      /**< Mode DEFAULT for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_LOCK                     0x00000000UL                      /**< Mode LOCK for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_UNLOCKED                 0x00000000UL                      /**< Mode UNLOCKED for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_LOCKED                   0x00000001UL                      /**< Mode LOCKED for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_UNLOCK                   0x0000580EUL                      /**< Mode UNLOCK for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_DEFAULT                   (_CMU_LOCK_LOCKKEY_DEFAULT << 0)  /**< Shifted mode DEFAULT for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_LOCK                      (_CMU_LOCK_LOCKKEY_LOCK << 0)     /**< Shifted mode LOCK for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_UNLOCKED                  (_CMU_LOCK_LOCKKEY_UNLOCKED << 0) /**< Shifted mode UNLOCKED for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_LOCKED                    (_CMU_LOCK_LOCKKEY_LOCKED << 0)   /**< Shifted mode LOCKED for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_UNLOCK                    (_CMU_LOCK_LOCKKEY_UNLOCK << 0)   /**< Shifted mode UNLOCK for CMU_LOCK */

/** @} End of group EFM32G290F64_CMU */

/***************************************************************************//**
 * @defgroup EFM32G290F64_UNLOCK EFM32G290F64 Unlock Codes
 * @{
 ******************************************************************************/
#define MSC_UNLOCK_CODE      0x1B71 /**< MSC unlock code */
#define EMU_UNLOCK_CODE      0xADE8 /**< EMU unlock code */
#define CMU_UNLOCK_CODE      0x580E /**< CMU unlock code */
#define TIMER_UNLOCK_CODE    0xCE80 /**< TIMER unlock code */
#define GPIO_UNLOCK_CODE     0xA534 /**< GPIO unlock code */

/** @} End of group EFM32G290F64_UNLOCK */

/** @} End of group EFM32G290F64_BitFields */

/***************************************************************************//**
 * @defgroup EFM32G290F64_Alternate_Function EFM32G290F64 Alternate Function
 * @{
 ******************************************************************************/

#include "efm32g_af_ports.h"
#include "efm32g_af_pins.h"

/** @} End of group EFM32G290F64_Alternate_Function */

/***************************************************************************//**
 *  @brief Set the value of a bit field within a register.
 *
 *  @param REG
 *       The register to update
 *  @param MASK
 *       The mask for the bit field to update
 *  @param VALUE
 *       The value to write to the bit field
 *  @param OFFSET
 *       The number of bits that the field is offset within the register.
 *       0 (zero) means LSB.
 ******************************************************************************/
#define SET_BIT_FIELD(REG, MASK, VALUE, OFFSET) \
  REG = ((REG) &~(MASK)) | (((VALUE) << (OFFSET)) & (MASK));

/** @} End of group EFM32G290F64  */

/** @} End of group Parts */

#ifdef __cplusplus
}
#endif
#endif /* EFM32G290F64_H */
