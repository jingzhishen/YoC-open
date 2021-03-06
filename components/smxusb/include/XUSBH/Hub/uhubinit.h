/*
* uhubinit.h                                                Version 2.40
*
* smxUSBH Hub Initialization.
*
* Copyright (c) 2004-2010 Micro Digital Inc.
* All rights reserved. www.smxrtos.com
*
* This software is confidential and proprietary to Micro Digital Inc.
* It has been furnished under a license and may be used, copied, or
* disclosed only in accordance with the terms of that license and with
* the inclusion of this header. No title to nor ownership of this
* software is hereby transferred.
*
* Author: Yingbo Hu
*
* Portable to any ANSI compliant C compiler.
*
*****************************************************************************/

#ifndef SU_HUB_INIT_H
#define SU_HUB_INIT_H

/*============================================================================
                          GLOBAL FUNCTION PROTOTYPES
============================================================================*/
#if defined(__cplusplus)
extern "C" {
#endif

#if SU_HUB
int  su_HubInit(void);
void su_HubRelease(void);
#endif

#if defined(__cplusplus)
}
#endif

#endif /* SU_HUB_INIT_H */

