def decimaltobinary(t):
    return bin(t).replace("0b", "")
def hextobinary(t): 
    t = t.lower()
    hex_to_bin = {'0': "0000", '1': "0001", '2': "0010", '3': "0011",
                  '4': "0100", '5': "0101", '6': "0110", '7': "0111",
                  '8': "1000", '9': "1001", 'a': "1010", 'b': "1011",
                  'c': "1100", 'd': "1101", 'e': "1110", 'f': "1111"}
    return ''.join(hex_to_bin[char] for char in t)
def stringtobianry(t):  
    return ''.join(format(ord(char), '08b') for char in t)
def binarytodecimal(t):
    return int(t, 2)
def binarytohex(t): 
    return hex(int(t, 2)).replace("0x", "").upper()
def binarytostring(t): 
    return ''.join(chr(int(t[i:i + 8], 2)) for i in range(0, len(t), 8))
def xor(a, b):  
    c = ""
    for i in range(len(a)):
        if a[i] == b[i]:
            c += "0"
        else:
            c += "1"
    return c
sbox = [
    '63', '7C', '77', '7B', 'F2', '6B', '6F', 'C5', '30', '01', '67', '2B', 'FE', 'D7', 'AB', '76',
    'CA', '82', 'C9', '7D', 'FA', '59', '47', 'F0', 'AD', 'D4', 'A2', 'AF', '9C', 'A4', '72', 'C0',
    'B7', 'FD', '93', '26', '36', '3F', 'F7', 'CC', '34', 'A5', 'E5', 'F1', '71', 'D8', '31', '15',
    '04', 'C7', '23', 'C3', '18', '96', '05', '9A', '07', '12', '80', 'E2', 'EB', '27', 'B2', '75',
    '09', '83', '2C', '1A', '1B', '6E', '5A', 'A0', '52', '3B', 'D6', 'B3', '29', 'E3', '2F', '84',
    '53', 'D1', '00', 'ED', '20', 'FC', 'B1', '5B', '6A', 'CB', 'BE', '39', '4A', '4C', '58', 'CF',
    'D0', 'EF', 'AA', 'FB', '43', '4D', '33', '85', '45', 'F9', '02', '7F', '50', '3C', '9F', 'A8',
    '51', 'A3', '40', '8F', '92', '9D', '38', 'F5', 'BC', 'B6', 'DA', '21', '10', 'FF', 'F3', 'D2',
    'CD', '0C', '13', 'EC', '5F', '97', '44', '17', 'C4', 'A7', '7E', '3D', '64', '5D', '19', '73',
    '60', '81', '4F', 'DC', '22', '2A', '90', '88', '46', 'EE', 'B8', '14', 'DE', '5E', '0B', 'DB',
    'E0', '32', '3A', '0A', '49', '06', '24', '5C', 'C2', 'D3', 'AC', '62', '91', '95', 'E4', '79',
    'E7', 'C8', '37', '6D', '8D', 'D5', '4E', 'A9', '6C', '56', 'F4', 'EA', '65', '7A', 'AE', '08',
    'BA', '78', '25', '2E', '1C', 'A6', 'B4', 'C6', 'E8', 'DD', '74', '1F', '4B', 'BD', '8B', '8A',
    '70', '3E', 'B5', '66', '48', '03', 'F6', '0E', '61', '35', '57', 'B9', '86', 'C1', '1D', '9E',
    'E1', 'F8', '98', '11', '69', 'D9', '8E', '94', '9B', '1E', '87', 'E9', 'CE', '55', '28', 'DF',
    '8C', 'A1', '89', '0D', 'BF', 'E6', '42', '68', '41', '99', '2D', '0F', 'B0', '54', 'BB', '16'
]
rcon = [
    '01', '02', '04', '08', '10', '20', '40', '80', '1B', '36',
    '6C', 'D8', 'AB', '4D', '9A', '2F', '5E', 'BC', '63', 'C6'
]
def tostate(pt):  
    hpt = binarytohex(pt).zfill(32) 
    state = [[], [], [], []]
    byte_index = 0
    for i in range(4):
        for j in range(4): 
            state[j].append(hpt[byte_index * 2: byte_index * 2 + 2])
            byte_index += 1
    return state
def state_to_hex(state): 
    hex_string = ""
    for i in range(4):  
        for j in range(4): 
            hex_string += state[j][i]
    return hex_string
def sub_bytes(state):  
    for i in range(4):
        for j in range(4):
            byte_value = state[i][j].lower()
            row = int(byte_value[0], 16)
            col = int(byte_value[1], 16)
            state[i][j] = sbox[row * 16 + col]
    return state
def shift_rows(state):
    state[1] = state[1][1:] + state[1][:1]
    state[2] = state[2][2:] + state[2][:2]
    state[3] = state[3][3:] + state[3][:3]
    return state

def gmul(a, b):  
    p = 0
    for _ in range(8):
        if b & 1:
            p ^= a
        hi_bit_set = a & 0x80
        a <<= 1
        if hi_bit_set:
            a ^= 0x1B 
        b >>= 1
    return p & 0xFF
