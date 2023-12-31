@echo off
set prj=
set customer=AURI
set optr_path=PPP
set optr_spec=NONE
set main_lcd_size=240X320
set touch_panel_support=CTP_MSTAR_MSG21XX_TRUE_MULTIPLE
set MTK_PROJECT_PATH=%2
set COMPILER_VER=gcc33

if %customer%==MTK set customer=PLUTO

if "%RESGEN_DEBUG%"=="YES" (
    set RESGEN_OPTION='USES_DEBUG=YES'
)

if %COMPILER_VER%==gcc45 goto compiler_ver_gcc45:

path ..\..\tools;..\..\..\tools;..\..\..\Tools\MSYS\bin;..\..\..\..\Tools\MSYS\bin;..\..\Tools\MinGW\bin;..\..\..\Tools\MinGW\bin;..\..\..\tools\MinGW\lib\gcc-lib\mingw32\3.3.1;..\debug;.\debug;..\..\..\Tools;%path%;
set RESGEN_MAKE=..\..\..\Tools\MSYS\bin\make

goto end_compiler_setting:

:compiler_ver_gcc45

path ..\..\tools;..\..\..\tools;..\..\Tools\MinGW\bin;..\..\..\Tools\MinGW\bin;..\..\..\tools\MinGW\lib\gcc-lib\mingw32\3.3.1;..\debug;.\debug;..\..\..\Tools;%path%;
set RESGEN_MAKE=..\..\..\Tools\make 

:end_compiler_setting

if  not .%1==.  goto a:
goto menu:


:a

cd plutommi\Customer\ResGenerator


set /a COMPILE_NUM=%NUMBER_OF_PROCESSORS%*2
echo NUMBER_OF_PROCESSORS=[%NUMBER_OF_PROCESSORS%] COMPILE_NUM=[%COMPILE_NUM%]

set /a MAX_COMPILE_NUM=32
if %COMPILE_NUM% GTR %MAX_COMPILE_NUM% goto set_singel_process
goto end_singel_process

:set_singel_process
set /a COMPILE_NUM=%NUMBER_OF_PROCESSORS%
echo NUMBER_OF_PROCESSORS=[%NUMBER_OF_PROCESSORS%] COMPILE_NUM=[%COMPILE_NUM%]
:end_singel_process

set TIMELOGFILE=%CD%\resgen_time.log
echo [%Time%] start > %TIMELOGFILE%

if .%1==.PLUTO_MMI set prj=PLUTO

rem ****************************************************************
rem *************** Run ResGenerator_OP_pre.bat ********************
rem ****************************************************************
if %optr_spec%==NONE goto skip_optr_pre
echo -----------------Run ResGenerator_OP_pre.bat---------------------------------------------------
call ..\..\..\%optr_path%\ResGenerator_OP_pre.bat %optr_path%
echo ------------------------------DONE-------------------------------------------------------------
:skip_optr_pre


rem ************************************************************
rem *************** Start to Generate Font File ! **************
rem ************************************************************
echo -------------Start to Generate Font File !-------------
if exist ..\FontResgen\font_gen.exe  if exist ..\CustResource\FontRes.c if exist ..\..\..\vendor\font\inc\L_*.h goto success_font_gen
if exist .\font_gen.exe del /q .\font_gen.exe
%RESGEN_MAKE% -j%COMPILE_NUM% -fMAKEFILE font_gen.exe -k 2> .\..\..\..\build\%MTK_PROJECT_PATH%\log\res_gen_font_tool.log
echo [%Time%] Compiled font_gen.exe >> %TIMELOGFILE%
if not exist font_gen.exe goto skip_font_gen
copy /y .\font_gen.exe ..\FontResgen\ >NUL
cd ..\FontResgen
if not exist FontFile\NUL md FontFile
if not exist debug\NUL md debug
if not exist font_gen.exe goto skip_font_gen
if not exist ..\..\..\vendor\font\inc md ..\..\..\vendor\font\inc
if exist ..\..\..\vendor\font\inc\*.* del /q ..\..\..\vendor\font\inc\*.*
font_gen.exe > .\debug\res_gen_font.log
echo [%Time%] Executed font_gen.exe >> %TIMELOGFILE%
copy /y .\FontFile\L_*.h ..\..\..\vendor\font\inc\ >NUL
copy /y .\FontFile\FontRes.c ..\CustResource\ >NUL
del /q .\FontFile\*.*
rd /s /q .\FontFile
cd ..\ResGenerator
echo Font Resgen Done
goto success_font_gen

