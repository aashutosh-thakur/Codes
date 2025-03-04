# You are building a student management system. Implement the following:
# ·        Create a dictionary called student_records where each key is a student ID (e.g., roll number) and the student’s name, age, and grade value.
# ·        Allow the user to add new student records.
# ·        Display the details of a specific student given their ID.
student_detail={}
total_entry=int(input("Enter total number of Entry: "))
for i in range(total_entry):
    Name=input("Enter your Name: ")
    Enrollment=int(input("Enter your Enrollment: "))
    Age=int(input("Enter your Age: "))
    Grade=input("Enter Your Grade: ")
    student_detail[Enrollment]={'Name': Name, 'Age': Age,'Grade': Grade}
search=int(input("Enter the enrollment to search: "))
if search in student_detail:
    record=student_detail[search]
    print(f"Name: {record['Name']}")
    print(f"Age: {record['Age']}")
    print(f"Grade: {record['Grade']}")
else:
    print("Wrong Input")