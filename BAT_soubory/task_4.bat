@echo off 

for %%f in (*.bat) do (
    echo ^>^>^> %%f:
    type %%f
)