:skip_font_gen
echo Font Resgen Error
echo Please Check again!!
exit 3

:success_font_gen

rem ************************************************************
rem ************** Start to Generate Resource ******************
rem ************** -Using Pixtel ResGenerator ******************
rem ************************************************************
rem goto skip_del_obj
if exist ..\..\customer\custresource\ref_list.txt del ..\..\customer\custresource\ref_list.txt > nul

rem if exist .\temp\ rd /S/Q .\temp\ >nul
rem if exist .\debug\ rd /S/Q .\debug\ >nul
rem if exist ..\CustomerInc\mmi_rp*.* del ..\CustomerInc\mmi_rp*.* > nul

if exist .\mtk_resgenerator.exe del .\mtk_resgenerator.exe > nul
if exist .\mtk_resgenerator.map del .\mtk_resgenerator.map > nul
if exist .\ref_list_merge.exe del .\ref_list_merge.exe > nul
if exist .\plmncreate.exe del .\plmncreate.exe > nul
if exist .\vf*.tmp del .\vf*.tmp > nul
if exist .\modis_vf*.obj del .\modis_vf*.obj > nul
if exist .\vf*.obj del .\vf*.obj > nul
if exist *.o del *.o > nul

:skip_del_obj


if not exist .\temp\ md .\temp\
if not exist .\debug\ md .\debug\
if not exist .\debug\obj md .\debug\obj
if not exist .\..\..\..\build\%MTK_PROJECT_PATH%\log\ md .\..\..\..\build\%MTK_PROJECT_PATH%\log\

rem ************************************************************
rem copy ref_list_xxx.txt
rem ************************************************************
if exist copy_ref_list.pl perl copy_ref_list.pl
echo [%Time%] Executed copy_ref_list.pl >> %TIMELOGFILE%

rem ************************************************************
rem *************** make and run ref_list_merge.exe ************
rem ************************************************************

echo -----------------make and run ref_list_merge.exe----------------
%RESGEN_MAKE% -j%COMPILE_NUM% -fMAKEFILE ref_list_merge.exe -k 2> .\..\..\..\build\%MTK_PROJECT_PATH%\log\res_gen_make_ref_list.log
echo [%Time%] Compiled ref_list_merge.exe >> %TIMELOGFILE%
if not exist ref_list_merge.exe goto RESGEN_REF_LIST_MERGE_ERR
ref_list_merge.exe > .\debug\res_gen_run_ref_list.log
echo [%Time%] Executed ref_list_merge.exe >> %TIMELOGFILE%
IF ERRORLEVEL 2 goto RESGEN_RUN_REF_LIST_MERGE_ERR

rem COPY ..\custresource\%prj%_MMI\ref_list.txt ..\custresource\ref_list.txt
COPY ..\custresource\PLUTO_MMI\ref_list.txt ..\custresource\ref_list.txt
if not exist ..\custresource\ref_list.txt goto RESGEN_REF_LIST_ERR
echo ------------------------------DONE------------------------------
rem ************************************************************
rem *************** make and run plmncreate.exe     ************
rem ************************************************************

echo ---------------------make and run plmncreate.exe-----------------
COPY ..\custresource\PLUTO_MMI\plmnlist.txt ..\custresource\plmnlist.txt
COPY ..\custresource\PLUTO_MMI\PlmnEnum.tmp ..\..\MMI\MiscFramework\MiscFrameworkInc\PlmnEnum.h
COPY ..\custresource\PLUTO_MMI\PlmnName.tmp ..\..\Service\NetSetSrv\PlmnName.c

if not exist .\..\..\..\build\%MTK_PROJECT_PATH%\log\ md .\..\..\..\build\%MTK_PROJECT_PATH%\log\
%RESGEN_MAKE% -j%COMPILE_NUM% -fMAKEFILE plmncreate.exe 2> .\..\..\..\build\%MTK_PROJECT_PATH%\log\res_gen_make_plmn.log
echo [%Time%] Compiled plmncreate.exe >> %TIMELOGFILE%
if not exist plmncreate.exe goto RESGEN_PLMN_ERR
plmncreate.exe > .\debug\res_gen_run_plmn.log
echo [%Time%] Executed plmncreate.exe >> %TIMELOGFILE%
IF ERRORLEVEL 2 goto RESGEN_RUN_PLMN_ERR
echo ------------------------------DONE------------------------------

