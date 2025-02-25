# Reversing a Sentence: You are building a text editor application, and one of the features you want to implement is sentence reversal.
# Ex:
# Input : hello python.
# Output: olleh .nohtyp
sentence=input("Enter the sentence: ")
sentence=sentence[::-1]
list_l=sentence.split()
list_l=list_l[::-1]
reversed_sen=" ".join(list_l)
print(reversed_sen)