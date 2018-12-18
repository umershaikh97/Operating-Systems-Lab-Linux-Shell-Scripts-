fib()
{
  if [ $1 -le 1 ] 
  then
  echo -n "$1 "
  else 
  echo -n "$(($(fib $(($1-1)))+$(fib $(($1-2))))) " 
  fi
}

echo -n "Enter N for Fibbonacci series : "
read x
for((i=0;i<x;i++))
do
fib $i
done
echo

