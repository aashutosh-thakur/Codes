# {n,m}: Between n amd m occurances
import re
pattern = 'co{1,2}l'
text = 'The col cat sat on the cool mat.'
matches = re.findall(pattern, text)
print(matches)