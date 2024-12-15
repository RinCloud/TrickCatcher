def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    encrypted_string = ""
    
    for char in s:
        if char.isalpha():
            index = (alphabet.index(char) + (2 * 2)) % 26
            encrypted_string += alphabet[index]
        else:
            encrypted_string += char
    
    return encrypted_string