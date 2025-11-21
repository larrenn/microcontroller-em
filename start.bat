@echo off
chcp 65001
echo =================================
echo  Запуск эмулятора микроконтроллера
echo =================================
cd /d "%~dp0"
renode scripts\microcontroller.resc
pause