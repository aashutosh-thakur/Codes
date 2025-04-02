# Text Analysis and Word Counting  You are tasked with analyzing a given text document and generating a report containing the word count for each unique word. Additionally, you need to identify the most frequent word in the document. Write a Python function analyze_text(text) that takes a text document as input and returns a dictionary containing the word count for each unique word, as well as the most frequent word and its count.
import os
print("Current working directory:", os.getcwd())
def analyze_text(text):
    document = ""
    for char in text:
        if char.isalnum() or char.isspace():
            document += char
    words = document.split()
    unique_word = {}
    for word in words:
        if word in unique_word:
            unique_word[word] += 1
        else:
            unique_word[word] = 1
    most_frequent_word = ""
    max_count = 0
    for word, count in unique_word.items():
        if count > max_count:
            most_frequent_word = word
            max_count = count
    print ("Most frequent Word is: ", most_frequent_word, ": ",max_count)
    return unique_word
file = open(r"c:\Users\DELL\OneDrive\Desktop\program\GITHUB\Codes-1\Python\Practical\Practical10\try.txt", "r")
text = (file.read()).lower()
file.close()
unique_word = analyze_text(text)
for key, value in unique_word.items():
    print(f"{key} : {value}",)