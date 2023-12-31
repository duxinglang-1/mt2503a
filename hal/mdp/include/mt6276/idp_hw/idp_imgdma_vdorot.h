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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 10 12 2011 chrono.wu
 * removed!
 * .
 *
 * 09 02 2011 chrono.wu
 * removed!
 * .
 *
 * 08 05 2011 chrono.wu
 * removed!
 * .
 *
 * 04 18 2011 chrono.wu
 * removed!
 * .
 *
 * 03 22 2011 chrono.wu
 * removed!
 * .
 *
 * 02 10 2011 chrono.wu
 * removed!
 * .
 *
 * 12 06 2010 gellmann.chang
 * removed!
 * .
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __idp_imgdma_VDOROT_mt6276_h__
#define __idp_imgdma_VDOROT_mt6276_h__

#ifndef THIS_FILE_BELONGS_TO_IMAGE_DATA_PATH_MODULE_INTERNAL
#error "Hay~! Man~! You can not include this file directly~!"
#endif

#include <idp_define.h>

#if defined(DRV_IDP_MT6276E2_SERIES)

#include "idp_imgdma.h"
#include <idp_core.h>
#include "img_common_enum.h"
#include "idp_hw_common.h"
#include <mt6276/idp_mem.h>

/** \defgroup imgdma_VDOROT VDOROT
 * @{
 */
#ifndef MDP_C_MODEL
#define VDOROT_BASE                             (ROT_DMA0_base)
#define IMGDMA_VDOROT_IRQ_FLAG_REG              (VDOROT_BASE + 0x0000)
#define IMGDMA_VDOROT_IRQ_FLAG_CLR_REG          (VDOROT_BASE + 0x0008)
#define IMGDMA_VDOROT_CFG_REG                   (VDOROT_BASE + 0x0018)
#define IMGDMA_VDOROT_IN_SEL_REG                (VDOROT_BASE + 0x0020)
#define IMGDMA_VDOROT_STOP_REG                  (VDOROT_BASE + 0x0028)
#define IMGDMA_VDOROT_EN_REG                    (VDOROT_BASE + 0x0030)
#define IMGDMA_VDOROT_RESET_REG                 (VDOROT_BASE + 0x0038)
#define IMGDMA_VDOROT_LOCK_REG                  (VDOROT_BASE + 0x003C)
#define IMGDMA_VDOROT_QUEUE_RSTA_REG            (VDOROT_BASE + 0x0040)
#define IMGDMA_VDOROT_RD_BASE_REG               (VDOROT_BASE + 0x0048)
#define IMGDMA_VDOROT_RPT_ADVANCE_REG           (VDOROT_BASE + 0x0050)
#define IMGDMA_VDOROT_QUEUE_WSTA_REG            (VDOROT_BASE + 0x0058)
#define IMGDMA_VDOROT_WR_BASE_REG               (VDOROT_BASE + 0x0060)
#define IMGDMA_VDOROT_WPT_ADVANCE_REG           (VDOROT_BASE + 0x0068)
#define IMGDMA_VDOROT_QUEUE_DATA_REG            (VDOROT_BASE + 0x0070)
#define IMGDMA_VDOROT_QUEUE_BASE_REG            (VDOROT_BASE + 0x0078)
#define IMGDMA_VDOROT_EXEC_CNT_REG              (VDOROT_BASE + 0x0080)
#define IMGDMA_VDOROT_DROPPED_FRAME_CNT_REG     (VDOROT_BASE + 0x0088)
#define IMGDMA_VDOROT_LCD_REG                   (VDOROT_BASE + 0x0200)
#define IMGDMA_VDOROT_LCD_STA_REG               (VDOROT_BASE + 0x0208)
#define IMGDMA_VDOROT_LCD_RPT_ADVANCE_REG       (VDOROT_BASE + 0x0210)

#define IMGDMA_VDOROT_SLOW_DOWN_REG             (VDOROT_BASE + 0x0300)
#define IMGDMA_VDOROT_BUF_ADDR0_REG             (VDOROT_BASE + 0x0308)
#define IMGDMA_VDOROT_BUF_ADDR1_REG             (VDOROT_BASE + 0x0310)
#define IMGDMA_VDOROT_BUF_ADDR2_REG             (VDOROT_BASE + 0x0380)
#define IMGDMA_VDOROT_BUF_ADDR3_REG             (VDOROT_BASE + 0x0388)
#define IMGDMA_VDOROT_LCD_STR_ADDR              (VDOROT_BASE + 0x0314)
#define IMGDMA_VDOROT_Y_DST_STR_ADDR_REG        (VDOROT_BASE + 0x0318)
#define IMGDMA_VDOROT_U_DST_STR_ADDR_REG        (VDOROT_BASE + 0x0320)
#define IMGDMA_VDOROT_V_DST_STR_ADDR_REG        (VDOROT_BASE + 0x0328)
#define IMGDMA_VDOROT_SRC_SIZE_REG              (VDOROT_BASE + 0x0330)
#define IMGDMA_VDOROT_CLIP_SIZE_REG             (VDOROT_BASE + 0x0338)
#define IMGDMA_VDOROT_CLIP_OFFSET_REG           (VDOROT_BASE + 0x0340)
#define IMGDMA_VDOROT_DST_SIZE_REG              (VDOROT_BASE + 0x0348)
#define IMGDMA_VDOROT_CLIP_W_IN_BYTE_REG        (VDOROT_BASE + 0x0350)
#define IMGDMA_VDOROT_CLIP_H_IN_BYTE_REG        (VDOROT_BASE + 0x0358)
#define IMGDMA_VDOROT_CON_REG                   (VDOROT_BASE + 0x0368)
#define IMGDMA_VDOROT_PERF_REG                  (VDOROT_BASE + 0x036C)
#define IMGDMA_VDOROT_MAIN_BUFF_SIZE_REG        (VDOROT_BASE + 0x0370)
#define IMGDMA_VDOROT_SUB_BUFF_SIZE_REG         (VDOROT_BASE + 0x0374)
#define IMGDMA_VDOROT_DITHER_REG                (VDOROT_BASE + 0x0378)


