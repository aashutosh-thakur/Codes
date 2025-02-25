def shortest_title_first(list_l):
    return sorted(list_l, key=len)
list_l=['Python Programming','Linux shells scripting','Software Engineering']
sorted_list=shortest_title_first(list_l)
print(f"Shorted Book List: {sorted_list}")