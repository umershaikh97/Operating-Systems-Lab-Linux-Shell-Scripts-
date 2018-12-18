echo Enter your year of birth : 
read yob
if [ `expr $yob % 4` -eq 0 ]
then 
   echo You were born in a leap year
else
   echo Your Age is `expr 2017 - $yob`
fi