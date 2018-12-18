
echo Enter Number : 
read number
echo Now Enter Base : 
read base
ans=1
while [ $number -gt $base ]
do
	ans=`expr $ans + 1`
	number=`expr $number / $base`
done
echo $ans

