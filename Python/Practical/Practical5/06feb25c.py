# Create a Python program to display the patterns
# USING while LOOP.
# 3. If input = 5 
# print 
# * - * - *
# - * - * -
# * - * - *
# - * - * -
# * - * - *
user_input=int(input("Enter a number: "))
i=0
j=0
while i <user_input:
    while j <user_input+1:
        if(i+j)%2==0:
            print("*",end=" ")
        else:
            print("_",end=" ")
        j+=1
    print()
    i+=1
    j=0