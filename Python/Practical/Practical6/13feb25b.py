# Student Grade Analyzer:  As a teacher, you have a list of student names and scores (out of 100) for a test.
# Write a Python program that calculates the average score and identifies students who scored above the average.
total_student=int(input("Enter the total number of student: "))
t_student=[]
for i in range(total_student):
    student_name=input("Enter the name of the student: ")
    mark=float(input("Enter the mark: "))
    student={"name": student_name,"mark": mark}
    t_student.append(student)
total_mark=sum(student["mark"] for student in t_student)
avg_mark=total_mark/total_student
for student in t_student:
    if student["mark"]>=avg_mark:
        print(f"Name: {student['name']}, Mark: {student['mark']}")