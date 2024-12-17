@echo off 

mkdir trida
cd trida

for /L %%x in (1,1,3) do (
  set /p prijmeni="Zadejte prijmeni vaseho spoluzaka: "
  set /p jmeno="Zadejte jmeno vaseho spoluzaka: "

  mkdir "%prijmeni%"
  cd "%prijmeni%"

  echo %jmeno% %prijmeni% > info%%x.txt  

  cd ..
)

cd ..
