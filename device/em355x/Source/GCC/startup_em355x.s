/**************************************************************************//**
* @file startup_em355x.s
* @brief CMSIS Core Device Startup File for GCC
*        Should be used with GCC 'GNU Tools ARM Embedded'
* @version 5.8.0
******************************************************************************/
/*
 * <b>Copyright 2009-2018 Silicon Laboratories, Inc. http://www.silabs.com</b>
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

    .syntax     unified
    .arch       armv7-m

    .globl      __StackTop

    .section    .heap
    .align      3
#ifdef __HEAP_SIZE
    .equ        Heap_Size, __HEAP_SIZE
#else
    .equ        Heap_Size, 0x00000C00
#endif
    .globl      __HeapBase
    .globl      __HeapLimit
__HeapBase:
    .if Heap_Size
    .space      Heap_Size
    .endif
    .size       __HeapBase, . - __HeapBase
__HeapLimit:
    .size       __HeapLimit, . - __HeapLimit

    .section    .vectors,"a",%progbits
    .align      2
    .globl      __Vectors
__Vectors:
    .long       __StackTop            /* Top of Stack */
    .long       Reset_Handler         /* Reset Handler */
    .long       NMI_Handler           /* NMI Handler */
    .long       HardFault_Handler     /* Hard Fault Handler */
    .long       MemManage_Handler     /* MPU Fault Handler */
    .long       BusFault_Handler      /* Bus Fault Handler */
    .long       UsageFault_Handler    /* Usage Fault Handler */
    .long       Default_Handler       /* Reserved */
    .long       Default_Handler       /* Reserved */
    .long       Default_Handler       /* Reserved */
    .long       Default_Handler       /* Reserved */
    .long       SVC_Handler           /* SVCall Handler */
    .long       DebugMon_Handler      /* Debug Monitor Handler */
    .long       Default_Handler       /* Reserved */
    .long       PendSV_Handler        /* PendSV Handler */
    .long       SysTick_Handler       /* SysTick Handler */

    /* External interrupts */
    .long       TIM1_IRQHandler       /*0  - TIM1 */
    .long       TIM2_IRQHandler       /*1  - TIM2 */
    .long       MGMT_IRQHandler       /*2  - MGMT */
    .long       BB_IRQHandler         /*3  - BB */
    .long       SLEEPTMR_IRQHandler   /*4  - SLEEPTMR */
    .long       SC1_IRQHandler        /*5  - SC1 */
    .long       SC2_IRQHandler        /*6  - SC2 */
    .long       AESCCM_IRQHandler     /*7  - AESCCM */
    .long       MACTMR_IRQHandler     /*8  - MACTMR */
    .long       MACTX_IRQHandler      /*9  - MACTX */
    .long       MACRX_IRQHandler      /*10 - MACRX */
    .long       ADC_IRQHandler        /*11 - ADC */
    .long       IRQA_IRQHandler       /*12 - IRQA */
    .long       IRQB_IRQHandler       /*13 - IRQB */
    .long       IRQC_IRQHandler       /*14 - IRQC */
    .long       IRQD_IRQHandler       /*15 - IRQD */
    .long       DEBUG_IRQHandler      /*16 - DEBUG */
    .long       SC3_IRQHandler        /*17 - SC3 */
    .long       SC4_IRQHandler        /*18 - SC4 */
    .long       USB_IRQHandler        /*19 - USB */

    .size       __Vectors, . - __Vectors

/*
 * Start Handler called by SystemInit to start the main program running.
 * Since IAR and GCC have very different semantics for this, they are
 * wrapped in this function that can be called by common code without
 * worrying about which compiler is being used.
 */

    .text
    .thumb
    .thumb_func
    .align      2
    .globl      Start_Handler
    .type       Start_Handler, %function
Start_Handler:

/*  Firstly it copies data from read only memory to RAM. There are two schemes
 *  to copy. One can copy more than one sections. Another can only copy
 *  one section.  The former scheme needs more instructions and read-only
 *  data to implement than the latter.
 *  Macro __STARTUP_COPY_MULTIPLE is used to choose between two schemes.  */

#ifdef __STARTUP_COPY_MULTIPLE
/*  Multiple sections scheme.
 *
 *  Between symbol address __copy_table_start__ and __copy_table_end__,
 *  there are array of triplets, each of which specify:
 *    offset 0: LMA of start of a section to copy from
 *    offset 4: VMA of start of a section to copy to
 *    offset 8: size of the section to copy. Must be multiply of 4
 *
 *  All addresses must be aligned to 4 bytes boundary.
 */
    ldr     r4, =__copy_table_start__
    ldr     r5, =__copy_table_end__

