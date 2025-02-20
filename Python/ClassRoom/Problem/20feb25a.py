# You're working on a text analysis project and need to count the frequency of each word in given paragraph . Write a Python function count_word_frequency(paragraph) that takes a paragraph as a input and returns a dictionary where keys are unique words and values are their respective frequencies.
def count_word_frequency(paragraph):
    if len(paragraph)>1:
        list_p=paragraph.split(" ")
    else:
        list_p=""
    return len(list_p)

paragraph=input("Enter the paragraph: ")
total_word=count_word_frequency(paragraph)
print(total_word)