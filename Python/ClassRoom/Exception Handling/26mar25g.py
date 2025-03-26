class CustomError(Exception):
    pass
def some_function():
    raise CustomError("This is a custom error")
try:
    some_function()
except CustomError as e:
    print("Caught custom exception: ",e)