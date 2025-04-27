sentence = input("Enter the Plain Text: ").upper().replace(" ", "")
key = input("Enter the key: ").upper().replace(" ", "")
cipher_text = ""
key_index = 0
for char in sentence:
    if char.isalpha():
        shift = ord(key[key_index % len(key)]) - ord('A')
        cipher_char = chr(((ord(char) - ord('A') + shift) % 26) + ord('A'))
        cipher_text += cipher_char
        key_index += 1
    else:
        cipher_text += char
print("Encrypted Text:", cipher_text)