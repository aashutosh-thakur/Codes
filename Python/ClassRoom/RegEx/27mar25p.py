import re
pattern = r'(\d{2})-(\d{2})-(\d{4})'
text = 'Today is 16-05-2024'
matches = re.findall(pattern, text)
print(matches)
for match in matches:
    print(f"Day: {match[0]}, Month: {match[1]}, Year: {match[2]}")