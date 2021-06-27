@echo off

set PS3DEV=./ps3dev
set PS3SDK=/c/PSDK3v2
set WIN_PS3SDK=C:/PSDK3v2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%PS3DEV%/ppu/bin;

rem %PATH%;

if exist mamba\lz\*.lz.bin del   mamba\lz\*.lz.bin>nul
if exist mamba\lz          rmdir mamba\lz

if exist mamba\debug\*.bin del   mamba\debug\*.bin>nul
if exist mamba\debug             rmdir mamba\debug

if exist mamba\*.bin del mamba\*.bin>nul
if exist mamba       rmdir mamba

if exist *.bin del /q *.bin>nul

if not exist mamba       mkdir mamba
if not exist mamba\lz    mkdir mamba\lz
if not exist mamba\debug mkdir mamba\debug

make clean --no-print-directory

rem make all --no-print-directory
make release --no-print-directory
rem make debug   --no-print-directory

if not exist mamba\debug\mamba_488C.lz.bin rd mamba\lz>nul
if not exist mamba\debug\mamba_488C.bin rd mamba\debug>nul

FOR /F "usebackq" %%A IN ('"mamba\mamba_488C.bin"') DO set SIZE=%%~zA
SET SIZE=%SIZE:~0,3%,%SIZE:~3%
echo mamba_488C.bin is %SIZE% bytes

pause
