from functools import reduce
numbers=[1,5,3,8,2]
max_value = reduce(lambda x, y:x if x > y else y, numbers)
print("Max value: ",max_value)