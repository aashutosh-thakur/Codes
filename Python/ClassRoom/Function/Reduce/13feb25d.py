# List with duplicates
my_list= [1,3,1,2,8,7,5,3,4,2,3,4,4,5,6,6,7]
#Remove duplicates while preserving order using lambda and set
unique_list=list(set(my_list))
unique_list.sort(key=lambda x:my_list.index(x))
print(unique_list)