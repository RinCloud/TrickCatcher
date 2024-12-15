def encode(message):
    encoded_msg = ""
    vowels = ['a', 'e', 'i', 'o', 'u']
    
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_msg += chr(ord(char) + 2).upper()
            else:
                if char.islower():
                    encoded_msg += char.upper()
                else:
                    encoded_msg += char.lower()
        else:
            encoded_msg += char
            
    return encoded_msg