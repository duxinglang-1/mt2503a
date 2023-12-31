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
 *   reg_base_mt6268.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   Definition for chipset register base and global configuration registers
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __REG_BASE_MT6573_H__
#define __REG_BASE_MT6573_H__


/*********************
  * General definition 
  ********************/


/*********************
  * MDSYS definition 
  ********************/
  
#define DMA_base                 (0x60000000)
#define AFC_base                 (0x60010000)
#define PFC_base                 (0x60020000)
#define BPI_base                 (0x60030000)
#define BSI_base                 (0x60040000)
#define DIVIDER_base             (0x60050000)
#define TDMA_base                (0x60060000)
#define RTR_base                 (0x60070000)
#define OSTIMERPARM_base         (0x60080000)
#define OSTIMERDSP_base          (0x60090000)
#define GPT_base                 (0x600A0000)
#define DSPGPT_base              (0x600B0000)
#define RGU_base                 (0x70025000)  /* AP/MD shared the same RGU base. We do not do corresponding offset to find MD control register because DSP init will also access this reg base. */
#define CIRQ_base                (0x600D0000)
#define LMU_ARM11_base           (0x600E0000)
#define LMU_FCORE4_base          (0x600F0000)
#define LOGACC_base              (0x60100000)
#define MDIF_base                (0x60110000)
#define RT_MDIF_base             (0x60110120) /* Integrated in MDIF */ 
#define DSPCCIF_base             (0x60120000)
#define MDCCIF_base              (0x60130000)
#define CONFG_base               (0x60140000)  /* md persys config. */
#define CONFIG_base              CONFG_base
#define DEVAPC0_base             (0x60150000)
#define LMU_ARM11_AXI_base       (0x60200000)
#define LMU_FCORE4_AXI_base      (0x60600000)
#define BFMDIF_base              (0x61400000)  /* It is MDIF_SRAM's address. */


/*********************
  * 2GSYS definition 
  ********************/

#define INRCV_base               (0xA0000000)
#define PREFILTER_base           (0xA0010000)
#define EDGE_PLL_base            (0xA0020000)
#define EQLZR_base               (0xA0030000)
#define LMS_UPDATE_base          (0xA0040000)
#define PREFETCH_base            (0xA0050000)
#define SEQ_TX_base              (0xA0060000)
#define SEQ_RX_base              (0xA0070000)
#define IRDMA_base               (0xA00A0000)
#define BFE_TXBUF_base           (0xA00B0000)
#define CRC_TX_base              (0xA00C0000)
#define FIRE_TX_base             (0xA00C1000)
#define CONV_TX_base             (0xA00C2000)
#define ADDRGEN_TX_base          (0xA00C3000)
#define PUNCGEN_TX_base          (0xA00C4000)
#define EAPG_TX_base             (0xA00C5000)
#define VITERBI_base             (0xA00C6000)
#define CRC_base                 (0xA00C7000)
#define FIRE_base                (0xA00C8000)
#define CONV_base                (0xA00C9000)
#define ADDRGEN_base             (0xA00CA000)
#define PUNCGEN_base             (0xA00CB000)
#define EAPG_base                (0xA00CC000)
#define ECONV_base               (0xA00CD000)
#define ECRC_D_base              (0xA00CE000)
#define ECRC_E_base              (0xA00CF000)
#define EQRAM1_base              (0xA00D0000)
#define FCS_base                 (0xA0100000)
#define CSD_ACC_base             (0xA0110000)
#define GCU_base                 (0xA0120000)
#define BFE_base                 (0xA0140000)
#define MD2G_CFG_base            (0xA0150000)
#define APC_base                 (0xA0190000)
#define MD2G_LOG_base            (0xA01A0000)
#define SHARE_T123_base          (0xA01B0000)
#define GCC_base                 (0xA01C0000)
#define BF2DEBUF_DMA_base        (0xA01D0000)
#define EQRAM2_base              (0xA0800000)
#define RXBUF_base               (0xA0A00000)
#define DEINTBUF_base            (0xA0C00000)


/*********************
  * HSPASYS definition 
  ********************/

