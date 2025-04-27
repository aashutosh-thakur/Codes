sentence = input("Enter the Plain Text: ")
sentence = sentence.replace(" ", "")
key = input("Enter the key: ")
rails = [['' for _ in range(len(sentence))] for _ in range(len(key))]
for i, char in enumerate(sentence):
    row = i % len(key)
    col = i
    rails[row][col] = char
key_order = sorted([(char, idx) for idx, char in enumerate(key)])
cipher_text = ''
for _, idx in key_order:
    for j in range(len(sentence)):
        if rails[idx][j] != '':
            cipher_text += rails[idx][j]
print("Encrypted Text:", cipher_text)