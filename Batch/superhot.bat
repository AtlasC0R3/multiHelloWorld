@echo off
:super
echo SUPER
timeout 1 >nul
rem Why the hell doesn't timeout work in Wine!?
echo HOT
timeout 1 >nul
goto super