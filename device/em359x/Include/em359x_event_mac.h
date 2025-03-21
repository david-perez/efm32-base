/**************************************************************************//**
* @file
* @brief em359x_event_mac Register and Bit Field definitions
* @version 5.8.0
******************************************************************************
* @section License
* <b>(C) Copyright 2014 Silicon Labs, www.silabs.com</b>
*******************************************************************************
*
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely, subject to the following restrictions:
*
* 1. The origin of this software must not be misrepresented; you must not
*    claim that you wrote the original software.
* 2. Altered source versions must be plainly marked as such, and must not be
*    misrepresented as being the original software.
* 3. This notice may not be removed or altered from any source distribution.
*
* DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Labs has no
* obligation to support this Software. Silicon Labs is providing the
* Software "AS IS", with no express or implied warranties of any kind,
* including, but not limited to, any implied warranties of merchantability
* or fitness for any particular purpose or warranties against infringement
* of any proprietary rights of a third party.
*
* Silicon Labs will not be liable for any consequential, incidental, or
* special damages, or any other relief, or for any claim by any third party,
* arising from your use of this Software.
*
******************************************************************************/

#ifndef EM359X_EVENT_MAC_H
#define EM359X_EVENT_MAC_H

/**************************************************************************//**
 * @defgroup EM359X_EVENT_MAC
 * @{
 * @brief EM359X_EVENT_MAC Register Declaration
 *****************************************************************************/

typedef struct {
  __IOM uint32_t RXSRC;
  __IOM uint32_t TXSRC;
  __IOM uint32_t TIMERSRC;
  uint32_t RESERVED0[13];
  __IOM uint32_t RXMASK;
  __IOM uint32_t TXMASK;
  __IOM uint32_t TIMERMASK;
} EVENT_MAC_TypeDef;              /** @} */

/**************************************************************************//**
 * @defgroup EM359X_EVENT_MAC_BitFields
 * @{
 *****************************************************************************/

