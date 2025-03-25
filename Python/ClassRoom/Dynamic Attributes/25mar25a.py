class vehicle:
    def __init__(self, name, number):
        self.name=name
        self.number=number
v1=vehicle("Altroz", 8031)
print(v1.name)
print(v1.number)
choice=input("Which attribute you want to access? ")
if choice=="name":
    print(v1.name)
elif choice=="number":
    print(v1.number)
else:
    print("--invalid--")
print(getattr(v1, choice, "--invalid--"))
choice=input("Which attribute you want to change? ")
value=input("What attribute do you want to change this to= ")
setattr(v1, choice, value)
print(v1.name)
print(v1.number)
print(v1.colour)
print(hasattr(v1,"asdf"))
delattr(v1,"name")
print(v1.number)
# print(v1.name) #Name has been deleted