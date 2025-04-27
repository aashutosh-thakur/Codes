sentence = input("Enter the Plain Text: ")
sentence = sentence.replace(" ", "")
depth = int(input("Enter the depth: "))
rails = [['' for _ in range(len(sentence))] for _ in range(depth)]
direction = -1
current_rail = 0
for i, char in enumerate(sentence):
    rails[current_rail][i] = char
    if current_rail == 0 or current_rail == depth - 1:
        direction *= -1
    current_rail += direction
cipher_text = ''.join(''.join(rail) for rail in rails)
print("Encrypted Text:", cipher_text)