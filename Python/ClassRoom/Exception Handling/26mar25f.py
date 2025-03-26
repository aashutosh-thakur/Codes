def check_age(age):
    if age<18:
        raise Exception("Age must be 18 or older")
    return "Age is fine"
try:
    asdf=check_age(20)
except Exception as e:
    print("Exception: ",e)
else:
    print(asdf)