#define TXBRP_base               (0xB0000000)
#define TXCRP_base               (0xB0010000)
#define SRCHR_base               (0xB0020000)
#define RXDFE_base               (0xB0030000)  /* MT6276 wrongly define it as RX"B"FE, we correct it. */
#define RXSRP_base               (0xB0040000)
#define RAKE_base                (0xB0050000)  /* MT6573 spec defines it as RXCRP_base, which is the same as RAKE. */
#define RXBRP_base               (0xB0060000)  /* MT6573 spec defines it as W_RXCRP_base, which is the same as RXBRP_base. */
#define BITCP_base               (0xB0070000)
#define F8F9_base                (0xB0080000)
#define LOG3G_base               (0xB0090000)
#define LPBK_base                (0xB00A0000)
#define F8F9_1_base              (0xB00B0000)
#define F8F9_2_base              (0xB00C0000)
#define WCONFG_base              (0xB00D0000)  /* MT6573 spec defines it as HSPA_CONFG_base, which is the same as WCONFG_base. */
#define HRXBRP_base              (0xB00E0000)
#define UTXBRP_base              (0xB00F0000)
#define HSDPA_base               (0xB0100000)  /* MT6573 spec defines it as HSEQ_base/HSCE_base, which is inside of HSDPA_base/HSDPA1_base. */
#define HSDPA1_base              (0xB0110000)
#define DPA_RLC_base             (0xB0120000)
#define DPA_MAC_base             (0xB0130000)
#define UPA_base                 (0xB0140000)
#define TXUPC_base               (0xB0150000)
#define HSPA_DMA_base            (0xB0160000)  /* MT6573 spec defines it as HSPA_BUS_INTF, which is the same as HSPA_DMA_base. */


/*********************
  * AUDIOSYS definition 
  ********************/

#define AUDIOSYS_base            (0xD0000000)


/*********************
  * FCORESYS definition 
  ********************/

#define HSL_base                 (0xFF000000)
#define SPM_base                 (0xFF010000)
#define FCOREL2_base             (0xFF040000)
#define DSPCIRQ_base             (0xFF050000)
#define DSP_DMA_base             (0xFF060000)
#define DEVAPC_DSP_base          (0xFF070000)
#define FC_SEJ_base              (0xFF080000)
#define FC_CONFIG_base           (0xFF090000)


/*********************
  * APSYS definition 
  ********************/
  
