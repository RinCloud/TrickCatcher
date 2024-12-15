def encode(message):
    result = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char in vowels:
                result += chr(ord(char) + 2)
            else:
                if char.islower():
                    result += char.upper()
                else:
                    result += char.lower()
        else:
            result += char
    return result