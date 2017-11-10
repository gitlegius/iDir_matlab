@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2014b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2014b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=perebor8pskTPC_mex
set MEX_NAME=perebor8pskTPC_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for perebor8pskTPC > perebor8pskTPC_mex.mki
echo COMPILER=%COMPILER%>> perebor8pskTPC_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> perebor8pskTPC_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> perebor8pskTPC_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> perebor8pskTPC_mex.mki
echo LINKER=%LINKER%>> perebor8pskTPC_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> perebor8pskTPC_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> perebor8pskTPC_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> perebor8pskTPC_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> perebor8pskTPC_mex.mki
echo BORLAND=%BORLAND%>> perebor8pskTPC_mex.mki
echo OMPFLAGS= >> perebor8pskTPC_mex.mki
echo OMPLINKFLAGS= >> perebor8pskTPC_mex.mki
echo EMC_COMPILER=msvc120>> perebor8pskTPC_mex.mki
echo EMC_CONFIG=optim>> perebor8pskTPC_mex.mki
"C:\Program Files\MATLAB\R2014b\bin\win64\gmake" -B -f perebor8pskTPC_mex.mk
