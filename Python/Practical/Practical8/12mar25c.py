# You are working on a text manipulation tool that requires rotating words in a sentence. Implement a Python function rotate_sentence(sentence, n) that takes a sentence and an integer n as input and rotates each word in the sentence by n positions to the right. 
# Test case rotating "Hello World" by
# 1 position results in "World Hello".
def rotate_sentence(sentence, n):
    words=sentence.split()
    n=n%len(words)
    lista=words[-n:]
    listb=words[:-n]
    final_list=lista+listb
    return ' '.join(final_list) 
sentence=input("Enter the sentence: ")
n=int(input("Enter total rotation: "))
final=rotate_sentence(sentence, n)
print(final)