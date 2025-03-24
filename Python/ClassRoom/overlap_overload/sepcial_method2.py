class MyClass:
    def __init__(self, value):
        self.value=value
    def __add__(self, other):
        return self.value+other.value
    def __sub__(self, other):
        return self.value-other.value
    def __mul__(self, other):
        return self.value*other.value
    def __truediv__(self, other):
        return self.value / other.value
    def __eq__(self, other):
        return self.value==other.value
    def __lt__(self, other):
        return self.value<other.value
    def __gt__(self, other):
        return self.value>other.value
#Create instances
obj1=MyClass(5)
obj2=MyClass(3)
print("Addition: ", obj1+obj2)
print("Substration: ", obj1-obj2)
print("Multiplication: ", obj1*obj2)
print("Division: ", obj1/obj2)
print("Equality: ", obj1==obj2)
print("Less Than: ", obj1<obj2)
print("Greater Than: ", obj1>obj2)