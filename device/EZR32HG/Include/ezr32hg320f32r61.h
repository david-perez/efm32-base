/***************************************************************************//**
 * @file
 * @brief CMSIS Cortex-M Peripheral Access Layer Header File
 *        for EZR32HG320F32R61
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

#ifndef EZR32HG320F32R61_H
#define EZR32HG320F32R61_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************************************************************//**
 * @addtogroup Parts
 * @{
 ******************************************************************************/

/***************************************************************************//**
 * @defgroup EZR32HG320F32R61 EZR32HG320F32R61
 * @{
 ******************************************************************************/

/** Interrupt Number Definition */
typedef enum IRQn{
/******  Cortex-M0+ Processor Exceptions Numbers *****************************************/
  NonMaskableInt_IRQn = -14,                /*!< -14 Cortex-M0+ Non Maskable Interrupt   */
  HardFault_IRQn      = -13,                /*!< -13 Cortex-M0+ Hard Fault Interrupt     */
  SVCall_IRQn         = -5,                 /*!< -5  Cortex-M0+ SV Call Interrupt        */
  PendSV_IRQn         = -2,                 /*!< -2  Cortex-M0+ Pend SV Interrupt        */
  SysTick_IRQn        = -1,                 /*!< -1  Cortex-M0+ System Tick Interrupt    */

/******  EZR32HG Peripheral Interrupt Numbers ********************************************/
  DMA_IRQn            = 0,  /*!< 0 EZR32 DMA Interrupt */
  GPIO_EVEN_IRQn      = 1,  /*!< 1 EZR32 GPIO_EVEN Interrupt */
  TIMER0_IRQn         = 2,  /*!< 2 EZR32 TIMER0 Interrupt */
  ADC0_IRQn           = 4,  /*!< 4 EZR32 ADC0 Interrupt */
  I2C0_IRQn           = 5,  /*!< 5 EZR32 I2C0 Interrupt */
  GPIO_ODD_IRQn       = 6,  /*!< 6 EZR32 GPIO_ODD Interrupt */
  TIMER1_IRQn         = 7,  /*!< 7 EZR32 TIMER1 Interrupt */
  USARTRF1_RX_IRQn    = 8,  /*!< 8 EZR32 USARTRF1_RX Interrupt */
  USARTRF1_TX_IRQn    = 9,  /*!< 9 EZR32 USARTRF1_TX Interrupt */
  LEUART0_IRQn        = 10, /*!< 10 EZR32 LEUART0 Interrupt */
  PCNT0_IRQn          = 11, /*!< 11 EZR32 PCNT0 Interrupt */
  RTC_IRQn            = 12, /*!< 12 EZR32 RTC Interrupt */
  CMU_IRQn            = 13, /*!< 13 EZR32 CMU Interrupt */
  VCMP_IRQn           = 14, /*!< 14 EZR32 VCMP Interrupt */
  MSC_IRQn            = 15, /*!< 15 EZR32 MSC Interrupt */
  AES_IRQn            = 16, /*!< 16 EZR32 AES Interrupt */
  USART0_RX_IRQn      = 17, /*!< 17 EZR32 USART0_RX Interrupt */
  USART0_TX_IRQn      = 18, /*!< 18 EZR32 USART0_TX Interrupt */
  USB_IRQn            = 19, /*!< 19 EZR32 USB Interrupt */
  TIMER2_IRQn         = 20, /*!< 20 EZR32 TIMER2 Interrupt */
} IRQn_Type;

/***************************************************************************//**
 * @defgroup EZR32HG320F32R61_Core EZR32HG320F32R61 Core
 * @{
 * @brief Processor and Core Peripheral Section
 ******************************************************************************/
#define __MPU_PRESENT             0U /**< MPU not present */
#define __VTOR_PRESENT            1U /**< Presence of VTOR register in SCB */
#define __NVIC_PRIO_BITS          2U /**< NVIC interrupt priority bits */
#define __Vendor_SysTickConfig    0U /**< Is 1 if different SysTick counter is used */

/** @} End of group EZR32HG320F32R61_Core */

