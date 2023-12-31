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

/*******************************************************************************
 *
 * Filename:
 * ---------
 * MT6626.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *
 *      MT6626 Register
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/
#ifndef MT6626_H
  #define MT6626_H
  
#include "kal_non_specific_general_types.h"

/* General propose constant */
#define FM_MAIN_CG1_CTRL 0x60 

#define FM_MAIN_CG2_CTRL 0x61 
    #define ANTENNA_TYPE 0x0010     
#define FM_MAIN_CTRL		0x63 
	#define TUNE 0x0001	
	#define SEEK 0x0002 
	#define SCAN 0x0004 
	#define RAMP_DOWN 0x0100 
	#define RDS_MASK 0x0010 	
#define FM_EN1	0x64 
	#define	  RAMPDOWN_COMPLETE 0x0010 
    #define   TUNE_COMPLETE 0x0008 
    #define   SEEK_COMPLETE 0x0004 
    #define   SCAN_COMPLETE 0x0002 
    #define   DSP_INIT_COMPLETE 0x0001 
#define FM_CHANNEL_SET	0x65		
	#define   HOST_CHAN	0x3FF0		
#define FM_MAIN_CFG1		0x66 
    #define   FM_CFG1_SEEK_DIR 0x0400 
	#define   FM_CFG1_CHN_STEPSIZE 0x7000 
#define FM_MAIN_CFG2		0x67 
#define FM_MAIN_INTR		0x69 
	#define FM_INTR_STC_DONE	0x0001	
    #define FM_INTR_RSSI_INTR	0x0008	
	#define   FM_INTR_SW_INTR	0x0010	
	#define   FM_INTR_RDS		0x0020  
#define FM_MAIN_MASK		0x6A	
#define FM_MAIN_EXTINTRMASK		0x6B	
	#define EXT_STC_DONE_MASK 0x01	
	#define EXT_RDS_MASK 0x20	
#define FM_R_RSSI			0x6C	
    #define FM_BF_STEREO			0x1000	
    #define FM_BF_RSSI			0x03FF		
#define FM_STAT1			0x6F 
	#define   CUR_RF_CHAN 0x3FF0 

#define ADDR_PAMD		0xB4 

#define MASK_READCHAN 0x3FF0 // mt6626 checked
#define SHIFT_READCHAN 4 
#define MASK_RSSI 		0x3FF 



/*RDS Register */
#define RDS_CFG0                    0x80        
	#define RDS_BUF_START_TH            0x000F  
	#define RDS_BCNT_RST                0x0100  
#define RDS_INFO_REG                0x81        
	#define RDS_CRC_BLK_ADJ             0x0020  
    #define RDS_CRC_CORR_CNT            0x001E  
	#define RDS_CRC_INFO                0x0001  
#define RDS_DATA_REG                0x82        
#define RDS_GOODBK_CNT              0x83        
#define RDS_BADBK_CNT               0x84        
#define RDS_PWDI                    0x85        
#define RDS_PWDQ                    0x86        
#define RDS_FIFO_STATUS0            0x87        
    #define RDS_FIFO_DIFF               0x007F  
    #define RDS_GROUP_DIFF_OFS          0x007C  

#define RDS_POINTER                 0xF0

	#define   RDS_GDBK_IND_A	0x0008	
	#define   RDS_GDBK_IND_B	0x0004	
	#define   RDS_GDBK_IND_C	0x0002	
	#define   RDS_GDBK_IND_D	0x0001	
	#define   OSTWD_E                    0x0010
	#define   RDS_DCO_FIFO_OFST		0x01F0      


#define RDS_BDGRP_ABD_CTRL_REG		0xB6
	#define BDGRP_ABD_EN 0x0001
	#define BER_RUN 0x2000
#define FM_DAC_CON1 0x83
#define FM_DAC_CON2 0x84

#define FM_FT_CON0 0x86
       #define FT_EN		0x0001
#define FM_FT_CON9 0x8F
	   
#define FM_I2S_CON0 0x90
       #define I2S_SRC		0x0008
	#define WLEN		0x0004
	#define FORMAT          0x0002
	#define I2S_EN		0x0001

/*FSPI Command*/
#if (defined(MT6626))
#define FSPI_ENABLE_OPCODE				(0x01)
#define FSPI_MUX_SEL_OPCODE			(0x02)
#define FSPI_READ_OPCODE				(0x03)
#define FSPI_WRITE_OPCODE				(0x04)
//#define FI2C_READ_OPCODE				(0x05)
//#define FI2C_WRITE_OPCODE				(0x06)
#define FM_ENABLE_OPCODE				(0x07)
#define FM_RESET_OPCODE				(0x08)
#define FM_TUNE_OPCODE					(0x09)
#define FM_SEEK_OPCODE					(0x0A)
#define FM_SCAN_OPCODE					(0x0B)
#define RDS_ENABLE_OPCODE				(0x0C)
#define RDS_DATA_OPCODE				(0x0D)
#define FM_RAMPDOWN_OPCODE			(0x0E)
//#define FM_MCUCLK_SEL_OPCODE			(0x0F)
//#define FM_MODEMCLK_SEL_OPCODE		(0x10)
#endif
typedef enum{
    wrong_assign = 0,
    rom_download,
    patch_download,
    coefficient_download,
    hw_coefficient_download
}Download_type;

typedef enum
{
    E1=0,
    E2
}chip_ver;
void FMDrv_AutoDetect(void);

#endif
