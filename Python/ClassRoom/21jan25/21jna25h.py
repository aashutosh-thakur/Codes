set1 = {1, 2, 3}
set2 = {3, 4, 5}

subset_check = set1.issubset(set2)
print("Is set 1 a subset of set 2?", subset_check)

superset_check = set1.issuperset(set2)
print("Is set 1 a superset of set 2?", superset_check)

#Disjoint
disjoint_check = set1.isdisjoint(set2)
print("Are set1 and set2 disjoint? ",disjoint_check)