/***************************************************************************//**
 * @defgroup EZR32HG320F32R61_Part EZR32HG320F32R61 Part
 * @{
 ******************************************************************************/

/** Part family */
#define _EFM32_HAPPY_FAMILY                     1  /**< Happy Gecko EFM32HG MCU Family */
#define _EFM_DEVICE                                /**< Silicon Labs EFM-type microcontroller */
#define _EZR32_HAPPY_FAMILY                     1  /**< Happy Gecko EZR32HG MCU Family */
#define _EZR_DEVICE                                /**< Silicon Labs EZR-type microcontroller */
#define _SILICON_LABS_32B_SERIES_0                 /**< Silicon Labs series number */
#define _SILICON_LABS_32B_SERIES                0  /**< Silicon Labs series number */
#define _SILICON_LABS_GECKO_INTERNAL_SDID       77 /**< Silicon Labs internal use only, may change any time */
#define _SILICON_LABS_GECKO_INTERNAL_SDID_77       /**< Silicon Labs internal use only, may change any time */
#define _SILICON_LABS_32B_PLATFORM_1               /**< @deprecated Silicon Labs platform name */
#define _SILICON_LABS_32B_PLATFORM              1  /**< @deprecated Silicon Labs platform name */

/* If part number is not defined as compiler option, define it */
#if !defined(EZR32HG320F32R61)
#define EZR32HG320F32R61    1 /**< EZR Happy Gecko Part  */
#endif

/** Configure part number */
#define PART_NUMBER          "EZR32HG320F32R61" /**< Part Number */

/** Memory Base addresses and limits */
#define FLASH_MEM_BASE       (0x0UL)        /**< FLASH base address  */
#define FLASH_MEM_SIZE       (0x10000000UL) /**< FLASH available address space  */
#define FLASH_MEM_END        (0xFFFFFFFUL)  /**< FLASH end address  */
#define FLASH_MEM_BITS       (0x28UL)       /**< FLASH used bits  */
#define AES_MEM_BASE         (0x400E0000UL) /**< AES base address  */
#define AES_MEM_SIZE         (0x400UL)      /**< AES available address space  */
#define AES_MEM_END          (0x400E03FFUL) /**< AES end address  */
#define AES_MEM_BITS         (0x10UL)       /**< AES used bits  */
#define USBC_MEM_BASE        (0x40100000UL) /**< USBC base address  */
#define USBC_MEM_SIZE        (0x40000UL)    /**< USBC available address space  */
#define USBC_MEM_END         (0x4013FFFFUL) /**< USBC end address  */
#define USBC_MEM_BITS        (0x18UL)       /**< USBC used bits  */
#define PER_MEM_BASE         (0x40000000UL) /**< PER base address  */
#define PER_MEM_SIZE         (0xE0000UL)    /**< PER available address space  */
#define PER_MEM_END          (0x400DFFFFUL) /**< PER end address  */
#define PER_MEM_BITS         (0x20UL)       /**< PER used bits  */
#define RAM_MEM_BASE         (0x20000000UL) /**< RAM base address  */
#define RAM_MEM_SIZE         (0x40000UL)    /**< RAM available address space  */
#define RAM_MEM_END          (0x2003FFFFUL) /**< RAM end address  */
#define RAM_MEM_BITS         (0x18UL)       /**< RAM used bits  */
#define DEVICE_MEM_BASE      (0xF0040000UL) /**< DEVICE base address  */
#define DEVICE_MEM_SIZE      (0x1000UL)     /**< DEVICE available address space  */
#define DEVICE_MEM_END       (0xF0040FFFUL) /**< DEVICE end address  */
#define DEVICE_MEM_BITS      (0x12UL)       /**< DEVICE used bits  */
#define RAM_CODE_MEM_BASE    (0x10000000UL) /**< RAM_CODE base address  */
#define RAM_CODE_MEM_SIZE    (0x20000UL)    /**< RAM_CODE available address space  */
#define RAM_CODE_MEM_END     (0x1001FFFFUL) /**< RAM_CODE end address  */
#define RAM_CODE_MEM_BITS    (0x17UL)       /**< RAM_CODE used bits  */