#define EMI_base                 (0x70000000)
#define SYSL2_base               (0x70001000) 
#define AP_DMA_base              (0x70002000)
#define UART1_base               (0x70003000)
#define UART2_base               (0x70004000)
#define UART3_base               (0x70005000)
#define UART4_base               (0x70006000)
#define AP_GPT_base              (0x70007000)
#define EINT_base                (0x70008000)
#define NFI_base                 (0x70009000) 
#define NFIECC_base              (0x7000A000)
#define I2C_base                 (0x7000B000)
#define LMU_AP_ARM11_APB_base    (0x7000C000)
#define I2C2_base                (0x7000D000)
#define MSDC_base                (0x7000E000)
#define MSDC2_base               (0x7000F000)
#define MSDC3_base               (0x70010000)
#define MSDC4_base               (0x70011000)
#define KP_base                  (0x70012000)
#define SIM0_base                (0x70013000)  /* MT6573's spec named it as sim0 (different from MT6276). */
#define RTC_base                 (0x70014000)
#define PWM_base                 (0x70015000)
#define IRDA_base                (0x70016000)
#define AP_CIRQ_base             (0x70017000)
#define AUXADC_base              (0x70020000)
#define AP_OSTIMERPARM_base      (0x70021000)
#define TOPSM_base               (0x70022000)
#define GPIO_base                (0x70023000)
#define EFUSE_base               (0x70024000)
#define AP_CONFG_base            (0x70026000)  /* ap persys config. */
#define AP_CONFIG_base           AP_CONFG_base
#define APCONFIG_base            AP_CONFG_base
#define HDQ_base                 (0x70027000)
#define AP_MDCCIF_base           (0x70028000)
#define AP_DSPCCIF_base          (0x70029000)
#define SEJ_base                 (0x7002A000)
#define ACCDET_base              (0x7002B000)
#define APXTIMER_base            (0x7002C000)
#define SIM1_base                (0x7002D000)    /* MT6573's spec named it as sim1 (different from MT6276). */
#define MIX_ABB_base             (0x7002E000)
#define MIX_PMU_base             (0x7002F000)
#define ATBBWL_base              (0x70030000)
#define PERICLK_base             (0x70031000)
#define TRNG_base                (0x70032000)
#define DEVAPC1_base             (0x70033000)
#define USB_base                 (0x70050000)
#define ICUSB1_base              (0x70060000)   /* This is USB1.1 base. */
#define VFF_base                 (0x70070000)
#define MMSYS1_CONFG_base        (0x70080000)
#define GMC1_base                (0x70081000)
#define GMC1_MMU_base            (0x70082000)
#define FDVT_base                (0x70083000)
#define G2D_base                 (0x70084000)
#define GCMQ_base                (0x70085000)
#define R_DMA0_base              (0x70086000)
#define R_DMA1_base              (0x70087000)
#define ROT_DMA0_base            (0x70088000)
#define ROT_DMA1_base            (0x70089000)
#define ROT_DMA2_base            (0x7008A000)
#define ROT_DMA3_base            (0x7008B000)
#define DPI_base                 (0x7008C000)
#define BRZ_base                 (0x7008D000)
#define JPG_DMA_base             (0x7008E000)
#define OVL_DMA_base             (0x7008F000)
#define CAMERA_base              (0x70090000)
#define ISPMEM_base              (0x70091000)
#define CSI2_base                (0x70092000)
#define CRZ_base                 (0x70093000)
#define VRZ_base                 (0x70094000)
#define IMGPROC_base             (0x70095000)
#define EIS_base                 (0x70096000)
#define GIF_base                 (0x70097000)  /* spec named it as GIF_DECODER. */
#define PNG_base                 (0x70098000)  /* spec named it as PNG_DECODER. */
#define PRZ0_base                (0x70099000)
#define PRZ1_base                (0x7009A000)
#define JPEG_CODEC_base          (0x7009B000)
#define DSI_base                 (0x7009C000)
#define HIF_base                 (0x700A0000)
#define APC0_base                (0x700A1000)  /* MMSYS1 APC0. */
#define APC1_base                (0x700A2000)  /* MMSYS1 APC1. */
#define LCD_base                 (0x700A3000)
#define MMSYS2_CONFG_base        (0x700B0000)
#define GMC2_base                (0x700B1000)
#define SPI_base                 (0x700B2000)
#define MFV_base                 (0x700B3000)
#define MFG_APB_base             (0x700B4000)
#define CTI3_BASE                (0x700FC000)
#define SATA_BASE                (0x700FB000)
#define DAPROM_base              (0x700F0000)
#define CTI_base                 (0x700F2000)
#define TPIU_base                (0x700F3000)
#define FUNNEL0_base             (0x700F4000)
#define FUNNEL1_base             (0x700F5000)
#define ARMCTI_base              (0x700F6000)
#define FRIOCTI_base             (0x700F7000)
#define STP_base                 (0x700F9000)
#define DEM_base                 (0x700FA000)
#define LMU_AP_ARM11_AXI_base    (0x70100000)


//#define GFX_ROT_base             /* Not support on MT6573. */
//#define BS_DMA_base              /* Not support on MT6573. */
//#define TD_DMA_base              /* Not support on MT6573. */
//#define IT_DMA_base              /* Not support on MT6573. */
//#define BTIF_base                /* Not support on MT6573. */
//#define FSPI_base                /* Not support on MT6573. */
//#define GOVL_base                /* Not support on MT6573. */
//#define DRZ_base                 /* Not support on MT6573. */
//#define DRZ_base                 /* Not support on MT6573. */



/*********************
  * Shared Device base address
  ********************/ 

