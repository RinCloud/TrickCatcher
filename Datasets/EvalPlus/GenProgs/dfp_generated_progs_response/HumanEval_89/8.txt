def encrypt(s):
    result = ""
    for char in s:
        ascii_val = ord(char)
        if char.isalpha():
            if char.isupper():
                encrypted_val = chr((ascii_val - 65 + 2 * 2) % 26 + 65)
            else:
                encrypted_val = chr((ascii_val - 97 + 2 * 2) % 26 + 97)
            result += encrypted_val
        else:
            result += char
    return result