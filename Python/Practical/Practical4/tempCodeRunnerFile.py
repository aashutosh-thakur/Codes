# Create a Python program to display the patterns
# USING FOR LOOP.
# 7.  If input = 5 
# print 
# 1
# 1 2
# 1 2 3
# 1 2 3 4
# 1 2 3 4 5
user_input=int(input("Enter the number: "))
for i in range(user_input):
    n=1
    for j in range(i+1):
        print(n,end=" ")
        n=n+1
    print()