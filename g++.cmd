@"%~dp0tools\pour_wrapper_windows.exe" --chdir "%~dp0." --dont-print-commands --run foreign-linux "/usr/bin/g++" %* && exit /B 0 || exit /B 1
