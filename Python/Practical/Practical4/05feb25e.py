# Create a Python program to display the patterns
# USING FOR LOOP.
# 5.  If input = 5 
# print 
# *
# * *
# *   *
# *      *
# * * * * *
user_input=int(input("Enter the number: "))
for i in range(user_input):
    for j in range(i+1):
        if j==0 or j==i:
            print("*",end=" ")
        elif i==user_input-1:
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()