# You are working on a code formatter. Write a function that converts a given CamelCase string to snake_case (all lowercase with underscores).
# Test case 
# ("CamelCaseExample")
# Output: "camel_case_example"
def snake_case(words):
    letter=[]
    for word in words:
        if word.isupper():
            if letter:
                letter.append('_')
            letter.append(word.lower())
        else:
            letter.append(word)
    return ''.join(letter)
words=input("Enter the word: ")
final_output=snake_case(words)
print(final_output)