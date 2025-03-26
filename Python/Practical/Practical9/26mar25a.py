# You are developing a data processing tool where you receive a list of mixed data types. You must filter out non-numeric values and convert the remaining values to integers. Write a Python function filter_and_convert_to_integers(data) that takes a list of mixed data types as input, filters out non-numeric values, and returns a new list with the remaining values converted to integers.
def filter_and_convert_to_integers(data):
    result_list = []
    for	item in	data:
        if	isinstance(item,str) and item.isdigit():
           result_list.append(int(item))
        elif isinstance(item, (int, float)):
            result_list.append(int(item))	
    return	result_list
data = input("Enter the mixed data types values in the list: ")
data=data.split(',')
data=[item.strip() for item	in data]		
print("Entered mixed data type list:", data)
filtered_data = filter_and_convert_to_integers(data)
print("Filtered	and	converted data:", filtered_data)