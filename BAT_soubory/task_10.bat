@echo off 

set /p cont="Chcete pokracovat(y/Y): "
if %cont% == Y (exit 0)
if %cont% == y (exit 0)

set /p nameDir="Zadejte jmeno slozky: "
mkdir "%nameDir%"
cd "%nameDir%

set /p firstName="Zadejte vase jmeno: "
set /p lastName="Zadejte vase prijmeni: "
echo Your full name is %firstName% %lastName% >> info.txt

set /p dateOfBirth="Zadejte vase datum narozeni: "
echo Your date of birth is %dateOfBirth% >> info.txt
type info.txt

pause

set /p adress="Zadejte vasi adresu: "
echo Adress is %adress% >> info.txt
type info.txt

cd ..
rmdir /q /s "%nameDir%"