#define DMA_SD_base                 (0x60000000)
#define AFC_SD_base                 (0x60010000)
#define PFC_SD_base                 (0x60020000)
#define BPI_SD_base                 (0x60030000)
#define BSI_SD_base                 (0x60040000)
#define DIVIDER_SD_base             (0x60050000)
#define TDMA_SD_base                (0x60060000)
#define RTR_SD_base                 (0x60070000)
#define OSTIMERPARM_SD_base         (0x60080000)
#define OSTIMERDSP_SD_base          (0x60090000)
#define GPT_SD_base                 (0x600A0000)
#define DSPGPT_SD_base              (0x600B0000)
#define RGU_SD_base                 (0x70025030)  /* AP/MD shared the same RGU base. Wy request to do corresponding offset to find MD control register. */
#define CIRQ_SD_base                (0x600D0000)
#define LMU_ARM11_SD_base           (0x600E0000)
#define LMU_FCORE4_SD_base          (0x600F0000)
#define LOGACC_SD_base              (0x60100000)
#define MDIF_SD_base                (0x60110000)
#define RT_MDIF_SD_base             (0x60110120) /* Integrated in MDIF */ 
#define MDCCIF_SD_base              (0x60120000)
#define DSPCCIF_SD_base             (0x60130000)
#define CONFG_SD_base               (0x60140000)  /* md persys config. */
#define CONFIG_SD_base              CONFG_SD_base
#define DEVAPC0_SD_base             (0x60150000)
#define LMU_ARM11_AXI_SD_base       (0x60200000)
#define LMU_FCORE4_AXI_SD_base      (0x60600000)
#define BFMDIF_SD_base              (0x61400000)  /* It is MDIF_SRAM's address. */


/*********************
  * 2GSYS definition 
  ********************/

#define INRCV_SD_base               (0xA0000000)
#define PREFILTER_SD_base           (0xA0010000)
#define EDGE_PLL_SD_base            (0xA0020000)
#define EQLZR_SD_base               (0xA0030000)
#define LMS_UPDATE_SD_base          (0xA0040000)
#define PREFETCH_SD_base            (0xA0050000)
#define SEQ_TX_SD_base              (0xA0060000)
#define SEQ_RX_SD_base              (0xA0070000)
#define IRDMA_SD_base               (0xA00A0000)
#define BFE_TXBUF_SD_base           (0xA00B0000)
#define CRC_TX_SD_base              (0xA00C0000)
#define FIRE_TX_SD_base             (0xA00C1000)
#define CONV_TX_SD_base             (0xA00C2000)
#define ADDRGEN_TX_SD_base          (0xA00C3000)
#define PUNCGEN_TX_SD_base          (0xA00C4000)
#define EAPG_TX_SD_base             (0xA00C5000)
#define VITERBI_SD_base             (0xA00C6000)
#define CRC_SD_base                 (0xA00C7000)
#define FIRE_SD_base                (0xA00C8000)
#define CONV_SD_base                (0xA00C9000)
#define ADDRGEN_SD_base             (0xA00CA000)
#define PUNCGEN_SD_base             (0xA00CB000)
#define EAPG_SD_base                (0xA00CC000)
#define ECONV_SD_base               (0xA00CD000)
#define ECRC_D_SD_base              (0xA00CE000)
#define ECRC_E_SD_base              (0xA00CF000)
#define EQRAM1_SD_base              (0xA00D0000)
#define FCS_SD_base                 (0xA0100000)
#define CSD_ACC_SD_base             (0xA0110000)
#define GCU_SD_base                 (0xA0120000)
#define BFE_SD_base                 (0xA0140000)
#define MD2G_CFG_SD_base            (0xA0150000)
#define APC_SD_base                 (0xA0190000)
#define MD2G_LOG_SD_base            (0xA01A0000)
#define SHARE_T123_SD_base          (0xA01B0000)
#define GCC_SD_base                 (0xA01C0000)
#define BF2DEBUF_DMA_SD_base        (0xA01D0000)
#define EQRAM2_SD_base              (0xA0800000)
#define RXBUF_SD_base               (0xA0A00000)
#define DEINTBUF_SD_base            (0xA0C00000)


/*********************
  * HSPASYS definition 
  ********************/

