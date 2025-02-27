#!/bin/bash

count=0
num=2
echo "First 50 prime numbers:"
while [ $count -lt 50 ];
    do
    is_prime=1
    for ((i=2; i*i<=num; i++));
	do
        if [ $((num % i)) -eq 0 ];
	    then
            is_prime=0
            break
        fi
    done
    if [ $is_prime -eq 1 ];
	then
        echo $num
        ((count++))
    fi
    ((num++))
done
