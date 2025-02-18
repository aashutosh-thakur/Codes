# You're working on a data analysis project and need to filter a list of numbers based on certain conditions. Write a Python function filter_numbers(numbers, condition) that takes a list of numbers and a condition function as input. It should return a new list containing only the numbers that satisfy the given condition
def filter_numbers(numbers, condition):
    return [num for num in numbers if condition(num)]
def is_positive(num):
    return num>0
numbers=[-2,-1,0,1,2,3]
positive_numbers=filter_numbers(numbers, is_positive)
print("Positive Numbers: ",positive_numbers)