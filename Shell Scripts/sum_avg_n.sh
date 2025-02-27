#!/bin/bash

sum=0

echo "Enter the number of elements:"
read n

for (( i=1; i<=n; i++ ))
do
  echo "Enter number $i:"
  read num

  sum=$(( $sum + $num))
done

average=$(( $sum / $n))

echo "Sum: " $sum
echo "Average: " $average
