def encode(message):
    encoded_message = ''
    vowels = ['a', 'e', 'i', 'o', 'u']
    
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr(ord(char) + 2).upper()
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
            
    return encoded_message