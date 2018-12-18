echo "Enter Number : "
read number
for(( a=1;a<=number;a=a+2))
do
	for(( b=a;b<=number;b=b+2))
	do
	echo -n $b
	done
echo ""

done


