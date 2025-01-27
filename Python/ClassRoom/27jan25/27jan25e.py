#Adding a new key-value pair to the dictionary
person= {"name": "john","age": 30,"city": "New York"}
person['Profession']="Teaching"
another_dict = dict(name='Alice', age=25, city='San Francisco')
another_dict['gender']='Female'
print("After adding gender: ",another_dict)
another_dict['age']=35
print("After Updating age: ",another_dict)

#Remove a key-value pair from the dictionary
del person["age"]
print(person)