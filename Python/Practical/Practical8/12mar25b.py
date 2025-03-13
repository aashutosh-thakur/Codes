# You are working on a text processing tool and need to determine whether a given string is a palindrome. Write a Python function is_palindrome(word) that takes a word as input and returns True if it is a palindrome, otherwise False.
words=input("Enter the word: ")
j=1
i=len(words)/2
for word in words:
    if word==words[::-j]:
        j+=1
        i+=1
        if i==len(words):
            print("True")
print("False")