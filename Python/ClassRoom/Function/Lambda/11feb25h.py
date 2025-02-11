#List of numbers
numbers=[1,2,3,4,5,6,7,8,9,10]
#Use filter() with lambda to filter even numbers
even_numbers = list(filter(lambda x: x%2==0, numbers))
print(even_numbers)