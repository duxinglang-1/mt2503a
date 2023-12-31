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

const U32 virtualkeyboard_RangeOffset[15]= {

0,13,39,52,78,104,156,182,312,793,806,832,845,858,884,};

const U8  virtualkeyboard_Data[897]= {

0x0,0x0,0x0,0x90,0x20,0x66,0xF0,0xC0,0x1,0x2,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x8,0x30,0x60,0xC0,0x1,0x2,0x0,0x0,0x0,0x0,0x0,0x80,0x0,0x7,0x18,
0xC0,0x0,0x2,0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0xC,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x4,0x8,0x60,0x80,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0xC0,0x0,0x3,0x8,0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xA,0x28,
0xA0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x1,0x5,0x14,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x20,0x40,0x80,0x0,0xFF,0xB,0x40,
0x0,0x2,0x0,0x0,0x0,0x20,0xC0,0x81,0xA,0x49,0x20,0x80,0x0,0x2,0x8,0x20,
0x80,0x0,0x0,0x0,0x1,0x8,0x40,0xFF,0x3,0x4,0x8,0x10,0x0,0x0,0x0,0x20,
0x80,0x0,0x2,0x8,0x20,0x80,0x40,0x12,0x2A,0x70,0x80,0x0,0x0,0x0,0x0,0x0,
0x2,0x30,0x80,0x1,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x12,0x84,0x10,
0x82,0x4,0xC,0x0,0x0,0x0,0x10,0x40,0x80,0x0,0x2,0x4,0x10,0x80,0x0,0x2,
0x10,0x40,0x0,0x20,0x80,0x0,0x4,0x10,0x80,0x0,0x2,0x4,0x10,0x20,0x80,0x0,
0x24,0x90,0x20,0x81,0x4,0x9,0x24,0x20,0x81,0x4,0x24,0x90,0x0,0x90,0x40,0x2,
0x12,0x48,0x40,0x2,0x9,0x12,0x48,0x90,0x40,0x2,0x1E,0x8,0x20,0x80,0x0,0x2,
0x8,0x20,0x80,0x0,0x2,0x8,0x0,0x0,0x1,0x4,0x10,0x40,0x0,0x1,0x4,0x10,
0x40,0x0,0x81,0x7,0x3F,0x84,0xD0,0x43,0x1,0x5,0x14,0x50,0x40,0x1,0x5,0x1C,
0x0,0x80,0x3,0xA,0x28,0xA0,0x80,0x2,0xA,0x28,0xBC,0x10,0xC2,0xF,0x1E,0x38,
0x60,0x80,0x1,0x2,0x8,0x60,0x80,0x1,0xE,0x78,0x0,0xE0,0x1,0x7,0x18,0x60,
0x0,0x1,0x4,0x18,0x60,0xC0,0x81,0x7,0x4,0x8,0xE0,0x1F,0x40,0x0,0x1,0x4,
0x10,0x40,0x80,0xC0,0x1,0x8,0x10,0xC0,0xF,0x20,0x48,0xC0,0x0,0x3,0x12,0x84,
0xC,0xC,0xFE,0x5,0x18,0x60,0x80,0x1,0x6,0x18,0x60,0x80,0x1,0x6,0x8,0xFF,
0x7,0x10,0x40,0x0,0x1,0x4,0x10,0x40,0x0,0x2,0xF0,0xF,0x4,0x8,0xE0,0x1F,
0x44,0x10,0x21,0x84,0x10,0x41,0x82,0x84,0x1,0x20,0x80,0xF0,0x3F,0x4,0x10,0x20,
0x80,0x8,0x41,0xFF,0x3,0x8,0x7E,0x0,0x1,0x4,0x70,0x0,0x1,0x4,0x10,0x40,
0x80,0xC1,0x1,0x14,0x48,0xE0,0x1F,0x44,0x10,0x21,0x84,0x10,0x41,0x82,0x84,0x3,
0x10,0x41,0x84,0x8,0x11,0x66,0x10,0x81,0x8,0x22,0x10,0x41,0x4,0xFF,0x23,0x80,
0x0,0x1,0xFC,0x0,0x2,0x8,0x20,0x40,0xE0,0x0,0xFC,0x13,0x40,0x0,0x1,0x4,
0x10,0x40,0x0,0x1,0x2,0x4,0x0,0x84,0x10,0x42,0x8,0x21,0x84,0x90,0xC3,0x89,
0x20,0x80,0x0,0x2,0x40,0x0,0x1,0x2,0x4,0x18,0x40,0x0,0x2,0x8,0x40,0x0,
0x1,0x0,0xFC,0xF,0x2,0x8,0x20,0x80,0x0,0x2,0x8,0x20,0x80,0x0,0x20,0x90,
0x44,0x12,0x49,0x24,0x91,0xC4,0x1F,0x8,0x20,0xF8,0xF,0x20,0x40,0x80,0x88,0x11,
0x20,0xC0,0x80,0x82,0x9,0x20,0x80,0x0,0xFE,0x1,0x4,0x10,0x7F,0x2,0x8,0x20,
0x80,0x0,0x2,0x4,0x0,0xFE,0x9,0xA4,0x90,0x44,0x32,0x9,0x25,0x90,0x40,0xFE,
0x9,0x4,0xFE,0x21,0x84,0x10,0x42,0x8,0x21,0x84,0x10,0x32,0x8,0x20,0x0,0x20,
0x40,0xF0,0x3F,0x2,0x8,0xE0,0x7,0x10,0x40,0x80,0x0,0x1,0x10,0x40,0x80,0x0,
0x2,0x8,0x30,0x42,0x8,0x41,0xFF,0x1,0x8,0x2,0x12,0x84,0x8,0x14,0x20,0x80,
0x0,0x2,0x8,0x20,0x80,0x0,0xFF,0x83,0x0,0x2,0xE,0x4,0x8,0x20,0x80,0x20,
0x44,0xE0,0x0,0x20,0xFC,0xF,0x2,0xE,0x4,0x8,0x20,0x80,0x20,0x44,0xE0,0x0,
0x84,0x10,0x42,0xC8,0xFF,0x84,0x10,0x42,0x8,0x21,0x4,0xE0,0xF,0xFF,0x83,0x20,
0x82,0x8,0xFE,0x83,0x8,0x21,0x82,0x4,0xE,0x6,0x0,0x40,0xC0,0xC2,0x8,0x20,
0x80,0x0,0x4,0x20,0x0,0x3,0x0,0x10,0x20,0x80,0x4,0x11,0x3E,0x40,0x0,0x1,
0x22,0xFE,0x1,0x8,0x0,0xF8,0x7,0x10,0x41,0x88,0x40,0x1,0x2,0x14,0x8C,0xC,
0xC,0xFF,0x1,0x44,0x90,0x20,0x82,0xF8,0xF,0x20,0x80,0x0,0x2,0x4,0x2,0x8,
0x10,0x40,0x0,0xFF,0x1,0x4,0x10,0x20,0x80,0x0,0x1,0x10,0x40,0xF0,0x3F,0x4,
0x10,0xA0,0x80,0x2,0x9,0x24,0xC,0xF,0x0,0x80,0x0,0x2,0x4,0x10,0x20,0x40,
0x80,0x0,0xFF,0x3,0x0,0x44,0x10,0x41,0x4,0x11,0x44,0x10,0x41,0x84,0x10,0x42,
0x4,0xE,0x0,0x0,0x0,0x0,0x0,0xFF,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x42,0x8,0x12,0x30,0xC0,0x81,0x88,0x41,0x1,0x0,0x0,0x1,0x6,0x18,0x60,
0x80,0x1,0x6,0x18,0x60,0x80,0x1,0xFA,0x7,0x10,0x40,0x0,0x1,0x4,0x10,0x40,
0x0,0x1,0x0,0x0,0x40,0x0,0x18,0x10,0x20,0x80,0x0,0x2,0x8,0x20,0x80,0x0,
0x4,0x60,0x0,0x60,0x0,0x2,0x10,0x40,0x0,0x1,0x4,0x10,0x40,0x80,0x80,0x1,
0x0,0x0,0x80,0x3,0xE,0x38,0x80,0x0,0x2,0x6,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0xC,0x78,0xE0,0x1,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0xC,0x0,
0x0,0x0,0x3,0xC,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0xC,0x0,0xC0,0x0,0x3,
0x8,0x10,0x0,0x0,0x3C,0x0,0x1,0x4,0x10,0x20,0x40,0x0,0x1,0x4,0x0,0x40,
0x0,};
