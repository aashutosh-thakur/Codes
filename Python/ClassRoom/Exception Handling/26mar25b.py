try:
    # Code that may raise an exception
    result=10/0
except ZeroDivisionError as e:
    # Code to handle the exception
    print("Error: Cannot divide by Zero!")
    print(f"Exception message: {e}")