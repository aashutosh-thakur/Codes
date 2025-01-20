#Define a nested list containing some data
nested_list=[
    [1,2,3],
    ['a','b','c'],
    [True,False,True] 
]
#Iterate over each sublist
for sublist_index, sublist in enumerate(nested_list):
    print(f"Sublist {sublist_index}:")
    #Iterate over each element in the sublist
    for element_index, element in enumerate(sublist):
        print(f"Element {element_index}: {element}")
#Inside the loops, we use the enumerate() function to get the index and the element itself for easier understanding.