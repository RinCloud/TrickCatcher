def encode(message):
    """
    Encode the message by swapping the case of all letters and replacing vowels with the letter that appears 2 places ahead in the alphabet.
    
    Parameters:
    message (str): The message to be encoded.
    
    Returns:
    str: The encoded message.
    """
    encoded_message = ""
    for letter in message:
        if letter.isalpha():
            if letter.lower() in 'aeiou':
                encoded_message += chr(ord(letter) + 2).swapcase()
            else:
                encoded_message += letter.swapcase()
        else:
            encoded_message += letter
    return encoded_message