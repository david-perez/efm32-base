/**************************************************************************//**
* @file
* @brief CMSIS Cortex-M Peripheral Access Layer for Silicon Labs devices.
*
* This is a convenience header file for defining the part number on the
* build command line, instead of specifying the part specific header file.
* @verbatim
* Example: Add "-DCORTEXM3_EM3588" to your build options, to define part
*          Add "#include "em_device.h" to your source files
* @endverbatim
* @author Silicon Labs
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

#ifndef __EM_DEVICE_H
#define __EM_DEVICE_H

#if defined(CORTEXM3_EM3581)
  #include "em3581.h"

#elif defined(CORTEXM3_EM3582)
  #include "em3582.h"

#elif defined(CORTEXM3_EM3585)
  #include "em3585.h"

#elif defined(CORTEXM3_EM3586)
  #include "em3586.h"

#elif defined(CORTEXM3_EM3587)
  #include "em3587.h"

#elif defined(CORTEXM3_EM3588)
  #include "em3588.h"

#else
#error "em_device.h: PART NUMBER undefined"
#endif

#endif
