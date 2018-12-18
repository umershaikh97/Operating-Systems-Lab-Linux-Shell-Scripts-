echo Enter Marks obtained out of 100
read m 
if [ $m -ge 81 ]
then 
   if [ $m -le 100 ]
   then 
   echo Grade : A
   fi
fi
if [ $m -ge 51 ]
then 
   if [ $m -le 80 ]
   then 
   echo Grade : B
   fi
fi
if [ $m -ge 0 ]
then 
   if [ $m -le 50 ]
   then 
   echo Grade : F
   fi
fi