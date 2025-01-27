
another_dict = dict(name='Alice', age=25, city='San Francisco')
#Getting keys
keys=another_dict.keys()
print("Keys: ",keys)
#Getting Values
values=another_dict.values()
print("Values: ",values)
#Getting key-value pairs (items)
items= another_dict.items()
print("Items: ",items)
#Checking membership
print("Is 'age' a key in my_dict?",'age' in another_dict)
print("Is 30 a value in my_dict?",30 in another_dict.values())
#Length of the dictionary
print("Length of my_dict:",len(another_dict))