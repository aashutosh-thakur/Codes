# Book Collection Sorter: Write a function to sort books. It should take a list of book titles and sort them by the length of the title, with the shortest title first.
def shortest_title_first(list_l):
    return sorted(list_l, key=len)
list_l=['Python Programming','Linux shells scripting','Software Engineering']
sorted_list=shortest_title_first(list_l)
print(f"Shorted Book List: {sorted_list}")