/* Bit fields for EVENT_MAC RXSRC */
#define _EVENT_MAC_RXSRC_RESETVALUE               0x00000000UL
#define _EVENT_MAC_RXSRC_MASK                     0x0000FFFFUL
#define EVENT_MAC_RXSRC_TXBACKERR                 (0x1UL << 15)
#define _EVENT_MAC_RXSRC_TXBACKERR_SHIFT          15
#define _EVENT_MAC_RXSRC_TXBACKERR_MASK           0x8000UL
#define _EVENT_MAC_RXSRC_TXBACKERR_DEFAULT        0x00000000UL
#define EVENT_MAC_RXSRC_TXBACKERR_DEFAULT         (_EVENT_MAC_RXSRC_TXBACKERR_DEFAULT << 15)
#define EVENT_MAC_RXSRC_TXAACKERR                 (0x1UL << 14)
#define _EVENT_MAC_RXSRC_TXAACKERR_SHIFT          14
#define _EVENT_MAC_RXSRC_TXAACKERR_MASK           0x4000UL
#define _EVENT_MAC_RXSRC_TXAACKERR_DEFAULT        0x00000000UL
#define EVENT_MAC_RXSRC_TXAACKERR_DEFAULT         (_EVENT_MAC_RXSRC_TXAACKERR_DEFAULT << 14)
#define EVENT_MAC_RXSRC_RXOVFLW                   (0x1UL << 13)
#define _EVENT_MAC_RXSRC_RXOVFLW_SHIFT            13
#define _EVENT_MAC_RXSRC_RXOVFLW_MASK             0x2000UL
#define _EVENT_MAC_RXSRC_RXOVFLW_DEFAULT          0x00000000UL
#define EVENT_MAC_RXSRC_RXOVFLW_DEFAULT           (_EVENT_MAC_RXSRC_RXOVFLW_DEFAULT << 13)
#define EVENT_MAC_RXSRC_RXERROR                   (0x1UL << 12)
#define _EVENT_MAC_RXSRC_RXERROR_SHIFT            12
#define _EVENT_MAC_RXSRC_RXERROR_MASK             0x1000UL
#define _EVENT_MAC_RXSRC_RXERROR_DEFAULT          0x00000000UL
#define EVENT_MAC_RXSRC_RXERROR_DEFAULT           (_EVENT_MAC_RXSRC_RXERROR_DEFAULT << 12)
#define EVENT_MAC_RXSRC_BBRXLENERR                (0x1UL << 11)
#define _EVENT_MAC_RXSRC_BBRXLENERR_SHIFT         11
#define _EVENT_MAC_RXSRC_BBRXLENERR_MASK          0x800UL
#define _EVENT_MAC_RXSRC_BBRXLENERR_DEFAULT       0x00000000UL
#define EVENT_MAC_RXSRC_BBRXLENERR_DEFAULT        (_EVENT_MAC_RXSRC_BBRXLENERR_DEFAULT << 11)
#define EVENT_MAC_RXSRC_TXCOLLRX                  (0x1UL << 10)
#define _EVENT_MAC_RXSRC_TXCOLLRX_SHIFT           10
#define _EVENT_MAC_RXSRC_TXCOLLRX_MASK            0x400UL
#define _EVENT_MAC_RXSRC_TXCOLLRX_DEFAULT         0x00000000UL
#define EVENT_MAC_RXSRC_TXCOLLRX_DEFAULT          (_EVENT_MAC_RXSRC_TXCOLLRX_DEFAULT << 10)
#define EVENT_MAC_RXSRC_RSSIINSTMEAS              (0x1UL << 9)
#define _EVENT_MAC_RXSRC_RSSIINSTMEAS_SHIFT       9
#define _EVENT_MAC_RXSRC_RSSIINSTMEAS_MASK        0x200UL
#define _EVENT_MAC_RXSRC_RSSIINSTMEAS_DEFAULT     0x00000000UL
#define EVENT_MAC_RXSRC_RSSIINSTMEAS_DEFAULT      (_EVENT_MAC_RXSRC_RSSIINSTMEAS_DEFAULT << 9)
#define EVENT_MAC_RXSRC_TXBACK                    (0x1UL << 8)
#define _EVENT_MAC_RXSRC_TXBACK_SHIFT             8
#define _EVENT_MAC_RXSRC_TXBACK_MASK              0x100UL
#define _EVENT_MAC_RXSRC_TXBACK_DEFAULT           0x00000000UL
#define EVENT_MAC_RXSRC_TXBACK_DEFAULT            (_EVENT_MAC_RXSRC_TXBACK_DEFAULT << 8)
#define EVENT_MAC_RXSRC_TXAACK                    (0x1UL << 7)
#define _EVENT_MAC_RXSRC_TXAACK_SHIFT             7
#define _EVENT_MAC_RXSRC_TXAACK_MASK              0x80UL
#define _EVENT_MAC_RXSRC_TXAACK_DEFAULT           0x00000000UL
#define EVENT_MAC_RXSRC_TXAACK_DEFAULT            (_EVENT_MAC_RXSRC_TXAACK_DEFAULT << 7)
#define EVENT_MAC_RXSRC_RXBUNLOADCOMP             (0x1UL << 6)
#define _EVENT_MAC_RXSRC_RXBUNLOADCOMP_SHIFT      6
#define _EVENT_MAC_RXSRC_RXBUNLOADCOMP_MASK       0x40UL
#define _EVENT_MAC_RXSRC_RXBUNLOADCOMP_DEFAULT    0x00000000UL
#define EVENT_MAC_RXSRC_RXBUNLOADCOMP_DEFAULT     (_EVENT_MAC_RXSRC_RXBUNLOADCOMP_DEFAULT << 6)
#define EVENT_MAC_RXSRC_RXAUNLOADCOMP             (0x1UL << 5)
#define _EVENT_MAC_RXSRC_RXAUNLOADCOMP_SHIFT      5
#define _EVENT_MAC_RXSRC_RXAUNLOADCOMP_MASK       0x20UL
#define _EVENT_MAC_RXSRC_RXAUNLOADCOMP_DEFAULT    0x00000000UL
#define EVENT_MAC_RXSRC_RXAUNLOADCOMP_DEFAULT     (_EVENT_MAC_RXSRC_RXAUNLOADCOMP_DEFAULT << 5)
#define EVENT_MAC_RXSRC_RXBADDRREC                (0x1UL << 4)
#define _EVENT_MAC_RXSRC_RXBADDRREC_SHIFT         4
#define _EVENT_MAC_RXSRC_RXBADDRREC_MASK          0x10UL
#define _EVENT_MAC_RXSRC_RXBADDRREC_DEFAULT       0x00000000UL
#define EVENT_MAC_RXSRC_RXBADDRREC_DEFAULT        (_EVENT_MAC_RXSRC_RXBADDRREC_DEFAULT << 4)
#define EVENT_MAC_RXSRC_RXAADDRREC                (0x1UL << 3)
#define _EVENT_MAC_RXSRC_RXAADDRREC_SHIFT         3
#define _EVENT_MAC_RXSRC_RXAADDRREC_MASK          0x8UL
#define _EVENT_MAC_RXSRC_RXAADDRREC_DEFAULT       0x00000000UL
#define EVENT_MAC_RXSRC_RXAADDRREC_DEFAULT        (_EVENT_MAC_RXSRC_RXAADDRREC_DEFAULT << 3)
#define EVENT_MAC_RXSRC_RXBFILTCOMP               (0x1UL << 2)
#define _EVENT_MAC_RXSRC_RXBFILTCOMP_SHIFT        2
#define _EVENT_MAC_RXSRC_RXBFILTCOMP_MASK         0x4UL
#define _EVENT_MAC_RXSRC_RXBFILTCOMP_DEFAULT      0x00000000UL
#define EVENT_MAC_RXSRC_RXBFILTCOMP_DEFAULT       (_EVENT_MAC_RXSRC_RXBFILTCOMP_DEFAULT << 2)
#define EVENT_MAC_RXSRC_RXAFILTCOMP               (0x1UL << 1)
#define _EVENT_MAC_RXSRC_RXAFILTCOMP_SHIFT        1
#define _EVENT_MAC_RXSRC_RXAFILTCOMP_MASK         0x2UL
#define _EVENT_MAC_RXSRC_RXAFILTCOMP_DEFAULT      0x00000000UL
#define EVENT_MAC_RXSRC_RXAFILTCOMP_DEFAULT       (_EVENT_MAC_RXSRC_RXAFILTCOMP_DEFAULT << 1)
#define EVENT_MAC_RXSRC_RXFRAME                   (0x1UL << 0)
#define _EVENT_MAC_RXSRC_RXFRAME_SHIFT            0
#define _EVENT_MAC_RXSRC_RXFRAME_MASK             0x1UL
#define _EVENT_MAC_RXSRC_RXFRAME_DEFAULT          0x00000000UL
#define EVENT_MAC_RXSRC_RXFRAME_DEFAULT           (_EVENT_MAC_RXSRC_RXFRAME_DEFAULT << 0)

