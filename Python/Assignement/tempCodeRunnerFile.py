import random
import statistics
student_mark=[]

odd_even=input("Enter\nOdd for odd number of student\nEven for Even number of student\n:-")

if odd_even=='Odd' or odd_even == 'odd' or odd_even == 'ODD':
    for i in range(49):
        student_mark.append(random.randint(1, 50))
    print("Number Entered: ",student_mark)
    print("Median Score: ",statistics.median(student_mark))
else:
    for i in range(50):
        student_mark.append(random.randint(1, 50))
    print("Number Entered: ",student_mark)
    print("Median Score: ",statistics.median(student_mark))