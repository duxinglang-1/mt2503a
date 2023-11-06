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
/**
 *	Copyright Notice
 *	?2002 - 2003, Pixtel Communications, Inc., 1489 43rd Ave. W.,
 *	Vancouver, B.C. V6M 4K8 Canada. All Rights Reserved.
 *  (It is illegal to remove this copyright notice from this software or any
 *  portion of it)
 */

/**************************************************************

	FILENAME	: Res_PictureEditor.c

  	PURPOSE		: Populate Resource for Image Editor

	REMARKS		: nil

	AUTHOR		: Yogesh

	DATE		: Jan-14-2004

**************************************************************/
#include "CustomCfg.h"

#ifdef FIRST_PASS
#include "BuildCfg.h"
#endif

#ifdef DEVELOPER_BUILD_FIRST_PASS
#include "PopulateRes.h"
#include "PictureEditorResDef.h"

#ifdef __MMI_PICTURE_EDITOR_SUPPORT__
#include "FunAndGamesProts.h"
/**************************************************************

	FUNCTION NAME		: PopulatePictureEditor(void)

  	PURPOSE				: Populate Resources for Image Editor

	INPUT PARAMETERS	: nil

	OUTPUT PARAMETERS	: nil

	RETURNS				: void

	REMARKS				: 

**************************************************************/
void PopulatePictureEditor(void)
{
	  ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MENU_PICTURE_EDITOR, Highlight_MENU_PICTURE_EDITOR);
