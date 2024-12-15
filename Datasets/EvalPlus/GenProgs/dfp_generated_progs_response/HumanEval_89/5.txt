def encrypt(s):
    result = ""
    for char in s:
        if char.isalpha():
            if char.islower():
                new_char = chr((ord(char) - 97 + (2 * 2)) % 26 + 97)
            else:
                new_char = chr((ord(char) - 65 + (2 * 2)) % 26 + 65)
        else:
            new_char = char
        result += new_char
    return result