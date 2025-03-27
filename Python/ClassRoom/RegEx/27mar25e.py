# Metacharacters
import re
pattern = 'c.t'
text = 'The cat sat on the mat cat'
matches = re.findall(pattern, text)
print(matches)