#if defined(__MMI_OP01_MENU_9MATRIX__) || defined(__MMI_OP01_MENU_12MATRIX__)
    ADD_APPLICATION_MENUITEM((MENU_PICTURE_EDITOR,MAIN_MENU_MULTIMEDIA_MENUID,
#else
#ifndef __MRE_AM__
	ADD_APPLICATION_MENUITEM((MENU_PICTURE_EDITOR,MAIN_MENU_FUNANDGAMES_MENUID,
#else
	ADD_APPLICATION_MENUITEM((MENU_PICTURE_EDITOR,MAIN_MENU_EXTRA_MENUID,
#endif
#endif
		0,SHOW,MOVEABLEACROSSPARENT|SHORTCUTABLE,DISP_LIST,STR_MENU_PICTURE_EDITOR,IMG_PE_IMAGE_EDITOR));

	ADD_APPLICATION_MENUITEM((MENU_PE_VIEW_OPT,0,
		3,
		MENU_PE_VIEW_OPT_EDIT,
		MENU_PE_VIEW_OPT_DELETE,
		MENU_PE_VIEW_OPT_DELETEALL,
		SHOW,MOVEABLEWITHINPARENT,DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));

	ADD_APPLICATION_MENUITEM((MENU_PE_VIEW_OPT_EDIT, MENU_PE_VIEW_OPT,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_GLOBAL_EDIT, 0));
	ADD_APPLICATION_MENUITEM((MENU_PE_VIEW_OPT_DELETE, MENU_PE_VIEW_OPT,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_GLOBAL_DELETE, 0));
	ADD_APPLICATION_MENUITEM((MENU_PE_VIEW_OPT_DELETEALL, MENU_PE_VIEW_OPT,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_GLOBAL_DELETE_ALL, 0));
	
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_1,0,
		8,
		MENU_PE_EDIT_OPT_SAVE_PIC,
		MENU_PE_EDIT_OPT_SAVE_PIC_AS,
		MENU_PE_EDIT_OPT_PEN_SETTING,
		MENU_PE_EDIT_OPT_FILL_PIC,
		MENU_PE_EDIT_OPT_MARK,
		MENU_PE_EDIT_OPT_ZOOM,
		MENU_PE_EDIT_OPT_RESIZE,
		MENU_PE_EDIT_OPT_HELP,
		SHOW,MOVEABLEWITHINPARENT,DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));
	
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_2,0,
		9,
		MENU_PE_EDIT_OPT_SAVE_PIC,
		MENU_PE_EDIT_OPT_SAVE_PIC_AS,
		MENU_PE_EDIT_OPT_PEN_SETTING,
		MENU_PE_EDIT_OPT_FILL_PIC,
		MENU_PE_EDIT_OPT_MARK,
		MENU_PE_EDIT_OPT_UNDO,
		MENU_PE_EDIT_OPT_ZOOM,
		MENU_PE_EDIT_OPT_RESIZE,
		MENU_PE_EDIT_OPT_HELP,
		SHOW,MOVEABLEWITHINPARENT,DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));

	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_3,0,
		9,
		MENU_PE_EDIT_OPT_SAVE_PIC,
		MENU_PE_EDIT_OPT_SAVE_PIC_AS,
		MENU_PE_EDIT_OPT_PEN_SETTING,
		MENU_PE_EDIT_OPT_FILL_PIC,
		MENU_PE_EDIT_OPT_MARK,
		MENU_PE_EDIT_OPT_REDO,
		MENU_PE_EDIT_OPT_ZOOM,
		MENU_PE_EDIT_OPT_RESIZE,
		MENU_PE_EDIT_OPT_HELP,
		SHOW,MOVEABLEWITHINPARENT,DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));

	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_4,0,
		10,
		MENU_PE_EDIT_OPT_SAVE_PIC,
		MENU_PE_EDIT_OPT_SAVE_PIC_AS,
		MENU_PE_EDIT_OPT_PEN_SETTING,
		MENU_PE_EDIT_OPT_FILL_PIC,
		MENU_PE_EDIT_OPT_MARK,
		MENU_PE_EDIT_OPT_CUT,
		MENU_PE_EDIT_OPT_COPY,
		MENU_PE_EDIT_OPT_ZOOM,
		MENU_PE_EDIT_OPT_RESIZE,
		MENU_PE_EDIT_OPT_HELP,
		SHOW,MOVEABLEWITHINPARENT,DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));
	
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_5,0,
		9,
		MENU_PE_EDIT_OPT_SAVE_PIC,
		MENU_PE_EDIT_OPT_SAVE_PIC_AS,
		MENU_PE_EDIT_OPT_PEN_SETTING,
		MENU_PE_EDIT_OPT_FILL_PIC,
		MENU_PE_EDIT_OPT_MARK,
		MENU_PE_EDIT_OPT_PASTE,
		MENU_PE_EDIT_OPT_ZOOM,
		MENU_PE_EDIT_OPT_RESIZE,
		MENU_PE_EDIT_OPT_HELP,
		SHOW,MOVEABLEWITHINPARENT,DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));

	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_6,0,
		10,
		MENU_PE_EDIT_OPT_SAVE_PIC,
		MENU_PE_EDIT_OPT_SAVE_PIC_AS,
		MENU_PE_EDIT_OPT_PEN_SETTING,
		MENU_PE_EDIT_OPT_FILL_PIC,
		MENU_PE_EDIT_OPT_MARK,
		MENU_PE_EDIT_OPT_PASTE,
		MENU_PE_EDIT_OPT_UNDO,
		MENU_PE_EDIT_OPT_ZOOM,
		MENU_PE_EDIT_OPT_RESIZE,
		MENU_PE_EDIT_OPT_HELP,
		SHOW,MOVEABLEWITHINPARENT,DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));

	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_7,0,
		10,
		MENU_PE_EDIT_OPT_SAVE_PIC,
		MENU_PE_EDIT_OPT_SAVE_PIC_AS,
		MENU_PE_EDIT_OPT_PEN_SETTING,
		MENU_PE_EDIT_OPT_FILL_PIC,
		MENU_PE_EDIT_OPT_MARK,
		MENU_PE_EDIT_OPT_PASTE,
		MENU_PE_EDIT_OPT_REDO,
		MENU_PE_EDIT_OPT_ZOOM,
		MENU_PE_EDIT_OPT_RESIZE,
		MENU_PE_EDIT_OPT_HELP,
		SHOW,MOVEABLEWITHINPARENT,DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));

ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_8,0,
		8,
		MENU_PE_EDIT_OPT_SAVE_PIC,
		MENU_PE_EDIT_OPT_SAVE_PIC_AS,
		MENU_PE_EDIT_OPT_PEN_SETTING,
		MENU_PE_EDIT_OPT_FILL_PIC,
		MENU_PE_EDIT_OPT_MARK,
		MENU_PE_EDIT_OPT_FULL_SIZE,
		MENU_PE_EDIT_OPT_RESIZE,
		MENU_PE_EDIT_OPT_HELP,
		SHOW,MOVEABLEWITHINPARENT,DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));
	
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_9,0,
		9,
		MENU_PE_EDIT_OPT_SAVE_PIC,
		MENU_PE_EDIT_OPT_SAVE_PIC_AS,
		MENU_PE_EDIT_OPT_PEN_SETTING,
		MENU_PE_EDIT_OPT_FILL_PIC,
		MENU_PE_EDIT_OPT_MARK,
		MENU_PE_EDIT_OPT_UNDO,
		MENU_PE_EDIT_OPT_FULL_SIZE,
		MENU_PE_EDIT_OPT_RESIZE,
		MENU_PE_EDIT_OPT_HELP,
		SHOW,MOVEABLEWITHINPARENT,DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));

	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_10,0,
		9,
		MENU_PE_EDIT_OPT_SAVE_PIC,
		MENU_PE_EDIT_OPT_SAVE_PIC_AS,
		MENU_PE_EDIT_OPT_PEN_SETTING,
		MENU_PE_EDIT_OPT_FILL_PIC,
		MENU_PE_EDIT_OPT_MARK,
		MENU_PE_EDIT_OPT_REDO,
		MENU_PE_EDIT_OPT_FULL_SIZE,
		MENU_PE_EDIT_OPT_RESIZE,
		MENU_PE_EDIT_OPT_HELP,
		SHOW,MOVEABLEWITHINPARENT,DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));

	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_11,0,
		10,
		MENU_PE_EDIT_OPT_SAVE_PIC,
		MENU_PE_EDIT_OPT_SAVE_PIC_AS,
		MENU_PE_EDIT_OPT_PEN_SETTING,
		MENU_PE_EDIT_OPT_FILL_PIC,
		MENU_PE_EDIT_OPT_MARK,
		MENU_PE_EDIT_OPT_CUT,
		MENU_PE_EDIT_OPT_COPY,
		MENU_PE_EDIT_OPT_FULL_SIZE,
		MENU_PE_EDIT_OPT_RESIZE,
		MENU_PE_EDIT_OPT_HELP,
		SHOW,MOVEABLEWITHINPARENT,DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));
	
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_12,0,
		9,
		MENU_PE_EDIT_OPT_SAVE_PIC,
		MENU_PE_EDIT_OPT_SAVE_PIC_AS,
		MENU_PE_EDIT_OPT_PEN_SETTING,
		MENU_PE_EDIT_OPT_FILL_PIC,
		MENU_PE_EDIT_OPT_MARK,
		MENU_PE_EDIT_OPT_PASTE,
		MENU_PE_EDIT_OPT_FULL_SIZE,
		MENU_PE_EDIT_OPT_RESIZE,
		MENU_PE_EDIT_OPT_HELP,
		SHOW,MOVEABLEWITHINPARENT,DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));

	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_13,0,
		10,
		MENU_PE_EDIT_OPT_SAVE_PIC,
		MENU_PE_EDIT_OPT_SAVE_PIC_AS,
		MENU_PE_EDIT_OPT_PEN_SETTING,
		MENU_PE_EDIT_OPT_FILL_PIC,
		MENU_PE_EDIT_OPT_MARK,
		MENU_PE_EDIT_OPT_PASTE,
		MENU_PE_EDIT_OPT_UNDO,
		MENU_PE_EDIT_OPT_FULL_SIZE,
		MENU_PE_EDIT_OPT_RESIZE,
		MENU_PE_EDIT_OPT_HELP,
		SHOW,MOVEABLEWITHINPARENT,DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));

	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_14,0,
		10,
		MENU_PE_EDIT_OPT_SAVE_PIC,
		MENU_PE_EDIT_OPT_SAVE_PIC_AS,
		MENU_PE_EDIT_OPT_PEN_SETTING,
		MENU_PE_EDIT_OPT_FILL_PIC,
		MENU_PE_EDIT_OPT_MARK,
		MENU_PE_EDIT_OPT_PASTE,
		MENU_PE_EDIT_OPT_REDO,
		MENU_PE_EDIT_OPT_FULL_SIZE,
		MENU_PE_EDIT_OPT_RESIZE,
		MENU_PE_EDIT_OPT_HELP,
		SHOW,MOVEABLEWITHINPARENT,DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));

	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_SAVE_PIC, MENU_PE_EDIT_OPT_1,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_GLOBAL_SAVE, 0));
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_SAVE_PIC_AS, MENU_PE_EDIT_OPT_1,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_PE_EDIT_OPT_SAVE_PIC_AS, 0));
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_PEN_SETTING, MENU_PE_EDIT_OPT_1,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_PE_EDIT_OPT_PEN_SETTING, 0));
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_FILL_PIC, MENU_PE_EDIT_OPT_1,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_PE_EDIT_OPT_FILL_PIC, 0));
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_MARK, MENU_PE_EDIT_OPT_1,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_PE_EDIT_OPT_MARK, 0));
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_UNDO, MENU_PE_EDIT_OPT_2,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_PE_EDIT_OPT_UNDO, 0));
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_REDO, MENU_PE_EDIT_OPT_3,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_PE_EDIT_OPT_REDO, 0));
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_CUT, MENU_PE_EDIT_OPT_4,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_PE_EDIT_OPT_CUT, 0));
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_COPY, MENU_PE_EDIT_OPT_4,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_PE_EDIT_OPT_COPY, 0));
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_PASTE, MENU_PE_EDIT_OPT_5,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_PE_EDIT_OPT_PASTE, 0));
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_ZOOM, MENU_PE_EDIT_OPT_1,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_PE_EDIT_OPT_ZOOM, 0));
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_FULL_SIZE, MENU_PE_EDIT_OPT_8,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_PE_EDIT_OPT_FULL_SIZE, 0));
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_RESIZE, MENU_PE_EDIT_OPT_1,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_PE_EDIT_OPT_RESIZE, 0));
	ADD_APPLICATION_MENUITEM((MENU_PE_EDIT_OPT_HELP, MENU_PE_EDIT_OPT_1,0,
		SHOW,MOVEABLEWITHINPARENT, DISP_LIST, STR_PE_EDIT_OPT_HELP, 0));

	ADD_APPLICATION_MENUITEM((MENU_PE_FILENAME_EDITOR_OPTION,0,2,
		MENU_PE_FILENAME_EDITOR_DONE,
		MENU_PE_FILENAME_EDITOR_INPUT_METHOD,
		SHOW, NONMOVEABLE|INSERTABLE, DISP_LIST,STR_GLOBAL_OPTIONS,IMG_GLOBAL_OPTIONS));
	ADD_APPLICATION_MENUITEM((MENU_PE_FILENAME_EDITOR_DONE,MENU_PE_FILENAME_EDITOR_OPTION,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_GLOBAL_DONE,0));
	ADD_APPLICATION_MENUITEM((MENU_PE_FILENAME_EDITOR_INPUT_METHOD,MENU_PE_FILENAME_EDITOR_OPTION,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_GLOBAL_INPUT_METHOD,0));


	ADD_APPLICATION_STRING2(STR_MENU_PICTURE_EDITOR,"Image Editor","Picture Editor");
	ADD_APPLICATION_STRING2(STR_PE_DRAW_PICTURE,"Draw Picture","Draw Picture");
	ADD_APPLICATION_STRING2(STR_PE_TITLE_COLOR_TXT,"Color","Title Color text");
	ADD_APPLICATION_STRING2(STR_PE_TITLE_PIXEL_TXT,"Pixel","Title Pixel text");

	ADD_APPLICATION_STRING2(STR_PE_EDIT_OPT_SAVE_PIC_AS,"Save As","Save Picture As");
	ADD_APPLICATION_STRING2(STR_PE_EDIT_OPT_REPLACE,"Replace","Replace Picture");
	ADD_APPLICATION_STRING2(STR_PE_EDIT_OPT_PEN_SETTING,"Pen Setting","Pen Setting");
	ADD_APPLICATION_STRING2(STR_PE_EDIT_OPT_FILL_PIC,"Fill Background","Fill Background");
	ADD_APPLICATION_STRING2(STR_PE_EDIT_OPT_MARK,"Mark","Mark");
	ADD_APPLICATION_STRING2(STR_PE_EDIT_OPT_CUT,"Cut","Cut");
	ADD_APPLICATION_STRING2(STR_PE_EDIT_OPT_COPY,"Copy","Copy");
	ADD_APPLICATION_STRING2(STR_PE_EDIT_OPT_PASTE,"Paste","Paste");
	ADD_APPLICATION_STRING2(STR_PE_EDIT_OPT_UNDO,"Undo","Undo");
	ADD_APPLICATION_STRING2(STR_PE_EDIT_OPT_REDO,"Redo","Redo");
	ADD_APPLICATION_STRING2(STR_PE_EDIT_OPT_ZOOM,"Zoom","Zoom");
	ADD_APPLICATION_STRING2(STR_PE_EDIT_OPT_FULL_SIZE,"Original Size","Original Size");
	ADD_APPLICATION_STRING2(STR_PE_EDIT_OPT_RESIZE,"Resize","Resize");
	ADD_APPLICATION_STRING2(STR_PE_EDIT_OPT_HELP,"Help","Help");

	ADD_APPLICATION_STRING2(STR_PE_PEN_SIZE,"Pen Size","Pen Size");
