def encrypt(s):
    result = ""
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in s:
        if char.isalpha():
            shift = 2 * 2
            shifted_index = (alphabet.index(char.lower()) + shift) % 26
            shifted_char = alphabet[shifted_index]
            result += shifted_char
        else:
            result += char
    return result