#Creating a nested list
school=[["John","Emma","Sam"], #Class 1
        ["Amy","Tom","Tim"], #class 2
        ["Sara","Anna","Mia"]] #Class 3
#Accessing elements in the nested list
print("The whole school: ",school)
#Accessing each class
for i in range(len(school)):
    print("Class ",i+1,": ",school[i])
#Accessing each student
for i in range(len(school)):
    for j in range(len(school[i])):
        print("Student ",j+1,"in class ",i+1,": ",school[i][j])