/* Bit fields for EVENT_MAC TXSRC */
#define _EVENT_MAC_TXSRC_RESETVALUE             0x00000000UL
#define _EVENT_MAC_TXSRC_MASK                   0x00000FFFUL
#define EVENT_MAC_TXSRC_RXBACK                  (0x1UL << 11)
#define _EVENT_MAC_TXSRC_RXBACK_SHIFT           11
#define _EVENT_MAC_TXSRC_RXBACK_MASK            0x800UL
#define _EVENT_MAC_TXSRC_RXBACK_DEFAULT         0x00000000UL
#define EVENT_MAC_TXSRC_RXBACK_DEFAULT          (_EVENT_MAC_TXSRC_RXBACK_DEFAULT << 11)
#define EVENT_MAC_TXSRC_RXAACK                  (0x1UL << 10)
#define _EVENT_MAC_TXSRC_RXAACK_SHIFT           10
#define _EVENT_MAC_TXSRC_RXAACK_MASK            0x400UL
#define _EVENT_MAC_TXSRC_RXAACK_DEFAULT         0x00000000UL
#define EVENT_MAC_TXSRC_RXAACK_DEFAULT          (_EVENT_MAC_TXSRC_RXAACK_DEFAULT << 10)
#define EVENT_MAC_TXSRC_TXBUNLOAD               (0x1UL << 9)
#define _EVENT_MAC_TXSRC_TXBUNLOAD_SHIFT        9
#define _EVENT_MAC_TXSRC_TXBUNLOAD_MASK         0x200UL
#define _EVENT_MAC_TXSRC_TXBUNLOAD_DEFAULT      0x00000000UL
#define EVENT_MAC_TXSRC_TXBUNLOAD_DEFAULT       (_EVENT_MAC_TXSRC_TXBUNLOAD_DEFAULT << 9)
#define EVENT_MAC_TXSRC_TXAUNLOAD               (0x1UL << 8)
#define _EVENT_MAC_TXSRC_TXAUNLOAD_SHIFT        8
#define _EVENT_MAC_TXSRC_TXAUNLOAD_MASK         0x100UL
#define _EVENT_MAC_TXSRC_TXAUNLOAD_DEFAULT      0x00000000UL
#define EVENT_MAC_TXSRC_TXAUNLOAD_DEFAULT       (_EVENT_MAC_TXSRC_TXAUNLOAD_DEFAULT << 8)
#define EVENT_MAC_TXSRC_ACKEXPIRED              (0x1UL << 7)
#define _EVENT_MAC_TXSRC_ACKEXPIRED_SHIFT       7
#define _EVENT_MAC_TXSRC_ACKEXPIRED_MASK        0x80UL
#define _EVENT_MAC_TXSRC_ACKEXPIRED_DEFAULT     0x00000000UL
#define EVENT_MAC_TXSRC_ACKEXPIRED_DEFAULT      (_EVENT_MAC_TXSRC_ACKEXPIRED_DEFAULT << 7)
#define EVENT_MAC_TXSRC_TXLOCKFAIL              (0x1UL << 6)
#define _EVENT_MAC_TXSRC_TXLOCKFAIL_SHIFT       6
#define _EVENT_MAC_TXSRC_TXLOCKFAIL_MASK        0x40UL
#define _EVENT_MAC_TXSRC_TXLOCKFAIL_DEFAULT     0x00000000UL
#define EVENT_MAC_TXSRC_TXLOCKFAIL_DEFAULT      (_EVENT_MAC_TXSRC_TXLOCKFAIL_DEFAULT << 6)
#define EVENT_MAC_TXSRC_TXUNDERFLOW             (0x1UL << 5)
#define _EVENT_MAC_TXSRC_TXUNDERFLOW_SHIFT      5
#define _EVENT_MAC_TXSRC_TXUNDERFLOW_MASK       0x20UL
#define _EVENT_MAC_TXSRC_TXUNDERFLOW_DEFAULT    0x00000000UL
#define EVENT_MAC_TXSRC_TXUNDERFLOW_DEFAULT     (_EVENT_MAC_TXSRC_TXUNDERFLOW_DEFAULT << 5)
#define EVENT_MAC_TXSRC_CCAFAIL                 (0x1UL << 4)
#define _EVENT_MAC_TXSRC_CCAFAIL_SHIFT          4
#define _EVENT_MAC_TXSRC_CCAFAIL_MASK           0x10UL
#define _EVENT_MAC_TXSRC_CCAFAIL_DEFAULT        0x00000000UL
#define EVENT_MAC_TXSRC_CCAFAIL_DEFAULT         (_EVENT_MAC_TXSRC_CCAFAIL_DEFAULT << 4)
#define EVENT_MAC_TXSRC_SFDSENT                 (0x1UL << 3)
#define _EVENT_MAC_TXSRC_SFDSENT_SHIFT          3
#define _EVENT_MAC_TXSRC_SFDSENT_MASK           0x8UL
#define _EVENT_MAC_TXSRC_SFDSENT_DEFAULT        0x00000000UL
#define EVENT_MAC_TXSRC_SFDSENT_DEFAULT         (_EVENT_MAC_TXSRC_SFDSENT_DEFAULT << 3)
#define EVENT_MAC_TXSRC_BOCOMPLETE              (0x1UL << 2)
#define _EVENT_MAC_TXSRC_BOCOMPLETE_SHIFT       2
#define _EVENT_MAC_TXSRC_BOCOMPLETE_MASK        0x4UL
#define _EVENT_MAC_TXSRC_BOCOMPLETE_DEFAULT     0x00000000UL
#define EVENT_MAC_TXSRC_BOCOMPLETE_DEFAULT      (_EVENT_MAC_TXSRC_BOCOMPLETE_DEFAULT << 2)
#define EVENT_MAC_TXSRC_RXACK                   (0x1UL << 1)
#define _EVENT_MAC_TXSRC_RXACK_SHIFT            1
#define _EVENT_MAC_TXSRC_RXACK_MASK             0x2UL
#define _EVENT_MAC_TXSRC_RXACK_DEFAULT          0x00000000UL
#define EVENT_MAC_TXSRC_RXACK_DEFAULT           (_EVENT_MAC_TXSRC_RXACK_DEFAULT << 1)
#define EVENT_MAC_TXSRC_TXCOMPLETE              (0x1UL << 0)
#define _EVENT_MAC_TXSRC_TXCOMPLETE_SHIFT       0
#define _EVENT_MAC_TXSRC_TXCOMPLETE_MASK        0x1UL
#define _EVENT_MAC_TXSRC_TXCOMPLETE_DEFAULT     0x00000000UL
#define EVENT_MAC_TXSRC_TXCOMPLETE_DEFAULT      (_EVENT_MAC_TXSRC_TXCOMPLETE_DEFAULT << 0)

