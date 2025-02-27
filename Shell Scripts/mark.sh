#/bin/bash

echo "Enter Marks for three subject"
read a
read b
read c
total=$((a+b+c))
avg=$((total/3))
if [ $avg -le 50 ]; then
	echo "C"
elif [ $avg -gt 50 ] && [ $avg -le 70 ]; then
	echo "B"
elif [ $avg -gt 70 ]; then
	echo "A"
fi
