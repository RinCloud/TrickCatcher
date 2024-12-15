def encode(message):
    encoded_message = ""  # initialize an empty string to store the encoded message
    vowels = ['a', 'e', 'i', 'o', 'u']  # list of vowels
    
    for char in message:
        if char.isalpha():  # check if the character is an alphabet
            if char.lower() in vowels:  # check if the character is a vowel
                encoded_message += chr(ord(char) + 2)  # add 2 to the ASCII value of the vowel and convert it back to a character
            else:
                if char.islower():  # check if the character is in lower case
                    encoded_message += char.upper()  # convert the character to upper case
                else:
                    encoded_message += char.lower()  # convert the character to lower case
        else:
            encoded_message += char  # add non-alphabet characters to the encoded message as it is
    
    return encoded_message  # return the encoded message