/** Flash and SRAM limits for EZR32HG320F32R61 */
#define FLASH_BASE           (0x00000000UL) /**< Flash Base Address */
#define FLASH_SIZE           (0x00008000UL) /**< Available Flash Memory */
#define FLASH_PAGE_SIZE      1024U          /**< Flash Memory page size */
#define SRAM_BASE            (0x20000000UL) /**< SRAM Base Address */
#define SRAM_SIZE            (0x00002000UL) /**< Available SRAM Memory */
#define __CM0PLUS_REV        0x0001U        /**< Cortex-M0+ Core revision r0p1 */
#define PRS_CHAN_COUNT       6              /**< Number of PRS channels */
#define DMA_CHAN_COUNT       6              /**< Number of DMA channels */
#define EXT_IRQ_COUNT        20             /**< Number of External (NVIC) interrupts */

/** AF channels connect the different on-chip peripherals with the af-mux */
#define AFCHAN_MAX           42U
#define AFCHANLOC_MAX        7U
/** Analog AF channels */
#define AFACHAN_MAX          27U

/* Part number capabilities */

#define TIMER_PRESENT             /**< TIMER is available in this part */
#define TIMER_COUNT             3 /**< 3 TIMERs available  */
#define USART_PRESENT             /**< USART is available in this part */
#define USART_COUNT             1 /**< 1 USARTs available  */
#define USARTRF_PRESENT           /**< USARTRF is available in this part */
#define USARTRF_COUNT           1 /**< 1 USARTRFs available  */
#define IDAC_PRESENT              /**< IDAC is available in this part */
#define IDAC_COUNT              1 /**< 1 IDACs available  */
#define ADC_PRESENT               /**< ADC is available in this part */
#define ADC_COUNT               1 /**< 1 ADCs available  */
#define LEUART_PRESENT            /**< LEUART is available in this part */
#define LEUART_COUNT            1 /**< 1 LEUARTs available  */
#define PCNT_PRESENT              /**< PCNT is available in this part */
#define PCNT_COUNT              1 /**< 1 PCNTs available  */
#define I2C_PRESENT               /**< I2C is available in this part */
#define I2C_COUNT               1 /**< 1 I2Cs available  */
#define AES_PRESENT               /**< AES is available in this part */
#define AES_COUNT               1 /**< 1 AES available */
#define DMA_PRESENT               /**< DMA is available in this part */
#define DMA_COUNT               1 /**< 1 DMA available */
#define LE_PRESENT                /**< LE is available in this part */
#define LE_COUNT                1 /**< 1 LE available */
#define USBC_PRESENT              /**< USBC is available in this part */
#define USBC_COUNT              1 /**< 1 USBC available */
#define USBLE_PRESENT             /**< USBLE is available in this part */
#define USBLE_COUNT             1 /**< 1 USBLE available */
#define USB_PRESENT               /**< USB is available in this part */
#define USB_COUNT               1 /**< 1 USB available */
#define MSC_PRESENT               /**< MSC is available in this part */
#define MSC_COUNT               1 /**< 1 MSC available */
#define EMU_PRESENT               /**< EMU is available in this part */
#define EMU_COUNT               1 /**< 1 EMU available */
#define RMU_PRESENT               /**< RMU is available in this part */
#define RMU_COUNT               1 /**< 1 RMU available */
#define CMU_PRESENT               /**< CMU is available in this part */
#define CMU_COUNT               1 /**< 1 CMU available */
#define PRS_PRESENT               /**< PRS is available in this part */
#define PRS_COUNT               1 /**< 1 PRS available */
#define GPIO_PRESENT              /**< GPIO is available in this part */
#define GPIO_COUNT              1 /**< 1 GPIO available */
#define VCMP_PRESENT              /**< VCMP is available in this part */
#define VCMP_COUNT              1 /**< 1 VCMP available */
#define RTC_PRESENT               /**< RTC is available in this part */
#define RTC_COUNT               1 /**< 1 RTC available */
#define HFXTAL_PRESENT            /**< HFXTAL is available in this part */
#define HFXTAL_COUNT            1 /**< 1 HFXTAL available */
#define LFXTAL_PRESENT            /**< LFXTAL is available in this part */
#define LFXTAL_COUNT            1 /**< 1 LFXTAL available */
#define USHFRCO_PRESENT           /**< USHFRCO is available in this part */
#define USHFRCO_COUNT           1 /**< 1 USHFRCO available */
#define WDOG_PRESENT              /**< WDOG is available in this part */
#define WDOG_COUNT              1 /**< 1 WDOG available */
#define DBG_PRESENT               /**< DBG is available in this part */
#define DBG_COUNT               1 /**< 1 DBG available */
#define MTB_PRESENT               /**< MTB is available in this part */
#define MTB_COUNT               1 /**< 1 MTB available */
#define BOOTLOADER_PRESENT        /**< BOOTLOADER is available in this part */
#define BOOTLOADER_COUNT        1 /**< 1 BOOTLOADER available */
#define ANALOG_PRESENT            /**< ANALOG is available in this part */
#define ANALOG_COUNT            1 /**< 1 ANALOG available */