#define REG_IMGDMA_VDOROT_IRQ_FLAG                *((volatile unsigned int*)IMGDMA_VDOROT_IRQ_FLAG_REG)
#define REG_IMGDMA_VDOROT_IRQ_FLAG_CLR            *((volatile unsigned int*)IMGDMA_VDOROT_IRQ_FLAG_CLR_REG)
#define REG_IMGDMA_VDOROT_CFG                     *((volatile unsigned int*)IMGDMA_VDOROT_CFG_REG)
#define REG_IMGDMA_VDOROT_IN_SEL                  *((volatile unsigned int*)IMGDMA_VDOROT_IN_SEL_REG)
#define REG_IMGDMA_VDOROT_STOP                    *((volatile unsigned int*)IMGDMA_VDOROT_STOP_REG)
#define REG_IMGDMA_VDOROT_EN                      *((volatile unsigned int*)IMGDMA_VDOROT_EN_REG)
#define REG_IMGDMA_VDOROT_RESET                   *((volatile unsigned int*)IMGDMA_VDOROT_RESET_REG)
#define REG_IMGDMA_VDOROT_LOCK                    *((volatile unsigned int*)IMGDMA_VDOROT_LOCK_REG)
#define REG_IMGDMA_VDOROT_QUEUE_RSTA              *((volatile unsigned int*)IMGDMA_VDOROT_QUEUE_RSTA_REG)
#define REG_IMGDMA_VDOROT_RD_BASE                 *((volatile unsigned int*)IMGDMA_VDOROT_RD_BASE_REG)
#define REG_IMGDMA_VDOROT_RPT_ADVANCE             *((volatile unsigned int*)IMGDMA_VDOROT_RPT_ADVANCE_REG)
#define REG_IMGDMA_VDOROT_QUEUE_WSTA              *((volatile unsigned int*)IMGDMA_VDOROT_QUEUE_WSTA_REG)
#define REG_IMGDMA_VDOROT_WR_BASE                 *((volatile unsigned int*)IMGDMA_VDOROT_WR_BASE_REG)
#define REG_IMGDMA_VDOROT_WPT_ADVANCE             *((volatile unsigned int*)IMGDMA_VDOROT_WPT_ADVANCE_REG)
#define REG_IMGDMA_VDOROT_QUEUE_DATA              *((volatile unsigned int*)IMGDMA_VDOROT_QUEUE_DATA_REG)
#define REG_IMGDMA_VDOROT_QUEUE_BASE              *((volatile unsigned int*)IMGDMA_VDOROT_QUEUE_BASE_REG)
#define REG_IMGDMA_VDOROT_EXEC_CNT                *((volatile unsigned int*)IMGDMA_VDOROT_EXEC_CNT_REG)
#define REG_IMGDMA_VDOROT_DROPPED_FRAME_CNT       *((volatile unsigned int*)IMGDMA_VDOROT_DROPPED_FRAME_CNT_REG)
#define REG_IMGDMA_VDOROT_LCD                     *((volatile unsigned int*)IMGDMA_VDOROT_LCD_REG)
#define REG_IMGDMA_VDOROT_LCD_STA                 *((volatile unsigned int*)IMGDMA_VDOROT_LCD_STA_REG)
#define REG_IMGDMA_VDOROT_LCD_RPT_ADVANCE         *((volatile unsigned int*)IMGDMA_VDOROT_LCD_RPT_ADVANCE_REG)
#define REG_IMGDMA_VDOROT_SLOW_DOWN               *((volatile unsigned int*)IMGDMA_VDOROT_SLOW_DOWN_REG)
#define REG_IMGDMA_VDOROT_BUF_ADDR0               *((volatile unsigned int*)IMGDMA_VDOROT_BUF_ADDR0_REG)
#define REG_IMGDMA_VDOROT_BUF_ADDR1               *((volatile unsigned int*)IMGDMA_VDOROT_BUF_ADDR1_REG)
#define REG_IMGDMA_VDOROT_BUF_ADDR2               *((volatile unsigned int*)IMGDMA_VDOROT_BUF_ADDR2_REG)
#define REG_IMGDMA_VDOROT_BUF_ADDR3               *((volatile unsigned int*)IMGDMA_VDOROT_BUF_ADDR3_REG)
#define REG_IMGDMA_VDOROT_LCD_STR_ADDR            *((volatile unsigned int*)IMGDMA_VDOROT_LCD_STR_ADDR)
#define REG_IMGDMA_VDOROT_Y_DST_STR_ADDR          *((volatile unsigned int*)IMGDMA_VDOROT_Y_DST_STR_ADDR_REG)
#define REG_IMGDMA_VDOROT_U_DST_STR_ADDR          *((volatile unsigned int*)IMGDMA_VDOROT_U_DST_STR_ADDR_REG)
#define REG_IMGDMA_VDOROT_V_DST_STR_ADDR          *((volatile unsigned int*)IMGDMA_VDOROT_V_DST_STR_ADDR_REG)
#define REG_IMGDMA_VDOROT_SRC_SIZE                *((volatile unsigned int*)IMGDMA_VDOROT_SRC_SIZE_REG)
#define REG_IMGDMA_VDOROT_CLIP_SIZE               *((volatile unsigned int*)IMGDMA_VDOROT_CLIP_SIZE_REG)
#define REG_IMGDMA_VDOROT_CLIP_OFFSET             *((volatile unsigned int*)IMGDMA_VDOROT_CLIP_OFFSET_REG)
#define REG_IMGDMA_VDOROT_DST_SIZE                *((volatile unsigned int*)IMGDMA_VDOROT_DST_SIZE_REG)
#define REG_IMGDMA_VDOROT_CLIP_W_IN_BYTE          *((volatile unsigned int*)IMGDMA_VDOROT_CLIP_W_IN_BYTE_REG)
#define REG_IMGDMA_VDOROT_CLIP_H_IN_BYTE          *((volatile unsigned int*)IMGDMA_VDOROT_CLIP_H_IN_BYTE_REG)
#define REG_IMGDMA_VDOROT_CON                     *((volatile unsigned int*)IMGDMA_VDOROT_CON_REG)

#define REG_IMGDMA_VDOROT_PERF                    *((volatile unsigned int*)IMGDMA_VDOROT_PERF_REG)
#define REG_IMGDMA_VDOROT_MAIN_BUFF_SIZE          *((volatile unsigned int*)IMGDMA_VDOROT_MAIN_BUFF_SIZE_REG)
#define REG_IMGDMA_VDOROT_SUB_BUFF_SIZE           *((volatile unsigned int*)IMGDMA_VDOROT_SUB_BUFF_SIZE_REG)
#define REG_IMGDMA_VDOROT_DITHER                  *((volatile unsigned int*)IMGDMA_VDOROT_DITHER_REG)