/* Bit fields for EVENT_MAC TIMERSRC */
#define _EVENT_MAC_TIMERSRC_RESETVALUE            0x00000000UL
#define _EVENT_MAC_TIMERSRC_MASK                  0x00000007UL
#define EVENT_MAC_TIMERSRC_TIMERCOMPB             (0x1UL << 2)
#define _EVENT_MAC_TIMERSRC_TIMERCOMPB_SHIFT      2
#define _EVENT_MAC_TIMERSRC_TIMERCOMPB_MASK       0x4UL
#define _EVENT_MAC_TIMERSRC_TIMERCOMPB_DEFAULT    0x00000000UL
#define EVENT_MAC_TIMERSRC_TIMERCOMPB_DEFAULT     (_EVENT_MAC_TIMERSRC_TIMERCOMPB_DEFAULT << 2)
#define EVENT_MAC_TIMERSRC_TIMERCOMPA             (0x1UL << 1)
#define _EVENT_MAC_TIMERSRC_TIMERCOMPA_SHIFT      1
#define _EVENT_MAC_TIMERSRC_TIMERCOMPA_MASK       0x2UL
#define _EVENT_MAC_TIMERSRC_TIMERCOMPA_DEFAULT    0x00000000UL
#define EVENT_MAC_TIMERSRC_TIMERCOMPA_DEFAULT     (_EVENT_MAC_TIMERSRC_TIMERCOMPA_DEFAULT << 1)
#define EVENT_MAC_TIMERSRC_TIMERWRAP              (0x1UL << 0)
#define _EVENT_MAC_TIMERSRC_TIMERWRAP_SHIFT       0
#define _EVENT_MAC_TIMERSRC_TIMERWRAP_MASK        0x1UL
#define _EVENT_MAC_TIMERSRC_TIMERWRAP_DEFAULT     0x00000000UL
#define EVENT_MAC_TIMERSRC_TIMERWRAP_DEFAULT      (_EVENT_MAC_TIMERSRC_TIMERWRAP_DEFAULT << 0)

