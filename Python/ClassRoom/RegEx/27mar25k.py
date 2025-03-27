import re
pattern = 'gr[ae]y'
text = 'The sky is gray, but the cat is grey grmy'
matches = re.findall(pattern, text)
print(matches)