/***************************************************************************//**
 * @defgroup EZR32HG320F32R61_RF_Interface EZR32HG320F32R61 RF_Interface
 * @brief MCU port/pins used for RF interface.
 * @{
 ******************************************************************************/
#define RF_USARTRF_LOCATION     5     /**< RF SPI-port (USART) location number. */
#define RF_USARTRF_CS_PORT      2     /**< Bit banged RF SPI CS GPIO port no.   */
#define RF_USARTRF_CS_PIN       0     /**< Bit banged RF SPI CS GPIO pin number.*/
#define RF_USARTRF_CLK_PORT     2     /**< RF SPI CLK GPIO port number.      */
#define RF_USARTRF_CLK_PIN      3     /**< RF SPI CLK GPIO pin number.       */
#define RF_USARTRF_MISO_PORT    2     /**< RF SPI MISO GPIO port number.     */
#define RF_USARTRF_MISO_PIN     2     /**< RF SPI MISO GPIO pin number.      */
#define RF_USARTRF_MOSI_PORT    2     /**< RF SPI MOSI GPIO port number.     */
#define RF_USARTRF_MOSI_PIN     1     /**< RF SPI MOSI GPIO pin number.      */
#define RF_INT_PORT             2     /**< RF interrupt GPIO port number.    */
#define RF_INT_PIN              4     /**< RF interrupt GPIO pin number.     */
#define RF_SDN_PORT             0     /**< RF SDN GPIO port number.          */
#define RF_SDN_PIN              2     /**< RF SDN GPIO pin number.           */

/** @} End of group EZR32HG320F32R61_RF_Interface */

/** @} End of group EZR32HG320F32R61_Part */

#define ARM_MATH_CM0PLUS
#include "arm_math.h"     /* To get __CLZ definitions etc. */
#include "core_cm0plus.h" /* Cortex-M0+ processor and core peripherals */
#include "system_ezr32hg.h" /* System Header */

/***************************************************************************//**
 * @defgroup EZR32HG320F32R61_Peripheral_TypeDefs EZR32HG320F32R61 Peripheral TypeDefs
 * @{
 * @brief Device Specific Peripheral Register Structures
 ******************************************************************************/

#include "ezr32hg_aes.h"
#include "ezr32hg_dma_ch.h"
#include "ezr32hg_dma.h"
#include "ezr32hg_usb_diep.h"
#include "ezr32hg_usb_doep.h"
#include "ezr32hg_usb.h"
#include "ezr32hg_msc.h"
#include "ezr32hg_emu.h"
#include "ezr32hg_rmu.h"
#include "ezr32hg_cmu.h"
#include "ezr32hg_timer_cc.h"
#include "ezr32hg_timer.h"
#include "ezr32hg_usart.h"
#include "ezr32hg_prs_ch.h"
#include "ezr32hg_prs.h"
#include "ezr32hg_idac.h"
#include "ezr32hg_gpio_p.h"
#include "ezr32hg_gpio.h"
#include "ezr32hg_vcmp.h"
#include "ezr32hg_adc.h"
#include "ezr32hg_leuart.h"
#include "ezr32hg_pcnt.h"
#include "ezr32hg_i2c.h"
#include "ezr32hg_rtc.h"
#include "ezr32hg_wdog.h"
#include "ezr32hg_mtb.h"
#include "ezr32hg_dma_descriptor.h"
#include "ezr32hg_devinfo.h"
#include "ezr32hg_romtable.h"
#include "ezr32hg_calibrate.h"

