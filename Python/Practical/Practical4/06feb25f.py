# Create a Python program to display the patterns
# USING FOR LOOP.
# 6. If input = 5 
# print 
# * * * * *
#         *
# * * * * *
#         *
# * * * * * 
user_input=int(input("Enter the number: "))
for i in range(user_input):
    for j in range(user_input):
        if i%2==0:
            print("*",end=" ")
        else:
            print(" ",end=" ")
            if j==user_input-2:
                print("*",end=" ")
    print()