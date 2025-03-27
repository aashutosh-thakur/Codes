import re
pattern = r'co{2,}l'
text = 'The cooooooooool cat sat on the cool mat cl col cooool.'
matches = re.findall(pattern, text)
print(matches)