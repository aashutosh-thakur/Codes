try:
    result = 10/2
except ZeroDivisionError as e:
    print("Error: Cannot divide by zero!")
else:
    print("No exception occured, result is: ",result)
finally:
    print("This block will always execute")