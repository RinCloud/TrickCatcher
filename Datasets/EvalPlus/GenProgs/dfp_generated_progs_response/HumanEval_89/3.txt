def encrypt(s):
    encrypted = ""
    for char in s:
        if char.isalpha():
            ascii_val = ord(char)
            encrypted += chr(ascii_val + 2 * 2)
        else:
            encrypted += char
    return encrypted