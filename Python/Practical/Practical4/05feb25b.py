# Create a Python program to display the patterns
# USING FOR LOOP.
# 2.  If input = 5 
# print 
# 1 
# 2 3 
# 4 5 6 
# 7 8 9 10 
# 11 12 13 14 15
user_input=int(input("Enter the number: "))
number=1
for i in range(user_input):
    for j in range(i+1):
        print(number,end=" ")
    number=number+1
    print()