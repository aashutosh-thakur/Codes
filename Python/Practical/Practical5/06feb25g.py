# Create a Python program to display the patterns
# USING while LOOP.
# 7.  If input = 5 
# print 
# 1
# 1 2
# 1 2 3
# 1 2 3 4
# 1 2 3 4 5
user_input=int(input("Enter the number: "))
i=0
j=0
while i < user_input:
    n=1
    while j < i+1:
        print(n,end=" ")
        n=n+1
        j+=1
    print()
    i+=1
    j=0