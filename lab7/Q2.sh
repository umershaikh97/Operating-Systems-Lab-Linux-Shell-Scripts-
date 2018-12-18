echo -n "Enter N : "
read n
for((i=1;i<=n;i++))
do
echo "Hello $i" 
sleep 2
echo "Do You want to kill the process ? Press 1 to kill OR Press 0 to skip"
read input
if [ $input -eq 1 ]
then
killall -e bash 'Q2'
fi
clear
done
