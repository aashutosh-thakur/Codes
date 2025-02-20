def transform_keys_to_lowercase(dict_input):
    return {key.lower(): value for key, value in dict_input.items()}
dict_input={'Name': 'John', 'Age':  '19', 'Country': 'USA'}
dict_output=transform_keys_to_lowercase(dict_input)
print(dict_output)