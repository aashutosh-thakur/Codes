# Vowel Counter:  You’re developing a text analysis tool. Write a Python program that reads a sentence from the user.
# •    Count the number of vowels (a, e, i, o, u) in the sentence.
# •    Display the total count of each vowel.
sentence=input("Enter whatever you want to enter: ")
count_a=0
count_e=0
count_i=0
count_o=0
count_u=0
for i in range(len(sentence)):
    if sentence[i]=='a' or sentence[i]=='A':
        count_a+=1
    elif sentence[i]=='e' or sentence[i]=='E':
        count_e+=1
    elif sentence[i]=='i' or sentence[i]=='I':
        count_i+=1
    elif sentence[i]=='o' or sentence[i]=='O':
        count_o+=1
    elif sentence[i]=='u' or sentence[i]=='U':
        count_u+=1
print("Total vowel: ",count_a+count_e+count_i+count_o+count_u)
print("Total a vowel: ",count_a)
print("Total e vowel: ",count_e)
print("Total i vowel: ",count_i)
print("Total o vowel: ",count_o)
print("Total u vowel: ",count_u)