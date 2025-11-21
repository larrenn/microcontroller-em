@echo off
chcp 65001
echo ================================
echo    SIMPLE LAUNCHER
echo ================================
echo.

cd C:\Users\Student\Desktop\microcontroller-emulator

echo Testing file existence...
if exist "scripts\microcontroller.resc" (
    echo File found! Starting Renode...
    renode scripts\microcontroller.resc
) else (
    echo ERROR: File not found!
    echo Available files in scripts:
    dir scripts\
)

pause