rem ************************************************************
rem *************** make and run VKV2ResourceGen.exe ***********
rem ************************************************************
copy ..\custresource\PLUTO_MMI\VKV2.vkw ..\resgenerator > nul
copy ..\custresource\PLUTO_MMI\VKV2ResourceGen.exe ..\resgenerator > nul
if %customer%==PLUTO goto skip_copy_vkv2_customer
copy ..\custresource\%customer%_MMI\VKV2.vkw ..\resgenerator > nul
copy ..\custresource\%customer%_MMI\VKV2ResourceGen.exe ..\resgenerator > nul
:skip_copy_vkv2_customer
echo ------------------------------COPY VKV2 DONE------------------------------

echo ------------------------run VKV2ResourceGen.exe-------------------
if not exist VKV2ResourceGen.exe goto RESGEN_VKV2_ERR_1
if not exist VKV2.vkw goto RESGEN_VKV2_ERR_2
VKV2ResourceGen.exe > .\debug\VKV2ResourceGen.log
echo [%Time%] Executed VKV2ResourceGen.exe >> %TIMELOGFILE%
IF ERRORLEVEL 2 goto RESGEN_VKV2_ERR_6

if not exist gui_virtual_keyboard_res.h goto RESGEN_VKV2_ERR_3
if not exist res_virtual_keyboard.c goto RESGEN_VKV2_ERR_4
if not exist VKB.dat goto RESGEN_VKV2_ERR_5
movefile ..\resgenerator\gui_virtual_keyboard_res.h ..\..\Framework\GUI\GUI_INC\gui_virtual_keyboard_res.h
movefile ..\resgenerator\VKB.dat ..\..\Framework\GUI\GUI_INC\VKB.dat
COPY ..\resgenerator\res_virtual_keyboard.c ..\Res_MMI\res_virtual_keyboard.c

if exist ..\resgenerator\VKV2ResourceGen.exe del ..\resgenerator\VKV2ResourceGen.exe
if exist ..\resgenerator\VKV2.vkw del ..\resgenerator\VKV2.vkw
echo ------------------------------DONE------------------------------

rem ************************************************************
rem *************** make and run mtk_resgenerator.exe   ********
rem ************************************************************
:make_old_resgen
rem goto jump_old_resgen
echo ---------------make mtk_resgenerator.exe---------------
if not exist .\..\..\..\build\%MTK_PROJECT_PATH%\log\ md .\..\..\..\build\%MTK_PROJECT_PATH%\log\
%RESGEN_MAKE% %RESGEN_OPTION% -j%COMPILE_NUM% -fMAKEFILE mtk_resgenerator.exe -k 2> .\..\..\..\build\%MTK_PROJECT_PATH%\log\res_gen.log
echo [%Time%] Compiled mtk_resgenerator.exe >> %TIMELOGFILE%
if not exist mtk_resgenerator.exe goto RESGEN_MAKE_RESGEN_EXE_ERR
echo ------------------------------DONE------------------------------

rem ************************************************************
rem **********  Copy obj files for vendor app  *****************
rem ************************************************************
for %%i in (bmp2ems.o BMPLoader.o GIFLoader.o ResBytestream.o UCS2.o ImageGetDimension.o FontRes.o) do if exist .\debug\obj\mtk_resgenerator\%%i copy /y .\debug\obj\mtk_resgenerator\%%i ..\..\VendorApp\ResGenerator\obj\ >NUL

echo -----------------run mtk_resgenerator.exe---------------
mtk_resgenerator.exe -g -x > .\debug\res_gen_mtk_resgenerator.log
echo [%Time%] Executed mtk_resgenerator.exe >> %TIMELOGFILE%
IF ERRORLEVEL 2 goto RESGEN_RUN_RESGEN_EXE_ERR
echo ------------------------------DONE------------------------------
:jump_old_resgen
rem ************************************************************
rem *** Menu Tree Tool gen resource to copy back if needed *****
rem ************************************************************
if exist ..\custresource\CustMenuToolRes.c copy ..\custresource\CustMenuToolRes.c ..\custresource\CustMenuRes.c /y

rem ************************************************************
rem ************** Start to Generate Resource ******************
rem ************************************************************

echo -----------------clear intermediate files-----------------
rem if exist ..\Res_MMI\ rd /S/Q ..\Res_MMI\
rem if exist .\temp\ rd /S/Q .\temp\

if exist ..\custresource\CustENFBImgData copy ..\custresource\CustENFBImgData ..\..\..\MoDIS_VC9\MoDIS\CustENFBImgData /y
if exist ..\custresource\CustENFBImgData copy ..\custresource\CustENFBStrData ..\..\..\MoDIS_VC9\MoDIS\CustENFBStrData /y

