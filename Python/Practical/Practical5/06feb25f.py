# Create a Python program to display the patterns
# USING while LOOP.
# 6. If input = 5 
# print 
# * * * * *
#         *
# * * * * *
#         *
# * * * * * 
user_input=int(input("Enter the number: "))
i=0
j=0
while i < user_input:
    while j < user_input:
        if i%2==0:
            print("*",end=" ")
        else:
            print(" ",end=" ")
            if j==user_input-2:
                print("*",end=" ")
        j+=1
    print()
    i+=1
    j=0