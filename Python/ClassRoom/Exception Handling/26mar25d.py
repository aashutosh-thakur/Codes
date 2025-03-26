try:
    # Code that may raise exception
    result = int("not a number")
except (ValueError,TypeError) as e:
    #Handle Mulotiple Error
    print("ValueError or TypeError occured: ",e)