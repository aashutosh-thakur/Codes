sentence = "hello world, how are you?"
vowel="".join(i for i in sentence if i.lower() in 'aeiou')
print("Vowels: ",vowel)