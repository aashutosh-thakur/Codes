#Loop over another dict values
another_dict = dict(name='Alice', age=25, city='San Francisco')
for val in another_dict.values():
    print(val)
print("_____________________________")
#Loop over another dict keys
for key in another_dict.keys():
    print(key)
print("_____________________________")
for key,val in another_dict.items():
    print(key,val)

