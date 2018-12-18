var=$(zenity --entry --title="User Verification" --text="Enter Username to verify")
getend passwd $var > /dev/null 2&>1

if [ $? -eq 0 ]
then 
	echo "User Exists"
else
	echo "User Does'nt exists"
fi