def mix_columns(state):  
    new_state = [[], [], [], []]
    for i in range(4):
        for j in range(4):
            new_state[i].append('')
    for col in range(4):
        s0 = int(state[0][col], 16)
        s1 = int(state[1][col], 16)
        s2 = int(state[2][col], 16)
        s3 = int(state[3][col], 16)
        new_state[0][col] = format(gmul(2, s0) ^ gmul(3, s1) ^ s2 ^ s3, '02X')
        new_state[1][col] = format(s0 ^ gmul(2, s1) ^ gmul(3, s2) ^ s3, '02X')
        new_state[2][col] = format(s0 ^ s1 ^ gmul(2, s2) ^ gmul(3, s3), '02X')
        new_state[3][col] = format(gmul(3, s0) ^ s1 ^ s2 ^ gmul(2, s3), '02X')
    return new_state
def add_round_key(state, round_key): 
    for i in range(4):
        for j in range(4):
            state_byte = int(state[i][j], 16)
            key_byte = int(round_key[i][j], 16)
            state[i][j] = format(state_byte ^ key_byte, '02X')
    return state
def rot_word(word): 
    return word[2:] + word[:2]
def sub_word(word):
    result = ""
    for i in range(0, len(word), 2):
        byte_val = word[i:i+2].lower()
        row = int(byte_val[0], 16)
        col = int(byte_val[1], 16)
        result += sbox[row * 16 + col]
    return result
def key_expansion(key, key_size):
    key_hex = binarytohex(key).zfill(key_size // 4)
    nk = key_size // 32
    nr = 10 if nk == 4 else 12 if nk == 6 else 14
    total_words = 4 * (nr + 1)
    w = [""] * total_words
    for i in range(nk):
        w[i] = key_hex[i*8:(i+1)*8]
    for i in range(nk, total_words):
        temp = w[i-1]
        if i % nk == 0:
            temp = rot_word(temp)
            temp = sub_word(temp)
            rcon_val = rcon[(i // nk) - 1] + "000000"  
            temp = format(int(temp, 16) ^ int(rcon_val, 16), '08X')
        elif nk > 6 and i % nk == 4:
            temp = sub_word(temp)
        w[i] = format(int(w[i-nk], 16) ^ int(temp, 16), '08X')
    round_keys = []
    for r in range(nr + 1):
        round_key = [[], [], [], []]
        for col in range(4):
            word = w[r*4 + col]
            for row in range(4):
                round_key[row].append(word[row*2:row*2+2])
        round_keys.append(round_key)
    return round_keys
def aes(pt, bk, ks):
    nr = 10 if ks == 128 else 12 if ks == 192 else 14
    state = tostate(pt)
    round_keys = key_expansion(bk, ks)
    state = add_round_key(state, round_keys[0])
    for round in range(1, nr):
        state = sub_bytes(state)
        state = shift_rows(state)
        state = mix_columns(state)
        state = add_round_key(state, round_keys[round])
    state = sub_bytes(state)
    state = shift_rows(state)
    state = add_round_key(state, round_keys[nr])
    ct_hex = state_to_hex(state)
    ct_bin = hextobinary(ct_hex)
    return {
        'binary': ct_bin,
        'hex': ct_hex,
        'decimal': binarytodecimal(ct_bin)
    }
if __name__ == "__main__":
    print("AES Encryption")
    dhbs = int(input("Plain Text type, Enter 1 for decimal 2 for hex 3 for binary and 4 for string: "))
    if dhbs not in [1, 2, 3, 4]:
        print("Enter a valid choice!")
        exit()
    pt = input("Enter your plain text: ")
    opt = pt
    if dhbs == 1:
        pt = decimaltobinary(int(pt))
    elif dhbs == 2:
        pt = hextobinary(pt)
    elif dhbs == 3:
        pt = pt
    elif dhbs == 4:
        pt = stringtobianry(pt)
    block_size_bytes = 16  
    padding_needed = block_size_bytes - (len(pt) // 8) % block_size_bytes
    if padding_needed != block_size_bytes:
        padding_value = bytes([padding_needed]) * padding_needed
        pt += ''.join(format(x, '08b') for x in padding_value)
    ks = int(input("Input key size (128, 192, 256): "))
    if ks not in [128, 192, 256]:
        print("Invalid key size. Choose 128, 192, or 256.")
        exit()
    kt = int(input("Key type, Enter 1 for decimal 2 for hex 3 for binary and 4 for string: "))
    if kt not in [1, 2, 3, 4]:
        print("Enter a valid choice!")
        exit()
    key_length_bytes = ks // 8
    k = input(f"Enter your {ks}-bit key ({key_length_bytes} bytes): ")
    if kt == 1:
        bk = decimaltobinary(int(k))
    elif kt == 2:
        bk = hextobinary(k)
    elif kt == 3:
        bk = k
    elif kt == 4:
        bk = stringtobianry(k)
    if len(bk) != ks:
        print(f"Error: Key must be exactly {ks} bits.")
        exit()
    ct = aes(pt, bk, ks)
    print("Cipher Text (Hex):", ct['hex'])
    try:
        ct_string = binarytostring(ct['binary'])
        print("Cipher Text (String):", ct_string)
    except:
        print("Cipher Text (String): [Contains non-printable characters]")