#ifndef __MMI_TOUCH_SCREEN__	/*PMT	MANISH	20050616*/	
	ADD_APPLICATION_STRING2(STR_PE_PEN_MOVE_FACTOR,"Pen Move Factor","Pen Move Factor");
#endif	/* __MMI_TOUCH_SCREEN__ */
	ADD_APPLICATION_STRING2(STR_PE_PEN_COLOR,"Pen Color","Pen Color");

	ADD_APPLICATION_STRING2(STR_PE_PEN_SIZE_1,"1 Pixel","Pen Size 1 Pixel");
	ADD_APPLICATION_STRING2(STR_PE_PEN_SIZE_2,"2 Pixel","Pen Size 2 Pixel");
	ADD_APPLICATION_STRING2(STR_PE_PEN_SIZE_3,"4 Pixel","Pen Size 4 Pixel");
	ADD_APPLICATION_STRING2(STR_PE_PEN_SIZE_4,"8 Pixel","Pen Size 8 Pixel");
#ifndef __MMI_TOUCH_SCREEN__	/*PMT	MANISH	20050616*/	
	ADD_APPLICATION_STRING2(STR_PE_PEN_MOVE_1,"x1","Pen Move Factor 1");
	ADD_APPLICATION_STRING2(STR_PE_PEN_MOVE_2,"x2","Pen Move Factor 2");
	ADD_APPLICATION_STRING2(STR_PE_PEN_MOVE_3,"x4","Pen Move Factor 4");
	ADD_APPLICATION_STRING2(STR_PE_PEN_MOVE_4,"x8","Pen Move Factor 8");
