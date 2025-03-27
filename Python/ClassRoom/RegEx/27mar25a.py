import re
pattern = 'apple'
text = 'I have an apple and an orange'
match = re.search(pattern, text)
if match:
    print('Pattern Found!')
else:
    print('Pattern Not Found!')