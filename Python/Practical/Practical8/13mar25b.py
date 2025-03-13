# You are building a word game. Write a function that checks whether two given strings are anagrams (contain the same letters, ignoring spaces and capitalization).
# Test cases
# ("listen", "silent")
# Output: True
# ("hello", "world")
# Output: False
def anagram(word1,word2):
    if len(word1) == len(word2):
        for letter in word1:
            if letter in word2:
                word2 = word2.replace(letter, "", 1)
        if len(word2) == 0:
            print("True")
        else:
            print("False")
    else:
        print("False")
word1=input("Enter the first word: ")
word2=input("Enter the second word: ")
anagram(word1,word2)