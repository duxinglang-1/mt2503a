/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2006
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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   custom_demp.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file Demand Paging related definitions
 *
 * Author:
 * -------
 *   Timon Lu (mtk03814)     system auto generator v1.70 -> p1.71 -> p1.72 -> p1.74 -> p1.75 + sysGenUtility v0.42 -> p0.43 -> p0.44 -> p0.45 -> p0.49
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision$
 * $Modtime$
 * $Log$
 *
 * 01 30 2012 qmei.yang
 *  [SystemService][Auto-Gen][Sys Gen][scatGen][Internal Refinement] Refactory sysgen2.pl
 * sysgen2.pl v1.42
 * scatInfo.pm v0.01
 * sysgenUtility.pm v0.15
 * FileInfo.pm v0.04
 * custom_demp.h.template
 * custom_scatstruct.c.template
 * custom_scatstruct.h.template
 * custom_blconfig.c.template
 *
 * 01 30 2012 qmei.yang
 *  [SystemService][Auto-Gen][Sys Gen][scatGen][Internal Refinement] Refactory sysgen2.pl
 * sysgen2.pl v1.42
 * scatInfo.pm v0.01
 * sysgenUtility.pm v0.15
 * FileInfo.pm v0.04
 * custom_demp.h.template
 * custom_scatstruct.c.template
 * custom_scatstruct.h.template
 * custom_blconfig.c.template
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __CUSTOM_DEMP_H__
#define __CUSTOM_DEMP_H__

/*******************************************************************************
 * Define constants.
 *******************************************************************************/

/* DEMP bin type declaration */
typedef enum
{
    DEMP_MAIN, /* should be the first type */
#if defined(__MBA_ON_DEMAND__)  	

#endif /* __MBA_ON_DEMAND__ */  
    /* more resource bin could be added */ 

    DEMP_BIN_NUM
} demp_bin_type;

/* DEMP bin size declaration (MB) */
#define DEMP_MAIN_BIN_SIZE 0
#if defined(__MBA_ON_DEMAND__)

#define DEMP_TOTAL_BIN_SIZE   (DEMP_MAIN_BIN_SIZE)
#else /* __MBA_ON_DEMAND__ */
#define DEMP_TOTAL_BIN_SIZE DEMP_MAIN_BIN_SIZE
#endif /* __MBA_ON_DEMAND__ */

#define DEMP_BLOCK_PER_MB   64   /* 1MB / 16KB = 64 */

#endif /* __CUSTOM_DEMP_H__ */
