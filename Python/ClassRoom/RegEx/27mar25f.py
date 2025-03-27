import re
pattern = '^The'
text = 'The cat sat on the mat.'
if re.search(pattern, text):
    print('Pattern found at the start!')