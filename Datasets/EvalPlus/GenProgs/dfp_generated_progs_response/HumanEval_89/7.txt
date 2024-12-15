def encrypt(s):
    encrypted_string = ''
    for char in s:
        ascii_value = ord(char)
        if char.isalpha() and char.islower():
            encrypted_value = ((ascii_value - 97 + 2 * 2) % 26) + 97
            encrypted_string += chr(encrypted_value)
        elif char.isalpha() and char.isupper():
            encrypted_value = ((ascii_value - 65 + 2 * 2) % 26) + 65
            encrypted_string += chr(encrypted_value)
        else:
            encrypted_string += char
    return encrypted_string