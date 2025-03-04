# Create a Python program to display the patterns
# USING FOR LOOP.
# 3. If input = 5 
# print 
# * - * - *
# - * - * -
# * - * - *
# - * - * -
# * - * - *
user_input=int(input("Enter a number: "))
for i in range(user_input):
    for j in range(user_input):
        if(i+j)%2==0:
            print("*",end=" ")
        else:
            print("_",end=" ")
    print()