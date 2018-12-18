echo "Enter Number to find its Factorial : "
read number
factorial=1
for(( i=$number;i>=1;i--))
do
  factorial=`expr $factorial \* $i`
done
echo $factorial