/** @} End of group EZR32HG320F32R61_Peripheral_TypeDefs */

/***************************************************************************//**
 * @defgroup EZR32HG320F32R61_Peripheral_Base EZR32HG320F32R61 Peripheral Memory Map
 * @{
 ******************************************************************************/

#define AES_BASE          (0x400E0000UL) /**< AES base address  */
#define DMA_BASE          (0x400C2000UL) /**< DMA base address  */
#define USB_BASE          (0x400C4000UL) /**< USB base address  */
#define MSC_BASE          (0x400C0000UL) /**< MSC base address  */
#define EMU_BASE          (0x400C6000UL) /**< EMU base address  */
#define RMU_BASE          (0x400CA000UL) /**< RMU base address  */
#define CMU_BASE          (0x400C8000UL) /**< CMU base address  */
#define TIMER0_BASE       (0x40010000UL) /**< TIMER0 base address  */
#define TIMER1_BASE       (0x40010400UL) /**< TIMER1 base address  */
#define TIMER2_BASE       (0x40010800UL) /**< TIMER2 base address  */
#define USART0_BASE       (0x4000C000UL) /**< USART0 base address  */
#define USARTRF1_BASE     (0x4000C400UL) /**< USARTRF1 base address  */
#define PRS_BASE          (0x400CC000UL) /**< PRS base address  */
#define IDAC0_BASE        (0x40004000UL) /**< IDAC0 base address  */
#define GPIO_BASE         (0x40006000UL) /**< GPIO base address  */
#define VCMP_BASE         (0x40000000UL) /**< VCMP base address  */
#define ADC0_BASE         (0x40002000UL) /**< ADC0 base address  */
#define LEUART0_BASE      (0x40084000UL) /**< LEUART0 base address  */
#define PCNT0_BASE        (0x40086000UL) /**< PCNT0 base address  */
#define I2C0_BASE         (0x4000A000UL) /**< I2C0 base address  */
#define RTC_BASE          (0x40080000UL) /**< RTC base address  */
#define WDOG_BASE         (0x40088000UL) /**< WDOG base address  */
#define MTB_BASE          (0xF0040000UL) /**< MTB base address  */
#define CALIBRATE_BASE    (0x0FE08000UL) /**< CALIBRATE base address */
#define DEVINFO_BASE      (0x0FE081A8UL) /**< DEVINFO base address */
#define ROMTABLE_BASE     (0xF00FFFD0UL) /**< ROMTABLE base address */
#define LOCKBITS_BASE     (0x0FE04000UL) /**< Lock-bits page base address */
#define USERDATA_BASE     (0x0FE00000UL) /**< User data page base address */

/** @} End of group EZR32HG320F32R61_Peripheral_Base */

/***************************************************************************//**
 * @defgroup EZR32HG320F32R61_Peripheral_Declaration  EZR32HG320F32R61 Peripheral Declarations
 * @{
 ******************************************************************************/

