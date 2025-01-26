# You are a teacher and you have the scores of your students on a test. The scores are stored in a list. Your task is to write a Python program to find the median score. If the number of scores is even, the median is the average of the two middle scores.
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