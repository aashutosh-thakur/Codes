import re
pattern = 'colou?r'
text = 'The color is blue, but the colour is green.'
matches = re.findall(pattern, text)
print(matches)