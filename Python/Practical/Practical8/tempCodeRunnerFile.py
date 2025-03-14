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