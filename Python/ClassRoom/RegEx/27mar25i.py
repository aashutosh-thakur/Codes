import re
pattern = 'co+l'
text = 'The cl col cat sat on the cooooooool mat.'
matches = re.findall(pattern, text)
print(matches)