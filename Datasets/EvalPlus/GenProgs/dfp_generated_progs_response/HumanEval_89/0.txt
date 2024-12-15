def encrypt(s):
    """
    Encrypts a string by rotating the alphabet down by two multiplied to two places.
    
    Parameters:
    s (str): The input string to be encrypted.
    
    Returns:
    str: The encrypted string.
    """
    
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    encrypted_string = ''
    
    for char in s:
        if char in alphabet:
            index = (alphabet.index(char) + 2*2) % 26
            encrypted_string += alphabet[index]
    
    return encrypted_string