@echo off
setlocal
cd "%~dp0" || exit /B 1
"%~dp0tools\pour_wrapper_windows.exe" --run foreign-linux "usr/bin/ranlib" %* && exit /B 0 || exit /B 1