.L_loop0:
    cmp     r4, r5
    bge     .L_loop0_done
    ldr     r1, [r4]
    ldr     r2, [r4, #4]
    ldr     r3, [r4, #8]

.L_loop0_0:
    subs    r3, #4
    ittt    ge
    ldrge   r0, [r1, r3]
    strge   r0, [r2, r3]
    bge     .L_loop0_0

    adds    r4, #12
    b       .L_loop0

.L_loop0_done:
#else
/*  Single section scheme.
 *
 *  The ranges of copy from/to are specified by following symbols
 *    __etext: LMA of start of the section to copy from. Usually end of text
 *    __data_start__: VMA of start of the section to copy to
 *    __data_end__: VMA of end of the section to copy to
 *
 *  All addresses must be aligned to 4 bytes boundary.
 */
    ldr     r1, =__etext
    ldr     r2, =__data_start__
    ldr     r3, =__data_end__
.L_loop1:
    cmp     r2, r3
    ittt    lt
    ldrlt   r0, [r1], #4
    strlt   r0, [r2], #4
    blt     .L_loop1
#endif /*__STARTUP_COPY_MULTIPLE */

/*  This part of work usually is done in C library startup code. Otherwise,
 *  define this macro to enable it in this startup.
 *
 *  There are two schemes too. One can clear multiple BSS sections. Another
 *  can only clear one section. The former is more size expensive than the
 *  latter.
 *
 *  Define macro __STARTUP_CLEAR_BSS_MULTIPLE to choose the former.
 *  Otherwise efine macro __STARTUP_CLEAR_BSS to choose the later.
 */
#ifdef __STARTUP_CLEAR_BSS_MULTIPLE
/*  Multiple sections scheme.
 *
 *  Between symbol address __zero_table_start__ and __zero_table_end__,
 *  there are array of tuples specifying:
 *    offset 0: Start of a BSS section
 *    offset 4: Size of this BSS section. Must be multiply of 4
 */
    ldr     r3, =__zero_table_start__
    ldr     r4, =__zero_table_end__

.L_loop2:
    cmp     r3, r4
    bge     .L_loop2_done
    ldr     r1, [r3]
    ldr     r2, [r3, #4]
    movs    r0, 0

.L_loop2_0:
    subs    r2, #4
    itt     ge
    strge   r0, [r1, r2]
    bge     .L_loop2_0
    adds    r3, #8
    b       .L_loop2
.L_loop2_done:
#elif defined (__STARTUP_CLEAR_BSS)
/*  Single BSS section scheme.
 *
 *  The BSS section is specified by following symbols
 *    __bss_start__: start of the BSS section.
 *    __bss_end__: end of the BSS section.
 *
 *  Both addresses must be aligned to 4 bytes boundary.
 */
    ldr     r1, =__bss_start__
    ldr     r2, =__bss_end__

    movs    r0, 0
.L_loop3:
    cmp     r1, r2
    itt     lt
    strlt   r0, [r1], #4
    blt     .L_loop3
#endif /* __STARTUP_CLEAR_BSS_MULTIPLE || __STARTUP_CLEAR_BSS */

#ifndef __START
#define __START _start
#endif
    bl      __START

    .pool
    .size   Start_Handler, . - Start_Handler

    .text
    .thumb
    .thumb_func
    .align      2
    .globl      Reset_Handler
    .type       Reset_Handler, %function
Reset_Handler:

#ifndef __NO_SYSTEM_INIT
    ldr     r0, =SystemInit
    bx      r0
/* Start_Handler is now called by SystemInit. */
#else
    ldr     r0, =Start_Handler
    bx      r0
#endif

    .pool
    .size   Reset_Handler, . - Reset_Handler
	

    .align  1
    .thumb_func
    .weak   Default_Handler
    .type   Default_Handler, %function
Default_Handler:
    b       .
    .size   Default_Handler, . - Default_Handler

/* Exit function, in case main ever accidentally returns.
 *
 * A GCC compilation that uses more than "nosys.specs" needs an exit() function.
 * Ideally once START passes control to main, the code should never return.
 */
    .align  1
    .thumb_func
    .weak   exit
    .type   exit, %function
exit:
    b       .
    .size   exit, . - exit


/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro  def_irq_handler handler_name
    .weak   \handler_name
    .set    \handler_name, Default_Handler
    .endm

    def_irq_handler     NMI_Handler
    def_irq_handler     HardFault_Handler
    def_irq_handler     MemManage_Handler
    def_irq_handler     BusFault_Handler
    def_irq_handler     UsageFault_Handler
    def_irq_handler     SVC_Handler
    def_irq_handler     DebugMon_Handler
    def_irq_handler     PendSV_Handler
    def_irq_handler     SysTick_Handler
    def_irq_handler     TIM1_IRQHandler
    def_irq_handler     TIM2_IRQHandler
    def_irq_handler     MGMT_IRQHandler
    def_irq_handler     BB_IRQHandler
    def_irq_handler     SLEEPTMR_IRQHandler
    def_irq_handler     SC1_IRQHandler
    def_irq_handler     SC2_IRQHandler
    def_irq_handler     AESCCM_IRQHandler
    def_irq_handler     MACTMR_IRQHandler
    def_irq_handler     MACTX_IRQHandler
    def_irq_handler     MACRX_IRQHandler
    def_irq_handler     ADC_IRQHandler
    def_irq_handler     IRQA_IRQHandler
    def_irq_handler     IRQB_IRQHandler
    def_irq_handler     IRQC_IRQHandler
    def_irq_handler     IRQD_IRQHandler
    def_irq_handler     DEBUG_IRQHandler
    def_irq_handler     SC3_IRQHandler
    def_irq_handler     SC4_IRQHandler
    def_irq_handler     USB_IRQHandler

    .end
