# Text Encryption and Decryption· You're tasked with creating a simple encryption and decryption tool for sensitive messages. Write Python functions encrypt_message (message, shift) and decrypt_message (encrypted_message, shift) to encrypt and decrypt messages using the Caesar cipher technique.
def encrypt_message(message, shift):
    encrypted_message = ""
    shift %= 26
    for char in message:
        if char.isalpha():
            base = ord('A') if char.isupper() else ord('a')
            encrypted_message += chr((ord(char) - base + shift) % 26 + base)
        else:
            encrypted_message += char
    return encrypted_message
def decrypt_message(encrypted_message, shift):
    decrypted_message = ""
    shift %= 26
    for char in encrypted_message:
        if char.isalpha():
            base = ord('A') if char.isupper() else ord('a')
            decrypted_message += chr((ord(char) - base - shift) % 26 + base)
        else:
            decrypted_message += char
    return decrypted_message
message = input("Enter Message to encrypt: ")
shift = int(input("Enter position: "))
encrypted_message = encrypt_message(message, shift)
decrypted_message = decrypt_message(encrypted_message, shift)
print("Plain Text is: ", message)
print("Encrypted Message is: ", encrypted_message)
print("Decrypted Message is: ", decrypted_message)