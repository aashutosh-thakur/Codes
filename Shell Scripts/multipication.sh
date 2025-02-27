echo "Enter a number: "
read a
multi=1

for((i=1;i<=10;i++))
do
multi=$(($a*$i))
echo "$a*$i=$multi"
done
