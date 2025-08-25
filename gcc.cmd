@"%~dp0tools\pour_wrapper_windows.exe" --chdir "%~dp0." --dont-print-commands --run foreign-linux "/usr/bin/gcc" %* && exit /B 0 || exit /B 1
