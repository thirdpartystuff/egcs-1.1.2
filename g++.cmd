@echo off
setlocal
cd "%~dp0" || exit /B 1
"%~dp0tools\pour_wrapper_windows.exe" --run foreign-linux "usr/bin/g++" %* && exit /B 0 || exit /B 1
