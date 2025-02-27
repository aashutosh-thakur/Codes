echo "Enter a Number: "
read a
num=1
for((i=1;i<=a;i++))
do
num=$(($num*$i))
done
echo "Factorial of $a= $num"

