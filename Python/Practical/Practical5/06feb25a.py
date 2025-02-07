# Create a Python program to display the patterns
# USING WHILE LOOP.
# 1. If input = 5 
# print 
# A A A A A 
# B B B B 
# C C C 
# D D 
# E
user_input=int(input("Enter the number: "))
to_print=65
total_input1=user_input
i=0
j=0
while i <user_input:
    to_p=chr(to_print)
    while j <total_input1:
        print(to_p,end=" ")
        j=j+1
    total_input1=total_input1-1
    to_print=to_print+1
    print()
    i+=1
    j=0