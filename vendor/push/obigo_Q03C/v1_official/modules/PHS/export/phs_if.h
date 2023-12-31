/*****************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2005
 *
 *  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 *  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 *  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
 *  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 *  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 *  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 *  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 *  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
 *  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
 *  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
 *  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
 *
 *  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
 *  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 *  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 *  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
 *  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
 *
 *  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
 *  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
 *  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
 *  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
 *  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
 *
 *****************************************************************************/
 

/*
 * Copyright (C) Teleca Mobile Technologies AB, 2002-2004.
 * All rights reserved.
 *
 * This software is covered by the license agreement between
 * the end user and Teleca Mobile Technologies AB, and may be 
 * used and copied only in accordance with the terms of the 
 * said agreement.
 *
 * Teleca Mobile Technologies AB assumes no responsibility or 
 * liability for any errors or inaccuracies in this software, 
 * or any consequential, incidental or indirect damage arising
 * out of the use of the software.
 *
 */

/*******************************************************************************
 *
 * Filename:
 * ---------
 * phs_if.h
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

#ifndef _phs_if_h
#define _phs_if_h

#ifndef _msf_cfg_h
#include "msf_cfg.h"
#endif

#ifndef _msf_def_h
#include "msf_def.h"
#endif

#ifndef _msf_dcvt_h
#include "msf_dcvt.h"
#endif


/**********************************************************************
 * Signals in the PUSH API:
 **********************************************************************/

/* Signals sent to the PHS Module */
#define PHS_SIG_OPEN_PUSH_CONNECTION             ((MSF_MODID_PHS << 8) + 0x01)
#define PHS_SIG_CLOSE_PUSH_CONNECTION            ((MSF_MODID_PHS << 8) + 0x02)

/* Signals sent from the PHS Module */
#define PHS_SIG_CONNECTION_OPENED                ((MSF_MODID_PHS << 8) + 0x03)
#define PHS_SIG_CONNECTION_CLOSED                ((MSF_MODID_PHS << 8) + 0x04)

#define PHS_SIG_SHOW_DIALOG						 ((MSF_MODID_PHS << 8) + 0x05)

/**********************************************************************
 * Error Codes:
 **********************************************************************/

#define PHS_ERR_OK                                   0x00
#define PHS_ERR_OK_ALREADY_OPENED_BY_OTHER_MODULE    0x01
#define PHS_ERR_FAILED_HANDLE_ALREADY_EXIST          0x02
#define PHS_ERR_FAILED_TOO_MANY_CONN                 0x03
#define PHS_ERR_FAILED_ALREADY_EXIST_WITH_OTHER_NWA  0x04
#define PHS_ERR_CONN_CLOSED_BY_STK                   0x05

 /**********************************************************************
 * Incoming Signals:
 **********************************************************************/

/* For the signal PSH_SIG_OPEN_PUSH_CONNECTION */
typedef struct {
  MSF_INT16  handle;
  MSF_UINT16 portNumber;
  MSF_INT16  connectionType;
  MSF_INT32  networkAccountId;
} phs_open_push_connection_t;

/* For the signal PSH_SIG_CLOSE_PUSH_CONNECTION */
typedef struct {
  MSF_INT16 handle;
} phs_close_push_connection_t;

/**********************************************************************
 * Outgoing Signals:
 **********************************************************************/

/* For the signal PHS_SIG_CONNECTION_OPENED */
typedef struct {
  MSF_INT16 handle;
  MSF_INT16 errorCode;
} phs_connection_opened_t;

/* For the signal PHS_SIG_CONNECTION_CLOSED */
typedef struct {
  MSF_INT16 handle;
  MSF_INT16 errorCode;
} phs_connection_closed_t;

/*
 * Called by any other module that wants to use the PHS module.
 */
void
PHSif_startInterface (void);


/**********************************************************************
 * Signal-sending API
 * These functions should be used by any other module that wants to
 * send a signal to the PSH module.
 **********************************************************************/

/*
 * Signals sent from client to PHS Module
 */
void
PHSif_openPushConnection (MSF_UINT8 modId, int handle,
                          MSF_UINT16 portNumber, int connectionType,
                          MSF_INT32 networkAccountId);

void
PHSif_closePushConnection (MSF_UINT8 modId, int handle);


/**********************************************************************
 * Conversion routines for all signal owned by this module.
 * None of these functions should be called directly by another module.
 **********************************************************************/

int
phs_cvt_open_push_connection (msf_dcvt_t *obj, phs_open_push_connection_t* p);

int
phs_cvt_close_push_connection (msf_dcvt_t *obj, phs_close_push_connection_t* p);

int
phs_cvt_connection_opened (msf_dcvt_t *obj, phs_connection_opened_t *p);

int
phs_cvt_connection_closed (msf_dcvt_t *obj, phs_connection_closed_t *p);

/*
 * Convert from memory buffer to signal structs.
 */
void*
phs_convert (MSF_UINT8 module, MSF_UINT16 signal, void* buffer);

/*
 * Released a signal structure to a signal.
 */
void
phs_destruct (MSF_UINT8 module, MSF_UINT16 signal, void* p);

#endif


