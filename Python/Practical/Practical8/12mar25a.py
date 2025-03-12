# You are building a user registration system. Write a function that checks whether a given password meets the following criteria:
# 1.    At least 8 characters long
# 2.    Contains at least one uppercase letter
# 3.    Contains at least one lowercase letter
# 4.    Contains at least one digit
password=input("Enter the password: ")
count_u=0
count_l=0
count_d=0
if len(password)>7:
    for word in password:
        if word.isupper():
            count_u=1
        elif word.islower():
            count_l=1
        elif word.isnumeric():
            count_d=1
else:
    print("Password is less than 8 digit")
if count_u+count_l+count_d==3:
    print("Password meet the criteria")
elif count_u==0 and count_l==0:
    print("Upper and Lower case is missing")
elif count_d==0 and count_l==0:
    print("Lower case and Digit is missing")
elif count_u==0 and count_d==0:
    print("Upper case and Digit is missing")
elif count_u==0:
    print("Upper Case is missing")
elif count_l==0:
    print("Lower Case is missing")
elif count_d==0:
    print("Digit Case is missing")