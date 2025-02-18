#You're developing a data processing tool where you will recieve a list of mixed data types. You need to filter out non-numeric values and convert the remaining values to integers. Write a python function FILTER_AND_CONVERT_TO_INTEGERS(data) that takes a list of mixed data types as input, filters out non-numeric values, and returns a new list with the remaining values converted to integers.
def filter_and_convert_to_integers(data):
    return [int(x) for c in data if isinstance(x, (int, float))]
data=[1,2,3,'4','5','test',5.6]
filtered_integers=filter_and_convert_to_integers(data)
print("Filterd integers: ",filtered_integers)