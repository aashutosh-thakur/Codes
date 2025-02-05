# Create a Python program to display the patterns
# USING FOR LOOP.
# 4.   If input = 5 
# print 
#     *
#    * *
#   * * *
#  * * * *
# * * * * *
user_input=int(input("Enter the number: "))
for i in range(1,user_input+1):
        for j in range(user_input-i):
            print(" ", end="")
        for k in range(i):
            print("*", end=" ")
        print()