#else
#define REG_IMGDMA_VDOROT_IRQ_FLAG                (VDO_ROT_IRQ_FLAG)
#define REG_IMGDMA_VDOROT_IRQ_FLAG_CLR            ()
#define REG_IMGDMA_VDOROT_CFG                     (VDO_ROT_CFG)
#define REG_IMGDMA_VDOROT_IN_SEL                  (VDO_ROT_IN_SEL)
#define REG_IMGDMA_VDOROT_STOP                    (VDO_ROT_STOP)
#define REG_IMGDMA_VDOROT_EN                      (VDO_ROT_EN)
#define REG_IMGDMA_VDOROT_RESET                   (VDO_ROT_RESET)
#define REG_IMGDMA_VDOROT_LOCK                    ()
#define REG_IMGDMA_VDOROT_QUEUE_RSTA              (VDO_ROT_QUEUE_RSTA)
#define REG_IMGDMA_VDOROT_RD_BASE                 (VDO_ROT_RD_BASE)
#define REG_IMGDMA_VDOROT_RPT_ADVANCE             (VDO_ROT_RPT_ADVANCE)
#define REG_IMGDMA_VDOROT_QUEUE_WSTA              (VDO_ROT_QUEUE_WSTA)
#define REG_IMGDMA_VDOROT_WR_BASE                 (VDO_ROT_WR_BASE)
#define REG_IMGDMA_VDOROT_WPT_ADVANCE             (VDO_ROT_WPT_ADVANCE)
#define REG_IMGDMA_VDOROT_DES_AVAILABLE_SPACE     ()
#define REG_IMGDMA_VDOROT_QUEUE_DATA              (VDO_ROT_QUEUE_DATA)
#define REG_IMGDMA_VDOROT_QUEUE_BASE              (VDO_ROT_QUEUE_BASE)
#define REG_IMGDMA_VDOROT_EXEC_CNT                (VDO_ROT_EXEC_CNT)
#define REG_IMGDMA_VDOROT_DROPPED_FRAME_CNT       (VDO_ROT_DROPPED_FRAME_CNT)
#define REG_IMGDMA_VDOROT_LCD                     (VDO_ROT_LCD)
#define REG_IMGDMA_VDOROT_LCD_STA                 (VDO_ROT_LCD_STA)
#define REG_IMGDMA_VDOROT_LCD_RPT_ADVANCE         (VDO_ROT_LCD_RPT_ADVANCE)
#define REG_IMGDMA_VDOROT_LCD_RPT_BASE            (VDO_ROT_LCD_RD_BASE)
#define REG_IMGDMA_VDOROT_SLOW_DOWN               (VDO_ROT_SLOW_DOWN)
#define REG_IMGDMA_VDOROT_BUF_ADDR0               (VDO_ROT_BUF_BASE_ADDR0)
#define REG_IMGDMA_VDOROT_BUF_ADDR1               (VDO_ROT_BUF_BASE_ADDR1)
#define REG_IMGDMA_VDOROT_BUF_ADDR2               (VDO_ROT_BUF_BASE_ADDR2)
#define REG_IMGDMA_VDOROT_BUF_ADDR3               (VDO_ROT_BUF_BASE_ADDR3)
#define REG_IMGDMA_VDOROT_LCD_STR_ADDR            (VDO_ROT_LCD_STR_ADDR)
#define REG_IMGDMA_VDOROT_Y_DST_STR_ADDR          (VDO_ROT_Y_DST_STR_ADDR)
#define REG_IMGDMA_VDOROT_U_DST_STR_ADDR          (VDO_ROT_U_DST_STR_ADDR)
#define REG_IMGDMA_VDOROT_V_DST_STR_ADDR          (VDO_ROT_V_DST_STR_ADDR)
#define REG_IMGDMA_VDOROT_SRC_SIZE                (VDO_ROT_SRC_SIZE)
#define REG_IMGDMA_VDOROT_CLIP_SIZE               (VDO_ROT_CLIP_SIZE)
#define REG_IMGDMA_VDOROT_CLIP_OFFSET             (VDO_ROT_CLIP_OFFSET)
#define REG_IMGDMA_VDOROT_DST_SIZE                (VDO_ROT_DST_SIZE)
#define REG_IMGDMA_VDOROT_CLIP_W_IN_BYTE          (VDO_ROT_CLIP_W_IN_BYTE)
#define REG_IMGDMA_VDOROT_CLIP_H_IN_BYTE          (VDO_ROT_CLIP_H_IN_BYTE)
#define REG_IMGDMA_VDOROT_CON                     (VDO_ROT_CON)
#define REG_IMGDMA_VDOROT_DITHER                  (VDO_ROT_DITHER)
#define REG_IMGDMA_VDOROT_PERF                    (VDO_ROT_PERF)
#define REG_IMGDMA_VDOROT_MAIN_BUFF_SIZE          (VDO_ROT_MAIN_BUF_SIZE)
#define REG_IMGDMA_VDOROT_SUB_BUFF_SIZE           (VDO_ROT_SUB_BUF_SIZE)

#endif // MDP_C_MODEL


/* bit maps */
#define IMGDMA_VDOROT_IRQ_FLAG_0_BIT                  0x00000001
#define IMGDMA_VDOROT_IRQ_FLAG_1_BIT                  0x00000002
#define IMGDMA_VDOROT_IRQ_FLAG_4_BIT                  0x00000010
#define IMGDMA_VDOROT_IRQ_FLAG_5_BIT                  0x00000020
#define IMGDMA_VDOROT_IRQ_FLAG_0_EN_BIT               0x00010000
#define IMGDMA_VDOROT_IRQ_FLAG_1_EN_BIT               0x00020000
#define IMGDMA_VDOROT_IRQ_FLAG_4_EN_BIT               0x00100000
#define IMGDMA_VDOROT_IRQ_FLAG_5_EN_BIT               0x00200000

#define IMGDMA_VDOROT_CFG_AUTO_LOOP_EN_BIT            0x00000001
#define IMGDMA_VDOROT_CFG_DOUBLE_BUF_EN_BIT           0x00000010
#define IMGDMA_VDOROT_CFG_DES_MODE_BIT                0x00000080
#define IMGDMA_VDOROT_CFG_DES_QUEUE_DEPTH_MASK        0x00000F00
#define IMGDMA_VDOROT_CFG_DES_Q_EMPTY_DROP_EN_BIT     0x00008000