#endif	/* __MMI_TOUCH_SCREEN__ */		
	ADD_APPLICATION_STRING2(STR_PE_COLOR_BLACK,"Black","Black Color");
	ADD_APPLICATION_STRING2(STR_PE_COLOR_BROWN,"Brown","Brown Color");
	ADD_APPLICATION_STRING2(STR_PE_COLOR_DARK_GREEN,"Dark Green","Dark Green Color");
	ADD_APPLICATION_STRING2(STR_PE_COLOR_DARK_BLUE,"Dark Blue","Dark Blue Color");
	ADD_APPLICATION_STRING2(STR_PE_COLOR_VOILET,"Voilet","Voilet Color");
	ADD_APPLICATION_STRING2(STR_PE_COLOR_GRAY,"Gray","Gray Color");
	ADD_APPLICATION_STRING2(STR_PE_COLOR_LIGHT_GRAY,"Light Gray","Light Gray Color");
	ADD_APPLICATION_STRING2(STR_PE_COLOR_RED,"Red","Red Color");
	ADD_APPLICATION_STRING2(STR_PE_COLOR_GREEN,"Green","Green Color");
	ADD_APPLICATION_STRING2(STR_PE_COLOR_YELLOW,"Yellow","Yellow Color");
	ADD_APPLICATION_STRING2(STR_PE_COLOR_BLUE,"Blue","Blue Color");
	ADD_APPLICATION_STRING2(STR_PE_COLOR_PINK,"Pink","Pink Color");
	ADD_APPLICATION_STRING2(STR_PE_COLOR_LIGHT_BLUE,"Light Blue","Light Blue Color");
	ADD_APPLICATION_STRING2(STR_PE_COLOR_WHITE,"White","White Color");
	ADD_APPLICATION_STRING2(STR_PE_COLOR_CUSTOM_1,"Custom","Custom Color");

	ADD_APPLICATION_STRING2(STR_PE_RESIZE_TO,"Resize to:","Screen Resize To");
	ADD_APPLICATION_STRING2(STR_PE_RESIZE_16,"16x16","Screen Size 16x16");
	ADD_APPLICATION_STRING2(STR_PE_RESIZE_32,"32x32","Screen Size 32x32");
	ADD_APPLICATION_STRING2(STR_PE_RESIZE_64,"64x64","Screen Size 64x64");
