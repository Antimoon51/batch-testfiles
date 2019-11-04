setlocal EnableDelayedExpansion 
SET h=1
SET c=4
FOR /L %%N IN (1,1,%c%) Do (
	SET test!h!=%%N
	SET /a h+=1
)
echo %test3%
echo %h%
set l=1
FOR /L %%G IN (1,1,%c%) DO (
	echo 
	SET /a l+=1
)
echo %l%
ENDLOCAL
pause