#define IMGDMA_VDOROT_CFG_DES_SECTION_0_EN_BIT        0x00010000
#define IMGDMA_VDOROT_CFG_DES_SECTION_1_EN_BIT        0x00020000
#define IMGDMA_VDOROT_CFG_DES_SECTION_2_EN_BIT        0x00040000
#define IMGDMA_VDOROT_CFG_DES_SECTION_3_EN_BIT        0x00080000
#define IMGDMA_VDOROT_CFG_DES_SECTION_4_EN_BIT        0x00100000
#define IMGDMA_VDOROT_CFG_DES_SECTION_5_EN_BIT        0x00200000
#define IMGDMA_VDOROT_CFG_DES_SECTION_6_EN_BIT        0x00400000
#define IMGDMA_VDOROT_CFG_DES_SECTION_7_EN_BIT        0x00800000
#define IMGDMA_VDOROT_CFG_DES_SECTION_8_EN_BIT        0x01000000
#define IMGDMA_VDOROT_CFG_DES_SECTION_9_EN_BIT        0x02000000
#define IMGDMA_VDOROT_CFG_DES_SECTION_10_EN_BIT       0x04000000
#define IMGDMA_VDOROT_CFG_DES_SECTION_11_EN_BIT       0x08000000
#define IMGDMA_VDOROT_CFG_DES_SECTION_12_EN_BIT       0x10000000
#define IMGDMA_VDOROT_CFG_DES_SECTION_13_EN_BIT       0x20000000
#define IMGDMA_VDOROT_CFG_FRAME_SYNC_EN_BIT           0x80000000

#define IMGDMA_VDOROT_STOP_STOP_BIT                   0x00000001

#define IMGDMA_VDOROT_ENABLE_EN_BIT                   0x00000001

#define IMGDMA_VDOROT_RESET_HARD_RST_BIT              0x00000001
#define IMGDMA_VDOROT_RESET_WARM_RST_BIT              0x00000002

#define IMGDMA_VDOROT_INSEL_DROP_BIT                  0x0001

#define IMGDMA_VDOROT_LOCK_LOCK_BIT                   0x00000001

#define IMGDMA_VDOROT_CON_OUTPUT_FORMAT_MASK          0x00000007 // 0x7
#define IMGDMA_VDOROT_CON_COLORSWAP_BIT               0x00000008
#define IMGDMA_VDOROT_CON_ROUND_BIT                   0x00000010
#define IMGDMA_VDOROT_CON_RESAMPLE_BIT                0x00000020
#define IMGDMA_VDOROT_CON_BYTESWAP_BIT                0x00000040
#define IMGDMA_VDOROT_CON_YUVSWAP_BIT                 0x00000080

#define IMGDMA_VDOROT_CON_A_VALUE_MASK                0x0000FF00
#define IMGDMA_VDOROT_CON_YH_MASK                     0x000C0000
#define IMGDMA_VDOROT_CON_UVH_MASK                    0x00300000
#define IMGDMA_VDOROT_CON_YV_MASK                     0x00C00000
#define IMGDMA_VDOROT_CON_UVV_MASK                    0x03000000
#define IMGDMA_VDOROT_CON_ROT_ANGLE_MASK              0x18000000
#define IMGDMA_VDOROT_CON_FLIP_EN_BIT                 0x20000000
#define IMGDMA_VDOROT_CON_NOP_BIT                     0x40000000
#define IMGDMA_VDOROT_CON_INT_EN_BIT                  0x80000000


#define IMGDMA_VDOROT_LCD_HWTRIG_EN_BIT               0x00000001
#define IMGDMA_VDOROT_LCD_HWTRIG_FRAME_SYNC_EN_BIT    0x00000002
#define IMGDMA_VDOROT_LCD_HWTRIG_Q_FULL_DROP_BIT      0x00000004
#define IMGDMA_VDOROT_LCD_HWTRIG_TRIG_ALL_BIT         0x00000010
#define IMGDMA_VDOROT_LCD_WARM_RESET_WAIT_LCD_BIT     0x80000000

#define IMGDMA_VDOROT_PERF_THRESHOLD_MASK             0x0000000F
#define IMGDMA_VDOROT_PERF_OUTPUT_SIZE_IN_BYTE_MASK   0x0000FF00
#define IMGDMA_VDOROT_PERF_MAIN_LB_SIZE_IN_LINE_MASK  0x007F0000
#define IMGDMA_VDOROT_PERF_FIFO_MODE_EN_BIT           0x01000000
#define IMGDMA_VDOROT_PERF_ULTRA_HIGH_EN_BIT          0x40000000
#define IMGDMA_VDOROT_PERF_PROTECT_EN_BIT             0x80000000

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/* Macros of ROT_DMA */
/**
 * \brief Check if IRT0 is started or not.
 */
/// Is enabled
#define IMGDMA_VDOROT_IS_ENABLED() \
    ((IMGDMA_VDOROT_ENABLE_EN_BIT == (REG_IMGDMA_VDOROT_EN & IMGDMA_VDOROT_ENABLE_EN_BIT)) ? KAL_TRUE : KAL_FALSE)

// Start VDOROT
#define IMGDMA_VDOROT_START() \
    do { REG_IMGDMA_VDOROT_EN = IMGDMA_VDOROT_ENABLE_EN_BIT; } while(0)

// Stop VDOROT, stop at frame end
#define IMGDMA_VDOROT_STOP() \
    do { REG_IMGDMA_VDOROT_STOP = IMGDMA_VDOROT_STOP_STOP_BIT; } while(0)

// Warm reset VDOROT, reset at GMC transaction end
#define IMGDMA_VDOROT_WARM_RESET() \
    do { REG_IMGDMA_VDOROT_RESET = IMGDMA_VDOROT_RESET_WARM_RST_BIT; } while(0)
            //REG_IMGDMA_VDOROT_RMMU_RESET = IMGDMA_VDOROT_RMMU_RESET_WARN_RST_BIT; \
            //REG_IMGDMA_VDOROT_RMMU_RESET = 0;} while(0)
