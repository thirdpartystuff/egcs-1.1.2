@"%~dp0tools\pour_wrapper_windows.exe" --chdir "%~dp0." --run foreign-linux "/usr/bin/ar" %* && exit /B 0 || exit /B 1
