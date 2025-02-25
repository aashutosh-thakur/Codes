# Duplicate Finder: Implement a function to find duplicates that take a list of numbers and returns a list of all numbers that appear more than once.
def duplicates_list(list_num):
    duplicates_num=[]
    for i in range(len(list_num)):
        for j in range(i+1, len(list_num)):
            if list_num[i]==list_num[j] and list_num[i] not in duplicates_num:
                duplicates_num.append(list_num[i])
    return duplicates_num
list_num=[1,4,2,4,1,4,3,5,7,2,1,9]
print(f"Duplicate Number more than one: {duplicates_list(list_num)}")