/*
// Hard reset VDOROT, reset immediately, pending GMC transaction may cause state machine incorrect
#define IMGDMA_VDOROT_HARD_RESET() \
    do { REG_IMGDMA_VDOROT_RESET = IMGDMA_VDOROT_RESET_HARD_RST_BIT; \
         REG_IMGDMA_VDOROT_RESET = 0x0; } while(0)
         //REG_IMGDMA_VDOROT_RMMU_RESET = IMGDMA_VDOROT_RMMU_RESET_HARD_RST_BIT; \
         //REG_IMGDMA_VDOROT_RMMU_RESET = 0x0;} while(0)
*/
#define IMGDMA_VDOROT_INTERRUPT_ENABLE() \
    do { REG_IMGDMA_VDOROT_CON |= IMGDMA_VDOROT_CON_INT_EN_BIT; } while(0)

#define IMGDMA_VDOROT_INTERRUPT_DISABLE() \
    do { REG_IMGDMA_VDOROT_CON &= ~IMGDMA_VDOROT_CON_INT_EN_BIT; } while(0)

#define IMGDMA_VDOROT_AUTO_LOOP_ENABLE() \
    do { REG_IMGDMA_VDOROT_CFG |= IMGDMA_VDOROT_CFG_AUTO_LOOP_EN_BIT; } while(0)

#define IMGDMA_VDOROT_AUTO_LOOP_DISABLE() \
    do { REG_IMGDMA_VDOROT_CFG &= ~IMGDMA_VDOROT_CFG_AUTO_LOOP_EN_BIT; } while(0)

// Descriptor mode
#define IMGDMA_VDOROT_DESCRIPTOR_MODE() \
    do { REG_IMGDMA_VDOROT_CFG |= IMGDMA_VDOROT_CFG_DES_MODE_BIT; } while(0)

// Register mode
#define IMGDMA_VDOROT_REGISTER_MODE() \
    do { REG_IMGDMA_VDOROT_CFG &= ~IMGDMA_VDOROT_CFG_DES_MODE_BIT; } while(0)

// Enable frame sync
#define IMGDMA_VDOROT_FRAME_SYNC_ENABLE() \
    do { REG_IMGDMA_VDOROT_CFG |= IMGDMA_VDOROT_CFG_FRAME_SYNC_EN_BIT; } while(0)

// Disable frame sync
#define IMGDMA_VDOROT_FRAME_SYNC_DISABLE() \
    do { REG_IMGDMA_VDOROT_CFG &= ~IMGDMA_VDOROT_CFG_FRAME_SYNC_EN_BIT; } while(0)

// Enable hardware trigger R_DMA0
#define IMGDMA_VDOROT_HW_TRIGGER_RDMA_ENABLE() \
    do { REG_IMGDMA_VDOROT_LCD |= IMGDMA_VDOROT_LCD_HWTRIG_EN_BIT; } while(0)

// Disable hardware trigger R_DMA0
#define IMGDMA_VDOROT_HW_TRIGGER_RDMA_DISABLE() \
    do { REG_IMGDMA_VDOROT_LCD &= ~IMGDMA_VDOROT_LCD_HWTRIG_EN_BIT; } while(0)


#define IMGDMA_VDOROT_HW_TRIGGER_FRAME_SYNC_ENABLE() \
    do { REG_IMGDMA_VDOROT_LCD |= IMGDMA_VDOROT_LCD_HWTRIG_FRAME_SYNC_EN_BIT; } while(0)


#define IMGDMA_VDOROT_HW_TRIGGER_FULL_DROP_ENABLE() \
    do { REG_IMGDMA_VDOROT_LCD |= IMGDMA_VDOROT_LCD_HWTRIG_Q_FULL_DROP_BIT; } while(0)


#define IMGDMA_VDOROT_HW_TRIGGER_UNFINISHED_TRIGG_ALL_ENABLE() \
    do { REG_IMGDMA_VDOROT_LCD |= IMGDMA_VDOROT_LCD_HWTRIG_TRIG_ALL_BIT; } while(0)



#define IMGDMA_VDOROT_CFG_QUEUEDEPTH_MASK 0x00000f00

#define IMGDMA_VDOROT_SET_QUEUE_DEPTH(depth) \
    do { REG_IMGDMA_VDOROT_CFG = \
        ((REG_IMGDMA_VDOROT_CFG & ~IMGDMA_VDOROT_CFG_QUEUEDEPTH_MASK) | \
         (IMGDMA_VDOROT_CFG_QUEUEDEPTH_MASK & ((depth) << 8))); } while(0)

#define IMGDMA_VDOROT_QUEUE_EMPTY_DROP() \
    do { REG_IMGDMA_VDOROT_CFG |= IMGDMA_VDOROT_CFG_DES_Q_EMPTY_DROP_EN_BIT; } while(0)

#define IMGDMA_VDOROT_QUEUE_EMPTY_STALL() \
    do { REG_IMGDMA_VDOROT_CFG &= ~IMGDMA_VDOROT_CFG_DES_Q_EMPTY_DROP_EN_BIT; } while(0)

#define IMGDMA_VDOROT_LCD_HWTRIG_BIT                0x00000001
#define IMGDMA_VDOROT_LCD_HWSYNC_BIT                0x00000002
#define IMGDMA_VDOROT_LCD_HWSYNCFULL_STALL          0x00000000 /**< When LCD not done, VDOROT is stalled... */
#define IMGDMA_VDOROT_LCD_HWSYNCFULL_DROP           0x00000004 /**< When LCD not done, VDOROT not redraw but drop incoming frame. */
#define IMGDMA_VDOROT_LCD_HWTRIG_ALL                0x00000010
#define IMGDMA_VDOROT_LCD_WARM_RST_WAIT_LCD         0x00008000

/**
 *  WDMA HW trigger LCD options!
 *  WARNING: choose only one from below five!
 */

// No HW trigger LCD
#define IMGDMA_VDOROT_HW_TRIGGER_LCD_DISABLE() \
    do { REG_IMGDMA_VDOROT_LCD = 0x0; } while(0)

// Enable HW trigger LCD but no sync
#define IMGDMA_VDOROT_HW_TRIGGER_LCD_BUT_NO_SYNC() \
    do { REG_IMGDMA_VDOROT_LCD = IMGDMA_VDOROT_LCD_HWTRIG_BIT; } while(0)

// Enable HW trigger LCD and sync w/ LCD, if LCD busy, stall WDMA1
#define IMGDMA_VDOROT_HW_TRIGGER_LCD_SYNC_N_STALL() \
    do { REG_IMGDMA_VDOROT_LCD = \
        ((IMGDMA_VDOROT_LCD_HWTRIG_BIT | IMGDMA_VDOROT_LCD_HWSYNC_BIT) | IMGDMA_VDOROT_LCD_HWSYNCFULL_STALL); } while(0)

