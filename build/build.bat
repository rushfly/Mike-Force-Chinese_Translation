@echo off

del /f *.pbo  > nul 2>&1

for /f %%i in ('dir /B /A:D ..\maps\*') do (
	echo.
	echo Building PBO for map %%i 
	xcopy /Q /E /Y ..\mission .\%%i\
	xcopy /Q /E /Y ..\maps\%%i .\%%i\
	if exist .\custom\ xcopy /Q /E /Y .\custom .\%%i\
	bin\PBOConsole.exe -pack %%i ..\build_output\vn_mf.%%i.pbo  > nul 2>&1
	rmdir /S /Q %%i
	echo Done.
)

pause