#define TXBRP_SD_base               (0xB0000000)
#define TXCRP_SD_base               (0xB0010000)
#define SRCHR_SD_base               (0xB0020000)
#define RXDFE_SD_base               (0xB0030000)  /* MT6276 wrongly define it as RX"B"FE, we correct it. */
#define RXSRP_SD_base               (0xB0040000)
#define RAKE_SD_base                (0xB0050000)  /* MT6573 spec defines it as RXCRP_SD_base, which is the same as RAKE. */
#define RXBRP_SD_base               (0xB0060000)  /* MT6573 spec defines it as W_RXCRP_SD_base, which is the same as RXBRP_SD_base. */
#define BITCP_SD_base               (0xB0070000)
#define F8F9_SD_base                (0xB0080000)
#define LOG3G_SD_base               (0xB0090000)
#define LPBK_SD_base                (0xB00A0000)
#define F8F9_1_SD_base              (0xB00B0000)
#define F8F9_2_SD_base              (0xB00C0000)
#define WCONFG_SD_base              (0xB00D0000)  /* MT6573 spec defines it as HSPA_CONFG_SD_base, which is the same as WCONFG_SD_base. */
#define HRXBRP_SD_base              (0xB00E0000)
#define UTXBRP_SD_base              (0xB00F0000)
#define HSDPA_SD_base               (0xB0100000)  /* MT6573 spec defines it as HSEQ_SD_base/HSCE_SD_base, which is inside of HSDPA_SD_base/HSDPA1_SD_base. */
#define HSDPA1_SD_base              (0xB0110000)
#define DPA_RLC_SD_base             (0xB0120000)
#define DPA_MAC_SD_base             (0xB0130000)
#define UPA_SD_base                 (0xB0140000)
#define TXUPC_SD_base               (0xB0150000)
#define HSPA_DMA_SD_base            (0xB0160000)  /* MT6573 spec defines it as HSPA_BUS_INTF, which is the same as HSPA_DMA_SD_base. */


/*********************
  * AUDIOSYS definition 
  ********************/

#define AUDIOSYS_SD_base            (0xD0000000)


/*********************
  * FCORESYS definition 
  ********************/

#define HSL_SD_base                 (0xFF000000)
#define SPM_SD_base                 (0xFF010000)
#define FCOREL2_SD_base             (0xFF040000)
#define DSPCIRQ_SD_base             (0xFF050000)
#define DSP_DMA_SD_base             (0xFF060000)
#define DEVAPC_DSP_SD_base          (0xFF070000)
#define FC_SEJ_SD_base              (0xFF080000)
#define FC_CONFIG_SD_base           (0xFF090000)


/*********************
  * APSYS definition 
  ********************/
  
