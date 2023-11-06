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

#ifndef VMTEL_SDK_H
#define VMTEL_SDK_H

#ifdef __cplusplus
extern "C" {
#endif

#include "vmsys.h"


typedef enum
{
	VM_CALLOUT_ERR_STATE = -7,	/* application is not foreground state */
	VM_CALLOUT_ERR_NO_SIM ,	 	/* No SIM */
	VM_CALLOUT_ERR_FLIGHT, 		/* flight mode */
	VM_CALLOUT_ERR_BUSY,		/* device busy */
	VM_CALLOUT_ERR_PHONE_NUM,	/* destination number error */
	VM_CALLOUT_ERR_PROCESS,		/* process error */
	VM_CALLOUT_ERR_NO_RES,		/* resource unavailable*/
	VM_CALLOUT_NO_ERR
}vm_callout_error_t;

typedef enum
{
	VM_CALLOUT_IDEL = 0,
	VM_CALLOUT_BUSY
}vm_callout_status_t;

/*****************************************************************************
* <GROUP  CallBackFunctions>        
*
 * FUNCTION
 *    VM_CALLOUT_RESPONSE_T
 * DESCRIPTION
 *  callback function of callout 
 * PARAMETERS
 *  VMWSTR :  [IN]  destination phone number string encoding with UCS2 format
 *  VMINT :  [IN] calling result. 
*****************************************************************************/
typedef void (*VM_CALLOUT_RESPONSE_T)(VMWSTR, VMINT);

/*****************************************************************************
* FUNCTION
 *    vm_callout
 * DESCRIPTION
 *  make call. 
 *  Application can use this funtion only during foreground running and END key
 *  will be handled by call application for hang up calling firstly.
 * PARAMETERS
 *  phnum : [IN]  destination phone number string encoding with UCS2 format.
*****************************************************************************/
void vm_callout(VMWSTR phnum);

/*****************************************************************************
* FUNCTION
 *    vm_callout
 * DESCRIPTION
 *  make call. 
 *  Application can use this funtion only during foreground running and END key
 *  will be handled by call application for hang up calling firstly.
 * PARAMETERS
 *  phnum : [IN]  destination phone number string encoding with UCS2 format.
 *  callback : [IN]  callback function
* RETURNS
 *  refer to vm_callout_error_t
*****************************************************************************/
VMINT vm_callout_ex(VMWSTR phnum, VM_CALLOUT_RESPONSE_T callback);

/*****************************************************************************
 * FUNCTION
 *  vm_dialer_launch
 * DESCRIPTION
 *  1. Launch a dialer
 * PARAMETERS
 *  phone_num : [IN]    phone num, can be NULL
 * RETURNS
 *  0:success
 *****************************************************************************/
VMINT vm_dialer_launch(VMWSTR phone_num);


/**
 *Open URL successfully
 */
#define VM_OPEN_WAP_URL_SUCCESS				(0)
/**
 * Parameter error
 */
#define VM_OPEN_WAP_URL_ERROR_PARAM			(-1)
/**
 * No WAP service
 */
#define VM_OPEN_WAP_URL_NO_SERVICE			(-2)
/**
 * Process not during foreground running
 */
#define VM_OPEN_WAP_URL_ERROR_STATUS		(-3)

/*****************************************************************************
* FUNCTION
 *    vm_open_wap_url
 * DESCRIPTION
 *  Lauch WAP brower and go to specified address. 
 * PARAMETERS
 *  url : [IN]  WAP address.
 * RETURNS
 *  result of Open browser URL
 * RETURN VALUES                                      
 *  VM_OPEN_WAP_URL_SUCCESS : Open URL successfully.
 *  VM_OPEN_WAP_URL_ERROR_PARAM : Parameter error.
 *  VM_OPEN_WAP_URL_NO_SERVICE : No WAP service.
 *  VM_OPEN_WAP_URL_ERROR_STATUS : Process not during foreground running.
 *
*****************************************************************************/
VMINT vm_open_wap_url(VMWSTR url);

typedef enum
{
    VM_IVR_FAIL = -1,//vm_ivr_call fail
    VM_IVR_CALLED_OUT, //already called out
    VM_IVR_INTERRUPT, //end by interrupt (incoming call)
    VM_IVR_CALL_END, //call end normally
}vm_ivr_status_enum;

typedef struct
{
    vm_ivr_status_enum status;
    void* user_data;
}ivr_callback_data;

typedef void (*vm_ivr_cb)(ivr_callback_data* data);

typedef struct
{
    VMWSTR   phone_num; //destination phone number
    VMINT   sim_card; //sim card: 1,2,3,4...
    vm_ivr_cb callback;
    void*     user_data;
}vm_ivr_call_data;

/*****************************************************************************
* FUNCTION
 *    vm_ivr_call
 * DESCRIPTION
 *   start call in background
 * PARAMETERS
 *  vm_ivr_call_data : [IN]  
 * RETURNS
 *  0 means success, others fail
*****************************************************************************/
VMINT vm_ivr_call(vm_ivr_call_data* data);

/*****************************************************************************
* FUNCTION
 *    vm_ivr_dial_number
 * DESCRIPTION
 *   dial number after vm_ivr_call invoked
 * PARAMETERS
 *  number : [IN]  number to dial. e.g. "3";
 * RETURNS
 *  0 means success, others fail
*****************************************************************************/
VMINT vm_ivr_dial_number(VMCHAR number);

/*****************************************************************************
* FUNCTION
 *    vm_ivr_end
 * DESCRIPTION
 *   end call start by vm_ivr_call
 * PARAMETERS
 *  
 * RETURNS
 *  0 means success, others fail
*****************************************************************************/
VMINT vm_ivr_end(void);


#ifdef __cplusplus
}
#endif

#endif /* VMTEL_SDK_H */
