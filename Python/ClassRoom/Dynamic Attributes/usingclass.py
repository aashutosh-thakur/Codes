class MyClass:
    def __setattr__(self, name, value):
        print(f"Setting attribute '{name}' to '{value}'")
        super().__setattr__(name, value)
    def __delattr__(self, name):
        print(f"Deleting attribute '{name}'")
        super().__delattr__(name)
# Create an instance of MyClass
obj = MyClass()
# Adding dynamic attribute
obj.asdf = 100
# Retrieving dynamic attribute
print("Dynamic attribute:", obj.asdf)
# Deleting dynamic attribute
del obj.asdf
obj = MyClass()
obj.attr1=42 # Triggers __setattr__, prints: setting attribute 'attr1' to '41'
del obj.attr1 # Triggers __delattr__, prints: Deleting attribute 'attr1'