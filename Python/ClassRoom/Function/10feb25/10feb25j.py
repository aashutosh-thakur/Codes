def fact(a):
    if a==1:
        return 1
    else:
        return a*fact(a-1)

a= int(input("Enter the number: "))
print(fact(a))