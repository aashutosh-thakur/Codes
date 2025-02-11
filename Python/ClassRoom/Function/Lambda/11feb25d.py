#Sorting a List of Tuples by second Element
data=[(3,10),(1,5),(2,80)]
sorted_data= sorted(data, key=lambda x:x[0])
print(sorted_data)
sorted_data= sorted(data, key=lambda x:x[1])
print(sorted_data)