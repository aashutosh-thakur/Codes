# Create a Python program to display the patterns
# USING FOR LOOP.
# 1. If input = 5
# print 
# A A A A A 
# B B B B 
# C C C 
# D D 
# E 
total_input=int(input("Enter the number: "))
to_print=65
total_input1=total_input
for i in range(total_input):
    to_p=chr(to_print)
    for j in range(total_input1):
        print(to_p,end=" ")
    total_input1=total_input1-1
    to_print=to_print+1
    print()