rem ************************************************************
rem Generate the MTE image resource header file.
rem ************************************************************
perl mte_parse_img_usage.pl
echo [%Time%] Executed mte_parse_img_usage.pl >> %TIMELOGFILE%

rem ************************************************************
rem Generate the MSLT resource header file.
rem ************************************************************
if exist mslt_parse_info.pl perl mslt_parse_info.pl
echo [%Time%] Executed mslt_parse_info.pl >> %TIMELOGFILE%

rem ************************************************************
rem Generate the image_resource_usage.htm
rem ************************************************************
if exist resgen_log_info_gen.py ..\..\..\tools\python25\python resgen_log_info_gen.py
if exist output_image_html.pl perl output_image_html.pl
echo [%Time%] Executed output_image_html.pl >> %TIMELOGFILE%

rem ************************************************************
rem Generate Venus theme resource
rem ************************************************************
if exist venus_theme_generator.pl perl venus_theme_generator.pl
echo [%Time%] Executed venus_theme_generator.pl >> %TIMELOGFILE%

rem ************************************************************
rem Generate file list
rem ************************************************************
if exist generate_file_list.pl perl generate_file_list.pl
echo [%Time%] Executed generate_file_list.pl >> %TIMELOGFILE%

perl ..\..\..\tools\pack_dep_gcc.pl debug\dep\resgen.dep debug\dep plutommi\Customer\ResGenerator

rem ************************************************************
rem Generate used include path list
rem ************************************************************
..\..\..\tools\python25\python .\merge_dep.py

cd ..\..\..\

echo -----------------ResGenerator Complete!!-----------------
goto done

rem ************************************************************
rem ************** Error Handling and Messages *****************
rem ************************************************************
:RESGEN_REF_LIST_MERGE_ERR
echo Error in ResGenerating Process make merge ref_list.txt error!!
echo Please Check log file res_gen_make_ref_list.log !! 
exit 3

:RESGEN_RUN_REF_LIST_MERGE_ERR
echo Error in ResGenerating run merge ref_list.txt error!!
echo Please Check log file res_gen_run_ref_list.log !! 
exit 3

:RESGEN_REF_LIST_ERR
echo Error in ResGenerating Process ref_list.txt not exist!!
echo Please Check it !! 
exit 3

:RESGEN_PLMN_ERR
echo Error in ResGenerating Process make plmn error!!
echo Please Check log file res_gen_make_plmn.log !!
exit 3

:RESGEN_RUN_PLMN_ERR
echo Error in run plmncreate error!!
echo Please Check log file res_gen_run_plmn.log !!
exit 3

:RESGEN_MAKE_RESGEN_EXE_ERR
echo Error in ResGenerating Process make mtk_resgenerator.exe!!
echo Please Check log file res_gen.log !!
exit 3

:RESGEN_RUN_RESGEN_EXE_ERR
echo Error in ResGenerating Process run mtk_resgenerator.exe!!
echo Please Check log file res_gen_mtk_resgenerator.log !!
exit 3

:RESGEN_VKV2_ERR_1
echo Error in ResGenerating Process VK_V2 error1!!
echo Please Check again!!
exit 3

:RESGEN_VKV2_ERR_2
echo Error in ResGenerating Process VK_V2 error2!!
echo Please Check again!!
exit 3

:RESGEN_VKV2_ERR_3
echo Error in ResGenerating Process VK_V2 error3!!
echo Please Check again!!
exit 3

:RESGEN_VKV2_ERR_4
echo Error in ResGenerating Process VK_V2 error4!!
echo Please Check again!!
exit 3

:RESGEN_VKV2_ERR_5
echo Error in ResGenerating Process VK_V2 error5!!
echo Please Check again!!
exit 3

:RESGEN_VKV2_ERR_6
echo Error in ResGenerating Process VK_V2 error6!!
echo Please Check VKV2ResourceGen.log!!
exit 3

rem ************************************************************
rem **************** Menu To Select Project ********************
rem ************************************************************
:menu
@echo off
rem cls
rem echo MediaTek Resource Generator
rem echo. 
rem echo Please select one project to generate resource...
rem echo.
rem echo    SELECT MENU
rem echo    ==========
rem echo.
rem echo    1 - PLUTO
rem echo.
rem echo    Q - Quit
rem choice /C:1Q>nul

rem if errorlevel 23 goto done
rem if errorlevel 1 goto PLUTO:
goto PLUTO:

goto done


:PLUTO
set prj=PLUTO
goto a:

:done