/* Bit fields for EVENT_MAC RXMASK */
#define _EVENT_MAC_RXMASK_RESETVALUE               0x00000000UL
#define _EVENT_MAC_RXMASK_MASK                     0x0000FFFFUL
#define EVENT_MAC_RXMASK_TXBACKERR                 (0x1UL << 15)
#define _EVENT_MAC_RXMASK_TXBACKERR_SHIFT          15
#define _EVENT_MAC_RXMASK_TXBACKERR_MASK           0x8000UL
#define _EVENT_MAC_RXMASK_TXBACKERR_DEFAULT        0x00000000UL
#define EVENT_MAC_RXMASK_TXBACKERR_DEFAULT         (_EVENT_MAC_RXMASK_TXBACKERR_DEFAULT << 15)
#define EVENT_MAC_RXMASK_TXAACKERR                 (0x1UL << 14)
#define _EVENT_MAC_RXMASK_TXAACKERR_SHIFT          14
#define _EVENT_MAC_RXMASK_TXAACKERR_MASK           0x4000UL
#define _EVENT_MAC_RXMASK_TXAACKERR_DEFAULT        0x00000000UL
#define EVENT_MAC_RXMASK_TXAACKERR_DEFAULT         (_EVENT_MAC_RXMASK_TXAACKERR_DEFAULT << 14)
#define EVENT_MAC_RXMASK_RXOVFLW                   (0x1UL << 13)
#define _EVENT_MAC_RXMASK_RXOVFLW_SHIFT            13
#define _EVENT_MAC_RXMASK_RXOVFLW_MASK             0x2000UL
#define _EVENT_MAC_RXMASK_RXOVFLW_DEFAULT          0x00000000UL
#define EVENT_MAC_RXMASK_RXOVFLW_DEFAULT           (_EVENT_MAC_RXMASK_RXOVFLW_DEFAULT << 13)
#define EVENT_MAC_RXMASK_RXERROR                   (0x1UL << 12)
#define _EVENT_MAC_RXMASK_RXERROR_SHIFT            12
#define _EVENT_MAC_RXMASK_RXERROR_MASK             0x1000UL
#define _EVENT_MAC_RXMASK_RXERROR_DEFAULT          0x00000000UL
#define EVENT_MAC_RXMASK_RXERROR_DEFAULT           (_EVENT_MAC_RXMASK_RXERROR_DEFAULT << 12)
#define EVENT_MAC_RXMASK_BBRXLENERR                (0x1UL << 11)
#define _EVENT_MAC_RXMASK_BBRXLENERR_SHIFT         11
#define _EVENT_MAC_RXMASK_BBRXLENERR_MASK          0x800UL
#define _EVENT_MAC_RXMASK_BBRXLENERR_DEFAULT       0x00000000UL
#define EVENT_MAC_RXMASK_BBRXLENERR_DEFAULT        (_EVENT_MAC_RXMASK_BBRXLENERR_DEFAULT << 11)
#define EVENT_MAC_RXMASK_TXCOLLRX                  (0x1UL << 10)
#define _EVENT_MAC_RXMASK_TXCOLLRX_SHIFT           10
#define _EVENT_MAC_RXMASK_TXCOLLRX_MASK            0x400UL
#define _EVENT_MAC_RXMASK_TXCOLLRX_DEFAULT         0x00000000UL
#define EVENT_MAC_RXMASK_TXCOLLRX_DEFAULT          (_EVENT_MAC_RXMASK_TXCOLLRX_DEFAULT << 10)
#define EVENT_MAC_RXMASK_RSSIINSTMEAS              (0x1UL << 9)
#define _EVENT_MAC_RXMASK_RSSIINSTMEAS_SHIFT       9
#define _EVENT_MAC_RXMASK_RSSIINSTMEAS_MASK        0x200UL
#define _EVENT_MAC_RXMASK_RSSIINSTMEAS_DEFAULT     0x00000000UL
#define EVENT_MAC_RXMASK_RSSIINSTMEAS_DEFAULT      (_EVENT_MAC_RXMASK_RSSIINSTMEAS_DEFAULT << 9)
#define EVENT_MAC_RXMASK_TXBACK                    (0x1UL << 8)
#define _EVENT_MAC_RXMASK_TXBACK_SHIFT             8
#define _EVENT_MAC_RXMASK_TXBACK_MASK              0x100UL
#define _EVENT_MAC_RXMASK_TXBACK_DEFAULT           0x00000000UL
#define EVENT_MAC_RXMASK_TXBACK_DEFAULT            (_EVENT_MAC_RXMASK_TXBACK_DEFAULT << 8)
#define EVENT_MAC_RXMASK_TXAACK                    (0x1UL << 7)
#define _EVENT_MAC_RXMASK_TXAACK_SHIFT             7
#define _EVENT_MAC_RXMASK_TXAACK_MASK              0x80UL
#define _EVENT_MAC_RXMASK_TXAACK_DEFAULT           0x00000000UL
#define EVENT_MAC_RXMASK_TXAACK_DEFAULT            (_EVENT_MAC_RXMASK_TXAACK_DEFAULT << 7)
#define EVENT_MAC_RXMASK_RXBUNLOADCOMP             (0x1UL << 6)
#define _EVENT_MAC_RXMASK_RXBUNLOADCOMP_SHIFT      6
#define _EVENT_MAC_RXMASK_RXBUNLOADCOMP_MASK       0x40UL
#define _EVENT_MAC_RXMASK_RXBUNLOADCOMP_DEFAULT    0x00000000UL
#define EVENT_MAC_RXMASK_RXBUNLOADCOMP_DEFAULT     (_EVENT_MAC_RXMASK_RXBUNLOADCOMP_DEFAULT << 6)
#define EVENT_MAC_RXMASK_RXAUNLOADCOMP             (0x1UL << 5)
#define _EVENT_MAC_RXMASK_RXAUNLOADCOMP_SHIFT      5
#define _EVENT_MAC_RXMASK_RXAUNLOADCOMP_MASK       0x20UL
#define _EVENT_MAC_RXMASK_RXAUNLOADCOMP_DEFAULT    0x00000000UL
#define EVENT_MAC_RXMASK_RXAUNLOADCOMP_DEFAULT     (_EVENT_MAC_RXMASK_RXAUNLOADCOMP_DEFAULT << 5)
#define EVENT_MAC_RXMASK_RXBADDRREC                (0x1UL << 4)
#define _EVENT_MAC_RXMASK_RXBADDRREC_SHIFT         4
#define _EVENT_MAC_RXMASK_RXBADDRREC_MASK          0x10UL
#define _EVENT_MAC_RXMASK_RXBADDRREC_DEFAULT       0x00000000UL
#define EVENT_MAC_RXMASK_RXBADDRREC_DEFAULT        (_EVENT_MAC_RXMASK_RXBADDRREC_DEFAULT << 4)
#define EVENT_MAC_RXMASK_RXAADDRREC                (0x1UL << 3)
#define _EVENT_MAC_RXMASK_RXAADDRREC_SHIFT         3
#define _EVENT_MAC_RXMASK_RXAADDRREC_MASK          0x8UL
#define _EVENT_MAC_RXMASK_RXAADDRREC_DEFAULT       0x00000000UL
#define EVENT_MAC_RXMASK_RXAADDRREC_DEFAULT        (_EVENT_MAC_RXMASK_RXAADDRREC_DEFAULT << 3)
#define EVENT_MAC_RXMASK_RXBFILTCOMP               (0x1UL << 2)
#define _EVENT_MAC_RXMASK_RXBFILTCOMP_SHIFT        2
#define _EVENT_MAC_RXMASK_RXBFILTCOMP_MASK         0x4UL
#define _EVENT_MAC_RXMASK_RXBFILTCOMP_DEFAULT      0x00000000UL
#define EVENT_MAC_RXMASK_RXBFILTCOMP_DEFAULT       (_EVENT_MAC_RXMASK_RXBFILTCOMP_DEFAULT << 2)
#define EVENT_MAC_RXMASK_RXAFILTCOMP               (0x1UL << 1)
#define _EVENT_MAC_RXMASK_RXAFILTCOMP_SHIFT        1
#define _EVENT_MAC_RXMASK_RXAFILTCOMP_MASK         0x2UL
#define _EVENT_MAC_RXMASK_RXAFILTCOMP_DEFAULT      0x00000000UL
#define EVENT_MAC_RXMASK_RXAFILTCOMP_DEFAULT       (_EVENT_MAC_RXMASK_RXAFILTCOMP_DEFAULT << 1)
#define EVENT_MAC_RXMASK_RXFRAME                   (0x1UL << 0)
#define _EVENT_MAC_RXMASK_RXFRAME_SHIFT            0
#define _EVENT_MAC_RXMASK_RXFRAME_MASK             0x1UL
#define _EVENT_MAC_RXMASK_RXFRAME_DEFAULT          0x00000000UL
#define EVENT_MAC_RXMASK_RXFRAME_DEFAULT           (_EVENT_MAC_RXMASK_RXFRAME_DEFAULT << 0)