#ifdef __MMI_MAINLCD_240X320__ // 110805 resize region Calvin
	ADD_APPLICATION_STRING2(STR_PE_RESIZE_128,"128x128","Screen Size 128x128");
#endif
	ADD_APPLICATION_STRING2(STR_PE_RESIZE_CUSTOM,"Custom","Screen Size Custom");
	ADD_APPLICATION_STRING2(STR_PE_RESIZE_WIDTH,"Width","Screen Resize Width");
	ADD_APPLICATION_STRING2(STR_PE_RESIZE_HEIGHT,"Height","Screen Resize Height");
#ifdef __MMI_MAINLCD_240X320__ // 092005 Image Editor Size Calvin
	ADD_APPLICATION_STRING2(STR_PE_RESIZE_ERROR_BIG,"Width: 32 ~ 128 \nHeight: 32 ~ 128", "Resize error");
#else
	ADD_APPLICATION_STRING2(STR_PE_RESIZE_ERROR,"Width: 16 ~ 64 \nHeight: 16 ~ 64", "Resize error");
#endif
	ADD_APPLICATION_STRING2(STR_PE_COLOR_SEL,"Color Selection","Color Selection");
#ifdef __MMI_TOUCH_SCREEN__
	ADD_APPLICATION_STRING2(STR_PE_HELP_DESCRIPTION_TOUCH,"1. Use buttons on top to change settings\n2. use your pen to move cursor.\n3.Press LSK to enter Option screen.","Help description");
