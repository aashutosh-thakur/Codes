import re
pattern = 'cat|dog'
text = 'I have a cat and a dog'
matches = re.findall(pattern, text)
print(matches)