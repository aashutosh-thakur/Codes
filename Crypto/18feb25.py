
plaintext=input("Enter the plaintext: ")
key='633e'
key=key.encode().hex()
key = bin(int(key, 16))[2:].zfill(64)
print(plaintext)
plain=plaintext
plaintext=plaintext.encode().hex()
print(plaintext)
plaintext_hex=plaintext
plaintext=bin(int(plaintext, 16))[2:]
key=key.encode().hex()
count_plaintext=len(plaintext)
count_key=len(key)
if count_plaintext<64:
    total_word_to_add=64-count_plaintext
    padded = '0' * total_word_to_add
    plaintext=plaintext+padded
print(plaintext)
plaintext_bin=plaintext
l_plaintext=0
r_plaintext=0
if len(plaintext)==64:
    l_plaintext=plaintext[:32]
    r_plaintext=plaintext[32:]
print(l_plaintext)
print(r_plaintext)
print(key)
print(len(key))