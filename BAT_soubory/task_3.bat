@echo off 

set bobik="frfr"
mkdir %bobik%

set /p delete="You wish to delete me? Y/N "

if %delete%==Y goto :dodelete
if %delete%==y goto :dodelete
goto :nodelete

:dodelete
rd /s /q %bobik%

:nodelete
dir