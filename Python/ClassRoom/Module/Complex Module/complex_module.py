def factorial(n):
    if n==0:
        return 1
    else:
        return n * factorial(n-1)

def fibonacci(n):
    sequence = [0,1]
    for i in range(2,n):
        sequence.append(sequence[-1]+sequence[-2])
    return sequence

def is_prime(number):
    if number <= 1:
        return False
    for i in range(2, int(number**0.5)+1):
        if number % i==0:
            return False
    return True