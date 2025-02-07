# Create a Python program to display the patterns
# USING while LOOP.
# 4.   If input = 5 
# print 
#     *
#    * *
#   * * *
#  * * * *
# * * * * *
user_input=int(input("Enter the number: "))
i=0
j=0
k=0
while i <user_input+1:
        while j <user_input-i:
            print(" ", end="")
            j+=1
        while k < i:
            print("*", end=" ")
            k+=1
        print()
        i+=1
        j=0
        k=0