# You are working on a text processing tool and need to determine whether a given string is a palindrome. Write a Python function is_palindrome(word) that takes a word as input and returns True if it is a palindrome, otherwise False.
def is_palindrome(words):
    if words==words[::-1]:
        print("True")
    else:
        print("False")
words=input("Enter the word: ")
is_palindrome(words)