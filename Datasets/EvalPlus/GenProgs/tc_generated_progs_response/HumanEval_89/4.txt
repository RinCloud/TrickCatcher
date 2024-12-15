def encrypt(s):
    result = ""
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in s:
        if char.isalpha():
            shifted_index = (alphabet.index(char.lower()) + 2 * 2) % 26
            shifted_char = alphabet[shifted_index]
            if char.isupper():
                shifted_char = shifted_char.upper()
            result += shifted_char
        else:
            result += char
    return result