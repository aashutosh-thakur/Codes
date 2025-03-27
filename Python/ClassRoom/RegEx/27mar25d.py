import re
pattern = r'\d+'
text = 'I have 3 apple and 5 oranges'
replacement = 'X'
new_text = re.sub(pattern, replacement, text)
print(new_text)