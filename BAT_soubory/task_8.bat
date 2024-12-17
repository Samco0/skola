@echo off 

ping 8.8.8.8 -n 1 >nul
if errorlevel 1 (
	echo Internet je dostupny
) else (
	echo Internet neni dostupny :3 
)

pause