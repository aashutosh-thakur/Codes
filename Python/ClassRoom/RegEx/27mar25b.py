import re
pattern = r'\d+'
text = 'I have 3 apple and 5 orange'
matches = re.findall(pattern, text)
print(matches)