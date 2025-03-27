import re
pattern = r'\W+' # Matches one or more non-numeric characters
text = 'apple,orange;banana grape12 34qwer'
split_text = re.split(pattern, text)
print(split_text)