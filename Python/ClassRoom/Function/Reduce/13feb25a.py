from functools import reduce
# reduce(function, iterable, initializer)
numbers=[1,2,3,4,5]
#Using reduce to find the sum
sum_result = reduce(lambda x,y: x+y, numbers)
print("Using reduce to find the sum: ",sum_result)
#Using reduce with an initializer
sum_result=reduce(lambda x, y:x+y, numbers,10)
print("Using reduce with an initializer: ",sum_result)