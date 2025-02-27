echo "Enter three number to find sum and average"
read a
read b
read c
sum=$(($a+$b+$c))
average=$(($sum/3))
echo "Sum is: " $sum
echo "Average is: " $average
