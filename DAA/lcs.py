string1=input("Enter the first word: ")
string2=input("Enter the second word: ")
match=[]
for i, char in enumerate(string1):
    for j, word in enumerate(string2):
        if char in word:
            match=char
            print(match,end='')
