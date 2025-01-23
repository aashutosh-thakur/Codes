#Creating two sets
fruits={"Apple","Banana","Cherry"}
citrus={"Orange","Lemon","Lime"}
#Union of two set
print(fruits.union(citrus)) #Output: {'Orange','apple','cherry','banana','lemon'}
#Intersection of two set
print(fruits.intersection(citrus)) #Output: set{}
#Difference of two sets
print(fruits.difference(citrus)) #Output: {'apple','cherry','banana'}
#Symmetric difference of two sets
print(fruits.symmetric_difference(citrus)) #Output: {'orange','apple','cherry','banana','lime'}