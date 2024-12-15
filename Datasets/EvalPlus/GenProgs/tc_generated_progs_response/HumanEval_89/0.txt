def encrypt(s):
    result = ""
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in s:
        if char.lower() in alphabet:
            result += alphabet[(alphabet.index(char.lower()) + 2*2) % 26]
        else:
            result += char
    return result