// Enable HW trigger LCD and sync w/ LCD, if LCD busy, WDMA1 drops incoming data (frame or pixels?) <== Recommanded when using HW trigger mode...
#define IMGDMA_VDOROT_HW_TRIGGER_LCD_SYNC_N_DROP() \
    do { REG_IMGDMA_VDOROT_LCD = \
        ((IMGDMA_VDOROT_LCD_HWTRIG_BIT | IMGDMA_VDOROT_LCD_HWSYNC_BIT) | IMGDMA_VDOROT_LCD_HWSYNCFULL_DROP); } while(0)
 /**/

// WARNING: only use w/o enable WDMA engine
#define IMGDMA_VDOROT_STALL_PREV_ENGINE() \
    do { REG_IMGDMA_VDOROT_IN_SEL = 0x0; } while(0)

// WARNING: only use w/o enable WDMA engine
#define IMGDMA_VDOROT_DROP_PREV_ENGINE() \
    do { REG_IMGDMA_VDOROT_IN_SEL = 0x1; } while(0)


#define IMGDMA_VDOROT_CON_OUTPUT_FORMAT_ARGB8888    0x00000000
#define IMGDMA_VDOROT_CON_OUTPUT_FORMAT_RGB888      0x00000001
#define IMGDMA_VDOROT_CON_OUTPUT_FORMAT_RGB565      0x00000002
#define IMGDMA_VDOROT_CON_OUTPUT_FORMAT_YUYV422     0x00000003
#define IMGDMA_VDOROT_CON_OUTPUT_FORMAT_PLANAR_YUV  0x00000007

/** Holmes added */
#define IMGDMA_VDOROT_SEG0_EN            0x00010000
#define IMGDMA_VDOROT_SEG1_EN            0x00020000
#define IMGDMA_VDOROT_SEG2_EN            0x00040000
#define IMGDMA_VDOROT_SEG3_EN            0x00080000
#define IMGDMA_VDOROT_SEG4_EN            0x00100000
#define IMGDMA_VDOROT_SEG5_EN            0x00200000
#define IMGDMA_VDOROT_SEG6_EN            0x00400000
#define IMGDMA_VDOROT_SEG7_EN            0x00800000
#define IMGDMA_VDOROT_SEG8_EN            0x01000000
#define IMGDMA_VDOROT_SEG9_EN            0x02000000
#define IMGDMA_VDOROT_SEG10_EN           0x04000000
#define IMGDMA_VDOROT_SEG11_EN           0x08000000
#define IMGDMA_VDOROT_SEG12_EN           0x10000000
#define IMGDMA_VDOROT_SEG13_EN           0x20000000


#define IMGDMA_VDOROT_SET_OUTPUT_FORMAT(format) \
    do { REG_IMGDMA_VDOROT_CON = \
        ((REG_IMGDMA_VDOROT_CON & (~IMGDMA_VDOROT_CON_OUTPUT_FORMAT_MASK)) | (format)); } while(0)

#define IMGDMA_VDOROT_RGB_ROUND_ENABLE() \
    do { REG_IMGDMA_VDOROT_CON |= IMGDMA_VDOROT_CON_ROUND_BIT; } while(0)

#define IMGDMA_VDOROT_RGB_ROUND_DISABLE() \
    do { REG_IMGDMA_VDOROT_CON &= ~IMGDMA_VDOROT_CON_ROUND_BIT; } while(0)

#define IMGDMA_VDOROT_BYTE_SWAP_ENABLE() \
    do { REG_IMGDMA_VDOROT_CON |= IMGDMA_VDOROT_CON_BYTESWAP_BIT; } while(0)

#define IMGDMA_VDOROT_BYTE_SWAP_DISABLE() \
    do { REG_IMGDMA_VDOROT_CON &= ~IMGDMA_VDOROT_CON_BYTESWAP_BIT; } while(0)

#define IMGDMA_VDOROT_COLOR_SWAP_ENABLE() \
    do { REG_IMGDMA_VDOROT_CON |= IMGDMA_VDOROT_CON_COLORSWAP_BIT; } while(0)

#define IMGDMA_VDOROT_COLOR_SWAP_DISABLE() \
    do { REG_IMGDMA_VDOROT_CON &= ~IMGDMA_VDOROT_CON_COLORSWAP_BIT; } while(0)

#define IMGDMA_VDOROT_YUV_SWAP_ENABLE() \
    do { REG_IMGDMA_VDOROT_CON |= IMGDMA_VDOROT_CON_YUVSWAP_BIT; } while(0)

#define IMGDMA_VDOROT_YUV_SWAP_DISABLE() \
    do { REG_IMGDMA_VDOROT_CON &= ~IMGDMA_VDOROT_CON_YUVSWAP_BIT; } while(0)

// MT6573 this setting is scanline planar YUV, unlike other project, only support block-based planar YUV

#define IMGDMA_VDOROT_SET_OUTPUT_YUV444() \
    do { REG_IMGDMA_VDOROT_CON = \
        ((REG_IMGDMA_VDOROT_CON & (~0x03fc0007)) | 0x01540007); } while(0)

#define IMGDMA_VDOROT_SET_OUTPUT_YUV422() \
    do { REG_IMGDMA_VDOROT_CON = \
        ((REG_IMGDMA_VDOROT_CON & (~0x03fc0007)) | 0x01640007); } while(0)

#define IMGDMA_VDOROT_SET_OUTPUT_YUV420() \
    do { REG_IMGDMA_VDOROT_CON = \
        ((REG_IMGDMA_VDOROT_CON & (~0x03fc0007)) | 0x02640007); } while(0)

#define IMGDMA_VDOROT_SET_OUTPUT_YUV411() \
    do { REG_IMGDMA_VDOROT_CON = \
        ((REG_IMGDMA_VDOROT_CON & (~0x03fc0007)) | 0x01740007); } while(0)

#define IMGDMA_VDOROT_SET_OUTPUT_YUV400() \
    do { REG_IMGDMA_VDOROT_CON = \
        ((REG_IMGDMA_VDOROT_CON & (~0x03fc0007)) | 0x00440007); } while(0)

