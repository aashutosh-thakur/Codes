##write a shell script to create a data base of following items
##list of student, class, subject, percentage, age
##and divide different list according to age bracket -->5-10,11-16,17-21

echo "Enter new Data"
echo "Visit the Data"
echo "Exit"
read a
i=0
if(a==1)
	i=i+1
fi
case $a in
	1)
	read -p "Enter the Name: " name
	read -p "Enter the class: " class
	read -p "Enter the subject: " subject
	read -p "Enter the percentage: " percentage
	read -p "Enter the age: "age

	2)
	read -p "Enter the age group: " group
	if[ $group -ge 5]&&[ $group -lt 10]
		echo "Name= name"
		echo "Class= class"
		echo "Subject= subject"
		echo "Percentage= percentage"
		echo "Age= age"

	elif[ $group -ge 11]&&[ $group lt 16]
		echo "Name= name"
		echo "Class= class"
		echo "Subject= subject"
		echo "Percentage= percentage"
		echo "Age= age"

	elif[ $group -ge 17]&&[ $group lt 21]
		echo "Name= name"
		echo "Class= class"
		echo "Subject= subject"
		echo "Percentage= percentage"
		echo "Age= age"

	3)
	echo "Enter ctrl + x to exit"




