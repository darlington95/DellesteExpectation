@echo off
if not "%VCINSTALLDIR%" == "" goto L1
set VCINSTALLDIR=C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\
:L1

SET TYPE=RELEASE
if "%1" == "DEBUG" (set TYPE=DEBUG)
if "%1" == "clean" goto clean
if "%2" == "clean" goto clean

:all
pushd ..\..\SAMPLES
call MAKE %TYPE% BUILD X86
popd
echo ----------------------------
echo DellesteExpectation
echo ----------------------------
SET PLATFORM=x86
call "%VCINSTALLDIR%\vcvarsall.bat" x86
nmake -f makefile all
goto eof

:clean
pushd ..\..\SAMPLES
call MAKE %TYPE% CLEAN X86
popd
SET PLATFORM=x86
call "%VCINSTALLDIR%\vcvarsall.bat" x86
nmake -f makefile clean
goto eof

:eof
