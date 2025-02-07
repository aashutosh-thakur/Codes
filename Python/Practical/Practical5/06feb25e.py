# Create a Python program to display the patterns
# USING while LOOP.
# 5.  If input = 5 
# print 
# *
# * *
# *   *
# *      *
# * * * * *
user_input=int(input("Enter the number: "))
i=0
j=0
while i < user_input:
    while j < i+1:
        if j==0 or j==i:
            print("*",end=" ")
        elif i==user_input-1:
            print("*",end=" ")
        else:
            print(" ",end=" ")
        j+=1
    print()
    i+=1
    j=0