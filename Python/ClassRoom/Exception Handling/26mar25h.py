class CustomError(Exception):
    pass
def divide_numbers(a,b):
    if b==0:
        raise ZeroDivisionError("You can't divide by zero!")
    return a / b
def check_value(value):
    if value>0:
        raise CustomError("+ve value not allowed!")
    return value
try:
    result=divide_numbers(10,2)
    value=check_value(result)
except ZeroDivisionError as e:
    print("Caught a ZeroDivisionError: ",e)
except CustomError as e:
    print("Caught  a CustomError: ",e)
else:
    print("All operations successed, result is: ",result)
finally:
    print("Execution Completed")