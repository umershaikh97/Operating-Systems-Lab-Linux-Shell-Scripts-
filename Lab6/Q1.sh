filename=$(zenity --entry --title "Creating File" --text "Enter Name for txt file")
cd #Return to login directory
cd Desktop # change directory to Desktop, As we want to create .txt file on desktop
>>$filename.txt
