#Calculating Factorials using Recursion
factorial = lambda n: 1 if n==1 else n* factorial(n-1)
print("Factorial of 5: ",factorial(5))