/* Bit fields for EVENT_MAC TXMASK */
#define _EVENT_MAC_TXMASK_RESETVALUE             0x00000000UL
#define _EVENT_MAC_TXMASK_MASK                   0x00000FFFUL
#define EVENT_MAC_TXMASK_RXBACK                  (0x1UL << 11)
#define _EVENT_MAC_TXMASK_RXBACK_SHIFT           11
#define _EVENT_MAC_TXMASK_RXBACK_MASK            0x800UL
#define _EVENT_MAC_TXMASK_RXBACK_DEFAULT         0x00000000UL
#define EVENT_MAC_TXMASK_RXBACK_DEFAULT          (_EVENT_MAC_TXMASK_RXBACK_DEFAULT << 11)
#define EVENT_MAC_TXMASK_RXAACK                  (0x1UL << 10)
#define _EVENT_MAC_TXMASK_RXAACK_SHIFT           10
#define _EVENT_MAC_TXMASK_RXAACK_MASK            0x400UL
#define _EVENT_MAC_TXMASK_RXAACK_DEFAULT         0x00000000UL
#define EVENT_MAC_TXMASK_RXAACK_DEFAULT          (_EVENT_MAC_TXMASK_RXAACK_DEFAULT << 10)
#define EVENT_MAC_TXMASK_TXBUNLOAD               (0x1UL << 9)
#define _EVENT_MAC_TXMASK_TXBUNLOAD_SHIFT        9
#define _EVENT_MAC_TXMASK_TXBUNLOAD_MASK         0x200UL
#define _EVENT_MAC_TXMASK_TXBUNLOAD_DEFAULT      0x00000000UL
#define EVENT_MAC_TXMASK_TXBUNLOAD_DEFAULT       (_EVENT_MAC_TXMASK_TXBUNLOAD_DEFAULT << 9)
#define EVENT_MAC_TXMASK_TXAUNLOAD               (0x1UL << 8)
#define _EVENT_MAC_TXMASK_TXAUNLOAD_SHIFT        8
#define _EVENT_MAC_TXMASK_TXAUNLOAD_MASK         0x100UL
#define _EVENT_MAC_TXMASK_TXAUNLOAD_DEFAULT      0x00000000UL
#define EVENT_MAC_TXMASK_TXAUNLOAD_DEFAULT       (_EVENT_MAC_TXMASK_TXAUNLOAD_DEFAULT << 8)
#define EVENT_MAC_TXMASK_ACKEXPIRED              (0x1UL << 7)
#define _EVENT_MAC_TXMASK_ACKEXPIRED_SHIFT       7
#define _EVENT_MAC_TXMASK_ACKEXPIRED_MASK        0x80UL
#define _EVENT_MAC_TXMASK_ACKEXPIRED_DEFAULT     0x00000000UL
#define EVENT_MAC_TXMASK_ACKEXPIRED_DEFAULT      (_EVENT_MAC_TXMASK_ACKEXPIRED_DEFAULT << 7)
#define EVENT_MAC_TXMASK_TXLOCKFAIL              (0x1UL << 6)
#define _EVENT_MAC_TXMASK_TXLOCKFAIL_SHIFT       6
#define _EVENT_MAC_TXMASK_TXLOCKFAIL_MASK        0x40UL
#define _EVENT_MAC_TXMASK_TXLOCKFAIL_DEFAULT     0x00000000UL
#define EVENT_MAC_TXMASK_TXLOCKFAIL_DEFAULT      (_EVENT_MAC_TXMASK_TXLOCKFAIL_DEFAULT << 6)
#define EVENT_MAC_TXMASK_TXUNDERFLOW             (0x1UL << 5)
#define _EVENT_MAC_TXMASK_TXUNDERFLOW_SHIFT      5
#define _EVENT_MAC_TXMASK_TXUNDERFLOW_MASK       0x20UL
#define _EVENT_MAC_TXMASK_TXUNDERFLOW_DEFAULT    0x00000000UL
#define EVENT_MAC_TXMASK_TXUNDERFLOW_DEFAULT     (_EVENT_MAC_TXMASK_TXUNDERFLOW_DEFAULT << 5)
#define EVENT_MAC_TXMASK_CCAFAIL                 (0x1UL << 4)
#define _EVENT_MAC_TXMASK_CCAFAIL_SHIFT          4
#define _EVENT_MAC_TXMASK_CCAFAIL_MASK           0x10UL
#define _EVENT_MAC_TXMASK_CCAFAIL_DEFAULT        0x00000000UL
#define EVENT_MAC_TXMASK_CCAFAIL_DEFAULT         (_EVENT_MAC_TXMASK_CCAFAIL_DEFAULT << 4)
#define EVENT_MAC_TXMASK_SFDSENT                 (0x1UL << 3)
#define _EVENT_MAC_TXMASK_SFDSENT_SHIFT          3
#define _EVENT_MAC_TXMASK_SFDSENT_MASK           0x8UL
#define _EVENT_MAC_TXMASK_SFDSENT_DEFAULT        0x00000000UL
#define EVENT_MAC_TXMASK_SFDSENT_DEFAULT         (_EVENT_MAC_TXMASK_SFDSENT_DEFAULT << 3)
#define EVENT_MAC_TXMASK_BOCOMPLETE              (0x1UL << 2)
#define _EVENT_MAC_TXMASK_BOCOMPLETE_SHIFT       2
#define _EVENT_MAC_TXMASK_BOCOMPLETE_MASK        0x4UL
#define _EVENT_MAC_TXMASK_BOCOMPLETE_DEFAULT     0x00000000UL
#define EVENT_MAC_TXMASK_BOCOMPLETE_DEFAULT      (_EVENT_MAC_TXMASK_BOCOMPLETE_DEFAULT << 2)
#define EVENT_MAC_TXMASK_RXACK                   (0x1UL << 1)
#define _EVENT_MAC_TXMASK_RXACK_SHIFT            1
#define _EVENT_MAC_TXMASK_RXACK_MASK             0x2UL
#define _EVENT_MAC_TXMASK_RXACK_DEFAULT          0x00000000UL
#define EVENT_MAC_TXMASK_RXACK_DEFAULT           (_EVENT_MAC_TXMASK_RXACK_DEFAULT << 1)
#define EVENT_MAC_TXMASK_TXCOMPLETE              (0x1UL << 0)
#define _EVENT_MAC_TXMASK_TXCOMPLETE_SHIFT       0
#define _EVENT_MAC_TXMASK_TXCOMPLETE_MASK        0x1UL
#define _EVENT_MAC_TXMASK_TXCOMPLETE_DEFAULT     0x00000000UL
#define EVENT_MAC_TXMASK_TXCOMPLETE_DEFAULT      (_EVENT_MAC_TXMASK_TXCOMPLETE_DEFAULT << 0)

