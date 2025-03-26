try:
    result= int("string")
except ZeroDivisionError as e:
    print("Caught a ZeroDivisionError: ",e)
except ValueError as e:
    print("Caught a ValueError: ",e)
except Exception as e:
    print("Caught a general exception: ",e)