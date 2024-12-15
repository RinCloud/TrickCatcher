def encode(message):
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            if char in vowels:
                encoded_message += chr(ord(char) + 2)
            else:
                if char.isupper():
                    encoded_message += char.lower()
                else:
                    encoded_message += char.upper()
        else:
            encoded_message += char
    return encoded_message