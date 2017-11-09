@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2014b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2014b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=HDLC_extract_2_mex
set MEX_NAME=HDLC_extract_2_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for HDLC_extract_2 > HDLC_extract_2_mex.mki
echo COMPILER=%COMPILER%>> HDLC_extract_2_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> HDLC_extract_2_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> HDLC_extract_2_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> HDLC_extract_2_mex.mki
echo LINKER=%LINKER%>> HDLC_extract_2_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> HDLC_extract_2_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> HDLC_extract_2_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> HDLC_extract_2_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> HDLC_extract_2_mex.mki
echo BORLAND=%BORLAND%>> HDLC_extract_2_mex.mki
echo OMPFLAGS= >> HDLC_extract_2_mex.mki
echo OMPLINKFLAGS= >> HDLC_extract_2_mex.mki
echo EMC_COMPILER=msvc120>> HDLC_extract_2_mex.mki
echo EMC_CONFIG=optim>> HDLC_extract_2_mex.mki
"C:\Program Files\MATLAB\R2014b\bin\win64\gmake" -B -f HDLC_extract_2_mex.mk