#define AES          ((AES_TypeDef *) AES_BASE)             /**< AES base pointer */
#define DMA          ((DMA_TypeDef *) DMA_BASE)             /**< DMA base pointer */
#define USB          ((USB_TypeDef *) USB_BASE)             /**< USB base pointer */
#define MSC          ((MSC_TypeDef *) MSC_BASE)             /**< MSC base pointer */
#define EMU          ((EMU_TypeDef *) EMU_BASE)             /**< EMU base pointer */
#define RMU          ((RMU_TypeDef *) RMU_BASE)             /**< RMU base pointer */
#define CMU          ((CMU_TypeDef *) CMU_BASE)             /**< CMU base pointer */
#define TIMER0       ((TIMER_TypeDef *) TIMER0_BASE)        /**< TIMER0 base pointer */
#define TIMER1       ((TIMER_TypeDef *) TIMER1_BASE)        /**< TIMER1 base pointer */
#define TIMER2       ((TIMER_TypeDef *) TIMER2_BASE)        /**< TIMER2 base pointer */
#define USART0       ((USART_TypeDef *) USART0_BASE)        /**< USART0 base pointer */
#define USARTRF1     ((USART_TypeDef *) USARTRF1_BASE)      /**< USARTRF1 base pointer */
#define PRS          ((PRS_TypeDef *) PRS_BASE)             /**< PRS base pointer */
#define IDAC0        ((IDAC_TypeDef *) IDAC0_BASE)          /**< IDAC0 base pointer */
#define GPIO         ((GPIO_TypeDef *) GPIO_BASE)           /**< GPIO base pointer */
#define VCMP         ((VCMP_TypeDef *) VCMP_BASE)           /**< VCMP base pointer */
#define ADC0         ((ADC_TypeDef *) ADC0_BASE)            /**< ADC0 base pointer */
#define LEUART0      ((LEUART_TypeDef *) LEUART0_BASE)      /**< LEUART0 base pointer */
#define PCNT0        ((PCNT_TypeDef *) PCNT0_BASE)          /**< PCNT0 base pointer */
#define I2C0         ((I2C_TypeDef *) I2C0_BASE)            /**< I2C0 base pointer */
#define RTC          ((RTC_TypeDef *) RTC_BASE)             /**< RTC base pointer */
#define WDOG         ((WDOG_TypeDef *) WDOG_BASE)           /**< WDOG base pointer */
#define MTB          ((MTB_TypeDef *) MTB_BASE)             /**< MTB base pointer */
#define CALIBRATE    ((CALIBRATE_TypeDef *) CALIBRATE_BASE) /**< CALIBRATE base pointer */
#define DEVINFO      ((DEVINFO_TypeDef *) DEVINFO_BASE)     /**< DEVINFO base pointer */
#define ROMTABLE     ((ROMTABLE_TypeDef *) ROMTABLE_BASE)   /**< ROMTABLE base pointer */

/** @} End of group EZR32HG320F32R61_Peripheral_Declaration */

/***************************************************************************//**
 * @defgroup EZR32HG320F32R61_BitFields EZR32HG320F32R61 Bit Fields
 * @{
 ******************************************************************************/

#include "ezr32hg_prs_signals.h"
#include "ezr32hg_dmareq.h"
#include "ezr32hg_dmactrl.h"
#include "ezr32hg_usartrf.h"

/***************************************************************************//**
 * @defgroup EZR32HG320F32R61_UNLOCK EZR32HG320F32R61 Unlock Codes
 * @{
 ******************************************************************************/
#define MSC_UNLOCK_CODE      0x1B71 /**< MSC unlock code */
#define EMU_UNLOCK_CODE      0xADE8 /**< EMU unlock code */
#define CMU_UNLOCK_CODE      0x580E /**< CMU unlock code */
#define TIMER_UNLOCK_CODE    0xCE80 /**< TIMER unlock code */
#define GPIO_UNLOCK_CODE     0xA534 /**< GPIO unlock code */

/** @} End of group EZR32HG320F32R61_UNLOCK */

/** @} End of group EZR32HG320F32R61_BitFields */

/***************************************************************************//**
 * @defgroup EZR32HG320F32R61_Alternate_Function EZR32HG320F32R61 Alternate Function
 * @{
 ******************************************************************************/

#include "ezr32hg_af_ports.h"
#include "ezr32hg_af_pins.h"

/** @} End of group EZR32HG320F32R61_Alternate_Function */

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

/** @} End of group EZR32HG320F32R61 */

/** @} End of group Parts */

#ifdef __cplusplus
}
#endif
#endif /* EZR32HG320F32R61_H */