#define EMI_SD_base                 (0x70000000)
#define SYSL2_SD_base               (0x70001000) 
#define AP_DMA_SD_base              (0x70002000)
#define UART1_SD_base               (0x70003000)
#define UART2_SD_base               (0x70004000)
#define UART3_SD_base               (0x70005000)
#define UART4_SD_base               (0x70006000)
#define AP_GPT_SD_base              (0x70007000)
#define EINT_SD_base                (0x70008000)
#define NFI_SD_base                 (0x70009000) 
#define NFIECC_SD_base              (0x7000A000)
#define I2C_SD_base                 (0x7000B000)
#define LMU_AP_ARM11_APB_SD_base    (0x7000C000) 
#define I2C2_SD_base                (0x7000D000)
#define MSDC_SD_base                (0x7000E000)
#define MSDC2_SD_base               (0x7000F000)
#define MSDC3_SD_base               (0x70010000)
#define MSDC4_SD_base               (0x70011000)
#define KP_SD_base                  (0x70012000)
#define SIM0_SD_base                (0x70013000)  /* MT6573's spec named it as sim0 (different from MT6276). */
#define RTC_SD_base                 (0x70014000)
#define PWM_SD_base                 (0x70015000)
#define IRDA_SD_base                (0x70016000)
#define AP_CIRQ_SD_base             (0x70017000)
#define AUXADC_SD_base              (0x70020000)
#define AP_OSTIMERPARM_SD_base      (0x70021000)
#define TOPSM_SD_base               (0x70022000)
#define GPIO_SD_base                (0x70023000)
#define EFUSE_SD_base               (0x70024000)
#define AP_CONFG_SD_base            (0x70026000)  /* ap persys config. */
#define AP_CONFIG_SD_base           AP_CONFG_SD_base
#define APCONFIG_SD_base            AP_CONFG_SD_base
#define HDQ_SD_base                 (0x70027000)
#define AP_MDCCIF_SD_base           (0x70028000)
#define AP_DSPCCIF_SD_base          (0x70029000)
#define SEJ_SD_base                 (0x7002A000)
#define ACCDET_SD_base              (0x7002B000)
#define APXTIMER_SD_base            (0x7002C000)
#define SIM1_SD_base                (0x7002D000)    /* MT6573's spec named it as sim1 (different from MT6276). */
#define MIX_ABB_SD_base             (0x7002E000)
#define MIX_PMU_SD_base             (0x7002F000)
#define ATBBWL_SD_base              (0x70030000)
#define PERICLK_SD_base             (0x70031000)
#define TRNG_SD_base                (0x70032000)
#define DEVAPC1_SD_base             (0x70033000)
#define USB_SD_base                 (0x70050000)
#define ICUSB1_SD_base              (0x70060000)   /* This is USB1.1 base. */
#define VFF_SD_base                 (0x70070000)
#define MMSYS1_CONFG_SD_base        (0x70080000)
#define GMC1_SD_base                (0x70081000)
#define GMC1_MMU_SD_base            (0x70082000)
#define FDVT_SD_base                (0x70083000)
#define G2D_SD_base                 (0x70084000)
#define GCMQ_SD_base                (0x70085000)
#define R_DMA0_SD_base              (0x70086000)
#define R_DMA1_SD_base              (0x70087000)
#define ROT_DMA0_SD_base            (0x70088000)
#define ROT_DMA1_SD_base            (0x70089000)
#define ROT_DMA2_SD_base            (0x7008A000)
#define ROT_DMA3_SD_base            (0x7008B000)
#define DPI_SD_base                 (0x7008C000)
#define BRZ_SD_base                 (0x7008D000)
#define JPG_DMA_SD_base             (0x7008E000)
#define OVL_DMA_SD_base             (0x7008F000)
#define CAMERA_SD_base              (0x70090000)
#define ISPMEM_SD_base              (0x70091000)
#define CSI2_SD_base                (0x70092000)
#define CRZ_SD_base                 (0x70093000)
#define VRZ_SD_base                 (0x70094000)
#define IMGPROC_SD_base             (0x70095000)
#define EIS_SD_base                 (0x70096000)
#define GIF_SD_base                 (0x70097000)  /* spec named it as GIF_DECODER. */
#define PNG_SD_base                 (0x70098000)  /* spec named it as PNG_DECODER. */
#define PRZ0_SD_base                (0x70099000)
#define PRZ1_SD_base                (0x7009A000)
#define JPEG_CODEC_SD_base           (0x7009B000)
#define DSI_SD_base                 (0x7009C000)
#define HIF_SD_base                 (0x700A0000)
#define APC0_SD_base                (0x700A1000)  /* MMSYS1 APC0. */
#define APC1_SD_base                (0x700A2000)  /* MMSYS1 APC1. */
#define LCD_SD_base                 (0x700A3000)
#define MMSYS2_CONFG_SD_base        (0x700B0000)
#define GMC2_SD_base                (0x700B1000)
#define SPI_SD_base                 (0x700B2000)
#define MFV_SD_base                 (0x700B3000)
#define MFG_APB_SD_base             (0x700B4000)
#define CTI3_SD_base                (0x700FC000)
#define SATA_SD_base                (0x700FB000)
#define DAPROM_SD_base              (0x700F0000)
#define CTI_SD_base                 (0x700F2000)
#define TPIU_SD_base                (0x700F3000)
#define FUNNEL0_SD_base             (0x700F4000)
#define FUNNEL1_SD_base             (0x700F5000)
#define ARMCTI_SD_base              (0x700F6000)
#define FRIOCTI_SD_base             (0x700F7000)
#define STP_SD_base                 (0x700F9000)
#define DEM_SD_base                 (0x700FA000)
#define LMU_AP_ARM11_AXI_SD_base    (0x70100000)


#endif  /* __REG_BASE_MT6573_H__ */

