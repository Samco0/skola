@echo off 

mkdir patra
cd patra

for %%x in (1,2,3,4) do (
  mkdir %%x
  cd %%x
  for %%y in (1,2) do (
    mkdir %%x.%%y
  )
  cd..
)

tree