#define IMGDMA_VDOROT_ROT_0() \
    do { REG_IMGDMA_VDOROT_CON = \
        ((REG_IMGDMA_VDOROT_CON & ~0x18000000) | 0x0); } while(0)

#define IMGDMA_VDOROT_ROT_90CW() \
    do { REG_IMGDMA_VDOROT_CON = \
        ((REG_IMGDMA_VDOROT_CON & ~0x18000000) | 0x08000000); } while(0)

#define IMGDMA_VDOROT_ROT_180CW() \
    do { REG_IMGDMA_VDOROT_CON = \
        ((REG_IMGDMA_VDOROT_CON & ~0x18000000) | 0x10000000); } while(0)

#define IMGDMA_VDOROT_ROT_270CW() \
    do { REG_IMGDMA_VDOROT_CON = \
        ((REG_IMGDMA_VDOROT_CON & ~0x18000000) | 0x18000000); } while(0)

#define IMGDMA_VDOROT_FLIP_ENABLE() \
    do { REG_IMGDMA_VDOROT_CON |= 0x20000000; } while(0)

#define IMGDMA_VDOROT_FLIP_DISABLE() \
    do { REG_IMGDMA_VDOROT_CON &= ~0x20000000; } while(0)

#define IMGDMA_VDOROT_SET_ALPHA(alpha) \
    do { REG_IMGDMA_VDOROT_CON = \
        ((REG_IMGDMA_VDOROT_CON & ~IMGDMA_VDOROT_CON_A_VALUE_MASK) | \
         (((alpha) << 8) & IMGDMA_VDOROT_CON_A_VALUE_MASK)); } while(0)

  /** Holmes added */
#define IMGDMA_VDOROT_DITHER_SETTING() \
  do { REG_IMGDMA_VDOROT_DITHER = 0x00864002; } while(0)

#define IMGDMA_VDOROT_DITHER_ENABLE() \
  do { REG_IMGDMA_VDOROT_DITHER |= 0x1; } while(0)

#define IMGDMA_VDOROT_DITHER_DISABLE() \
  do { REG_IMGDMA_VDOROT_DITHER &= ~0x1; } while(0)

#define IMGDMA_VDOROT_PROTECT_ENABLE() \
  do { REG_IMGDMA_VDOROT_PERF |= IMGDMA_VDOROT_PERF_PROTECT_EN_BIT; } while(0)

#define IMGDMA_VDOROT_PROTECT_DISABLE() \
  do { REG_IMGDMA_VDOROT_PERF &= ~IMGDMA_VDOROT_PERF_PROTECT_EN_BIT; } while(0)

#define IMGDMA_VDOROT_RESAMPLE_ENABLE() \
  do { REG_IMGDMA_VDOROT_CON |= IMGDMA_VDOROT_CON_RESAMPLE_BIT; } while(0)

#define IMGDMA_VDOROT_RESAMPLE_DISABLE() \
  do { REG_IMGDMA_VDOROT_CON &= ~IMGDMA_VDOROT_CON_RESAMPLE_BIT; } while(0)

#define IMGDMA_VDOROT_IS_RESAMPLE_USED() \
  ((REG_IMGDMA_VDOROT_CON&IMGDMA_VDOROT_CON_RESAMPLE_BIT)&& 1)

//Add descriptor mode command
#define IMGDMA_VDOROT_SET_QUEUE_BASE_ADDR(n)   \
    do {REG_IMGDMA_VDOROT_QUEUE_BASE= (n&0xFFFFFFFF); } while(0)

#define IMGDMA_VDOROT_PUSH_QUEUE_DATA(n)   \
    do {REG_IMGDMA_VDOROT_QUEUE_DATA= (n&0xFFFFFFFF); } while(0)

#define IMGDMA_VDOROT_IS_QUEUE_WRITE_BUSY() \
  (((REG_IMGDMA_VDOROT_QUEUE_WSTA&0x1)==1) ? KAL_TRUE : KAL_FALSE)

#define IMGDMA_VDOROT_SET_DESCIPTOR_SEG(n)   \
    do {REG_IMGDMA_VDOROT_CFG = \
        (REG_IMGDMA_VDOROT_CFG | (n&0x3FFF0000)); } while(0)

#define IMGDMA_VDOROT_SET_QUEUE_DEPTH(depth) \
    do { REG_IMGDMA_VDOROT_CFG = \
        ((REG_IMGDMA_VDOROT_CFG & ~IMGDMA_VDOROT_CFG_QUEUEDEPTH_MASK) | \
         (IMGDMA_VDOROT_CFG_QUEUEDEPTH_MASK & ((depth) << 8))); } while(0)