/* Bit fields for EVENT_MAC TIMERMASK */
#define _EVENT_MAC_TIMERMASK_RESETVALUE            0x00000000UL
#define _EVENT_MAC_TIMERMASK_MASK                  0x00000007UL
#define EVENT_MAC_TIMERMASK_TIMERCOMPB             (0x1UL << 2)
#define _EVENT_MAC_TIMERMASK_TIMERCOMPB_SHIFT      2
#define _EVENT_MAC_TIMERMASK_TIMERCOMPB_MASK       0x4UL
#define _EVENT_MAC_TIMERMASK_TIMERCOMPB_DEFAULT    0x00000000UL
#define EVENT_MAC_TIMERMASK_TIMERCOMPB_DEFAULT     (_EVENT_MAC_TIMERMASK_TIMERCOMPB_DEFAULT << 2)
#define EVENT_MAC_TIMERMASK_TIMERCOMPA             (0x1UL << 1)
#define _EVENT_MAC_TIMERMASK_TIMERCOMPA_SHIFT      1
#define _EVENT_MAC_TIMERMASK_TIMERCOMPA_MASK       0x2UL
#define _EVENT_MAC_TIMERMASK_TIMERCOMPA_DEFAULT    0x00000000UL
#define EVENT_MAC_TIMERMASK_TIMERCOMPA_DEFAULT     (_EVENT_MAC_TIMERMASK_TIMERCOMPA_DEFAULT << 1)
#define EVENT_MAC_TIMERMASK_TIMERWRAP              (0x1UL << 0)
#define _EVENT_MAC_TIMERMASK_TIMERWRAP_SHIFT       0
#define _EVENT_MAC_TIMERMASK_TIMERWRAP_MASK        0x1UL
#define _EVENT_MAC_TIMERMASK_TIMERWRAP_DEFAULT     0x00000000UL
#define EVENT_MAC_TIMERMASK_TIMERWRAP_DEFAULT      (_EVENT_MAC_TIMERMASK_TIMERWRAP_DEFAULT << 0)

/** @} End of group EM359X_EVENT_MAC_BitFields */

#endif // EM359X_EVENT_MAC_H