#else
	ADD_APPLICATION_STRING2(STR_PE_HELP_DESCRIPTION,"1. Use 5 to toggle paint mode on/off.\n2. use '1','2','3','4','6','7','8','9' to move pen.\n3.Press LSK to enter Option screen.","Help description");
#endif
	ADD_APPLICATION_STRING2(STR_PE_INVALID_FORMAT,"Invalid File Format","The file format is invalid for Painter");

	ADD_APPLICATION_STRING2(STR_PE_COLOR_SEL,"Color Selection","Color Selection");
        ADD_APPLICATION_IMAGE2(IMG_PE_IMAGE_EDITOR,CUST_IMG_PATH"\\\\MainLCD\\\\ImageEditor\\\\SB_IMAGEE.bmp","Sub Menu Image OF Image Editor");
#ifdef __MMI_TOUCH_SCREEN__
	ADD_APPLICATION_IMAGE2(IMG_PE_BACKGROUND,CUST_IMG_PATH"\\\\MainLCD\\\\ImageEditor\\\\TH_BG.GIF","Backgropund image for Picture Editor Screen");
	ADD_APPLICATION_IMAGE2(IMG_PE_IM_PEN,CUST_IMG_PATH"\\\\MainLCD\\\\ImageEditor\\\\TH_IM_Pen.bmp","Pen Down Icon");
#else
	ADD_APPLICATION_IMAGE2(IMG_PE_BACKGROUND,CUST_IMG_PATH"\\\\MainLCD\\\\ImageEditor\\\\BG.GIF","Backgropund image for Picture Editor Screen");
	ADD_APPLICATION_IMAGE2(IMG_PE_IM_PEN,CUST_IMG_PATH"\\\\MainLCD\\\\ImageEditor\\\\IM_Pen.bmp","Pen Down Icon");
#endif
	ADD_APPLICATION_IMAGE2(IMG_PE_IM_ARROW,CUST_IMG_PATH"\\\\MainLCD\\\\ImageEditor\\\\IM_Arrow.bmp","Pen Arrow Icon");

}
#endif
#endif