typedef struct
{
    // main parameters
  idp_module_enum_t           input_src; // IDP_MODULE_NONE is for each module use default: ROTDMA0: MOUT0, ROTDMA1: MOUT1, ROTDMA2: VRZ
  img_rot_angle_enum_t        rot_angle; /**< rotate direction */
  kal_bool                    flip; /**< flip or not */

  kal_bool                    rgb_output;
  img_color_fmt_rgb_enum_t    rgb_color_fmt; /**< output rgb format */
  img_color_fmt_yuv_enum_t    yuv_color_fmt; /**< output yuv format */
  kal_bool                    block_base_yuv;
  kal_bool                    semi_planar_yuv;
  kal_bool                    uv_planar_v_lsb;
  kal_uint32                  y_dest_start_addr;
  kal_uint32                  u_dest_start_addr;
  kal_uint32                  v_dest_start_addr;
  kal_uint8                   alpha_value; /* for constant alpha ARGB8888 output */

  kal_uint16                  src_width; /**< width */
  kal_uint16                  src_height; /**< height */

  kal_bool                    pitch_enable; /**< pitch */
  kal_uint16                  pitch_bytes; /**< horizontal pitch WARNING! the pitch is applied to three buffers */

  kal_bool                    clip; /**< enable source clipping */
  kal_uint16                  clip_top;
  kal_uint16                  clip_bottom;
  kal_uint16                  clip_left;
  kal_uint16                  clip_right;

  kal_bool                    dither_en;  /**< dither enable */
  kal_bool                    rgb_rounding; /**< enable RGB rounding, only use when KAL_TRUE == output_rgb */
  kal_uint8                   dithering_seed1;
  kal_uint8                   dithering_seed2;
  kal_uint8                   dithering_seed3;

  // interrupt
  kal_bool                    intr_en; /**< enable int or not */
  idp_lisr_intr_cb_t          intr_cb;
  idp_lisr_intr_cb_param_t    intr_cb_param;

  //descriptor mode
  kal_bool                    descriptor_mode;
  kal_uint8                   queue_depth; /**[1,16] */
  kal_bool                    queue_empty_drop; /** otherwise: stall previous engine */
  kal_uint32                  des_queue_base_addr; //new: 6573 for future WinMo driver
  kal_uint32                  des_valid_seg_bitmap; //new: 6573 for future WinMo driver
  kal_uint32                  des_valid_seg_number; //new: 6573 for future WinMo driver
  kal_uint32                  *des_queue_data_addr; //new: 6573 for future WinMo driver

  kal_bool                    auto_loop; /**< auto loop mode */

  kal_bool                    hw_frame_sync;/**camera app, first beginning signal is from cam */

  kal_bool                    hw_trigger_rdma; /**< enable hw trigger RDMA */
  kal_bool                    hw_trigger_rdma_frame_sync_en; /** prevent tearing */
  kal_bool                    hw_trigger_rdma_frame_sync_drop; /** drop or stall previous engine */
  kal_bool                    hw_trigger_rdma_trigger_all_rest; /** trigger all rest RDMA des queue when ROT_DMA empty */

  kal_bool                    stall_prev_engine_when_off;
  kal_bool                    drop_prev_engine_when_off;

  // performance related
  kal_bool                    resample_en; /**< resample enable , for YUV2 & UYVY output */
  kal_bool                    isp_datapath; /**< isp datapath enable */ // ???
  kal_bool                    slow_down_en; /** slow the access EMI rate */
  kal_uint16                  slow_down_cnt; /** cnt: larger is slower */

  kal_bool                    single_buffer_fifo_mode_en; /**< fifo mode enable */
  kal_bool                    protect_en; /**< bus bandwidth protection for ROT_DMA enable */
  kal_bool                    double_buf_en; /**< double buffer of working memory */
  kal_bool                    ultra_high_en;
  kal_uint16                  bus_control_threshold; /** max emi burst type: HW default is 7 (burst 8-8) */
  kal_uint16                  main_lb_size_in_line; /** Sugguest to use 8 or 16 to fit all color format alignment. Size of working buffer 0. Unit is line number. */

  /** private member  */
  kal_uint16                  sample_rate;   //Use to calculate Main/Sub Buffer Size//
  kal_uint16                  output_size_in_bytes; /** output_s_in_byte = main_lb_s_in_line * size_unit.  size_unit: 4: ARGB8888& Block_yuv, 3: RGB888, 2: RGB565 & YUY2 & UYVY*/
  kal_uint32                  main_buf_line_size; /** calculated from main_lb_size_in_line & width*/
  kal_uint32                  main_blk_w; /** calculated from main_lb_size_in_line & width*/
  kal_uint32                  main_final_working_buf_size;
  kal_uint32                  sub_buf_line_size; /** calculated from sub_lb_size_in_line & width*/
  kal_uint32                  sub_blk_w; /** calculated from sub_lb_size_in_line & width*/
  kal_uint32                  sub_final_working_buf_size; /** calculated from sub_lb_size_in_line & width*/

  kal_bool                    hw_trigger_lcd; /**< enable hw trigger LCD */
  idp_lcd_hw_trigger_mode_t   hw_trigger_mode;
  kal_bool                    hw_trigger_rst_wait_lcd;

  /** private member section */
  kal_uint32                  _y_dest_start_addr;
  kal_uint32                  _u_dest_start_addr;
  kal_uint32                  _v_dest_start_addr;
  //not used, remove    kal_uint32          work_mem_line_count;
  kal_uint32                  wm_addr_0;
  kal_uint32                  wm_addr_1;
  kal_uint32                  wm_addr_2;
  kal_uint32                  wm_addr_3;

  //// For easy debugging...
  kal_uint8                   _yh;
  kal_uint8                   _yv;
  kal_uint8                   _uvh;
  kal_uint8                   _uvv;
  //kal_uint8         _uh;
  //kal_uint8         _uv;
  //kal_uint8         _vh;
  //kal_uint8         _vv;
} idp_imgdma_vdorot_struct;


/**
 * \brief VDOROT structure
 *
 * Programmers can use this structure to set up VDOROT
 */
//move to idp_imgdma.h

IDP_HW_COMMON_API_DECLARATION(imgdma_vdorot)

extern void *idp_imgdma_vdorot_intr_cb_param;
extern void (*idp_imgdma_vdorot_intr_cb)(void *);

extern kal_bool idp_imgdma_vdorot_is_busy_real(
    kal_bool * const p_busy,
    idp_imgdma_vdorot_struct const * const p_vdorot_struct);

extern kal_bool idp_imgdma_vdorot_config_real(
    idp_imgdma_vdorot_struct * const p_vdorot_struct,
    kal_bool const config_to_hardware);

extern kal_bool idp_imgdma_vdorot_get_working_mem_size_real(
    idp_imgdma_vdorot_struct * const p_vdorot_struct,
    kal_uint32 * const p_size);

extern kal_bool idp_imgdma_vdorot_get_working_mem_real(
    kal_bool const use_internal_mem,
    idp_imgdma_vdorot_struct * const p_vdorot_struct,
    kal_bool const do_alloc,
    kal_uint32 const max_allowable_size);

extern kal_bool
idp_imgdma_vdorot_start_real(
    idp_imgdma_vdorot_struct const * const p_vdorot_struct);

extern kal_bool
idp_imgdma_vdorot_stop_real(
    idp_imgdma_vdorot_struct const * const p_vdorot_struct);

extern void
idp_imgdma_vdorot_open_real(void);

extern void
idp_imgdma_VDOROT_queue_push(kal_uint32 const data);

extern void
idp_imgdma_VDOROT_set_queue_depth(kal_uint32 const data);

extern void
idp_imgdma_VDOROT_set_queue_base_addr(kal_uint32 const data);

extern void
idp_imgdma_VDOROT_set_queue_segs(kal_uint32 const data);

extern void
idp_imgdma_VDOROT_enable_descriptor_mode(kal_bool enable);

extern void
idp_imgdma_VDOROT_queue_empty_drop(kal_bool enable);
/** @} */
#endif // #if defined(DRV_IDP_MT6276E2_SERIES)
#endif // __idp_imgdma_VDOROT_mt6276_h__

