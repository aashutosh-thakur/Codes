import re
pattern = 'mat.$'
text = 'The cat sat on the mat.'
if re.search(pattern, text):
    print('Pattern found at the end!')