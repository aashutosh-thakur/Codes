class Calculator:
    def add(self, a, b, c=None): 
        if c is not None:
            return a + b + c
        else:
            return a + b
calc = Calculator()
print("Adding two numbers:", calc.add(2, 3)) 
print("Adding three numbers:", calc.add(2, 3, 4))