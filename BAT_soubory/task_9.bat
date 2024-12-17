@echo off 

set a=%1
set b=%2

set /a soucet=%a%+%b%
set /a odecet=%a%-%b%
set /a nasobek=%a%*%b%
set /a delenec=%a%/%b%

echo %a%+%b%=%soucet%
echo %a%-%b%=%odecet%
echo %a%*%b%=%nasobek%
echo %a%/%b%=%delenec%