# You are working on a text processing tool and need to determine whether a given string is a palindrome. Write a Python function is_palindrome(word) that takes a word as input and returns True if it is a palindrome, otherwise False.
word=input("Enter the word: ")
for i in range(len(word)):
    for j in range(len(word)-1,0):
        print(word)
        print(word[j])
        if word[i] in word[j]:
            
            if i==len(word):
                print("True")
                break
            continue
print("False")