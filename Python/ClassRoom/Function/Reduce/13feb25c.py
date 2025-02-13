#Using reduce with an initializer
from functools import reduce
def factorial(n):
    return reduce(lambda x, y: x*y, range(1,n+1))
print(factorial(int(input("Enter the number: "))))