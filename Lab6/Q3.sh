zOpenPath="$(zenity --file-selection)"
if [ "$zOpenPath" != "" ]
then
zData=$(cat "$zOpenPath")
zNewData=$(echo -n "$zData" | zenity --text-info --editable )
fi

