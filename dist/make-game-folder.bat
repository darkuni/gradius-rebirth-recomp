@echo off
rem Builds the "game" folder from your own WAD. Drag your WAD onto this file, or put it in this
rem folder and double-click. Needs Python 3.11+ (python.org - tick "Add python.exe to PATH").
cd /d "%~dp0"
set WAD=%~1
if "%WAD%"=="" for %%f in (*.wad) do set WAD=%%f
if "%WAD%"=="" (echo No WAD found. Put your Gradius ReBirth WAD next to this file, or drag it onto it. & pause & exit /b 1)
where python >nul 2>nul || (echo Python 3.11+ is required: https://www.python.org/downloads/ & pause & exit /b 1)
python -m pip install --quiet --disable-pip-version-check libWiiPy
python tools\prepare_wad.py "%WAD%" game
if errorlevel 1 (echo Failed - see the messages above. & pause & exit /b 1)
echo.
echo Done. Run gradius.exe to play.
pause
