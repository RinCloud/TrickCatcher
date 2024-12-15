def encrypt(s):
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    encrypted = ''
    for char in s:
        if char.isalpha():
            index = (alphabet.index(char) + (2 * 2)) % len(alphabet)
            encrypted += alphabet[index]
        else:
            encrypted += char
    return encrypted