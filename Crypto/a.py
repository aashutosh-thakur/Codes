word = input("Enter the word: ")
key = int(input("Enter the key: "))
text = ''
for ch in word:
    if ch.islower():
        text += chr((ord(ch) - ord('a') + key) % 26 + ord('a'))
    elif ch.isupper():
        text += chr((ord(ch) - ord('A') + key) % 26 + ord('A'))
    elif ch.isdigit():
        text += chr((ord(ch) - ord('0') + key) % 10 + ord('0'))
    else:
        print("Invalid character in message:", ch)
        break
else:
    print("Encrypted text:", text)