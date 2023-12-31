/*
 * Copyright (C) Teleca AB, 2002-2007.
 * All rights reserved.
 *
 * This software is covered by the license agreement between
 * the end user and Teleca AB, and may be 
 * used and copied only in accordance with the terms of the 
 * said agreement.
 *
 * Teleca AB assumes no responsibility or 
 * liability for any errors or inaccuracies in this software, 
 * or any consequential, incidental or indirect damage arising
 * out of the use of the software.
 *
 */
/*
 * msf_neta.h
 *
 * Created by Ingmar Persson
 *
 * Revision  history:
 *   
 *
 */
#ifndef _msf_neta_h
#define _msf_neta_h

#ifndef _msf_int_h
#include "msf_int.h"
#endif

/****************************************
 * Network Account
 ****************************************/

/*
 * Error codes
 */
#define MSF_NETWORK_ACCOUNT_ERROR_BAD_ID            HDI_NETWORK_ACCOUNT_ERROR_BAD_ID
#define MSF_NETWORK_ACCOUNT_ERROR_NO_MORE_ID        HDI_NETWORK_ACCOUNT_ERROR_NO_MORE_ID
#define MSF_NETWORK_ACCOUNT_ERROR_BEARER_NOT_FOUND  HDI_NETWORK_ACCOUNT_ERROR_BEARER_NOT_FOUND

#ifndef Q03C_IND_MOD_ARCH_SUPPORT
/*
 * Functions
 */
#define MSF_NETWORK_ACCOUNT_GET_BEARER            gmms_HDIa_networkAccountGetBearer
#define MSF_NETWORK_ACCOUNT_GET_NAME              gmms_HDIa_networkAccountGetName
#define MSF_NETWORK_ACCOUNT_GET_FIRST             gmms_HDIa_networkAccountGetFirst
#define MSF_NETWORK_ACCOUNT_GET_NEXT              gmms_HDIa_networkAccountGetNext
#define MSF_NETWORK_ACCOUNT_GET_ID                gmms_HDIa_networkAccountGetId

#else
#define MSF_NETWORK_ACCOUNT_GET_BEARER            HDIa_networkAccountGetBearer
#define MSF_NETWORK_ACCOUNT_GET_NAME              HDIa_networkAccountGetName
#define MSF_NETWORK_ACCOUNT_GET_FIRST             HDIa_networkAccountGetFirst
#define MSF_NETWORK_ACCOUNT_GET_NEXT              HDIa_networkAccountGetNext
#define MSF_NETWORK_ACCOUNT_GET_ID                HDIa_networkAccountGetId
#endif /*Q03C_IND_MOD_ARCH_SUPPORT*/

#endif
