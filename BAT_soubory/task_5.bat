@echo off 

mkdir vyuka

cd vyuka

for %%x in (A B C) do (
    for /l %%y in (1,1,4) do (
        mkdir %%y.%%x	
    )
)

cd..
tree vyuka