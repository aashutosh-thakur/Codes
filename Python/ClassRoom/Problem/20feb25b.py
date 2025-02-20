# You're building a configuration management system and need to merge multiple dictionaries containing configuration settings into one. Write a python function merge_dictionaries(*dicts) that takes any number of dictionaries as input and returns a single dictionary containing all key value pairs from the input dictionaries
def merge_dictionaries(*dicts):
    merged_dict={}
    for dictionary in dicts:
        merged_dict.update(dictionary)
    return merged_dict
dict1={'a': 1, 'b': 2}
dict1={'b': 3, 'c': 4}
dict1={'d': 5}
merged_dict=merge_dictionaries(*dicts)
print("Merged Dictionaries: ",merged_dict)