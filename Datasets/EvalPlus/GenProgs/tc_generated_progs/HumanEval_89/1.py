def encrypt(s):
    result = ""
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in s:
        if char.islower():
            result += alphabet[(alphabet.index(char) + 4) % 26]
        elif char.isupper():
            result += alphabet[(alphabet.index(char.lower()) + 4)].upper()
        else:
            result += char
    return result