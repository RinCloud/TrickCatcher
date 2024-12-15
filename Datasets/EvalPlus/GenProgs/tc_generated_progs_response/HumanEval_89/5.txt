def encrypt(s):
    result = ""
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in s:
        if char.isalpha():
            shift = (alphabet.index(char.lower()) + 4) % 26
            if char.isupper():
                result += alphabet[shift].upper()
            else:
                result += alphabet[shift]
        else:
            result += char
    return result