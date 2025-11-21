@echo off
chcp 65001
echo =================================
echo    ЗАПУСК ЭМУЛЯТОРА МК
echo =================================
echo.
echo Запуск Renode...
renode scripts\microcontroller.resc
pause