def encrypt(s):
    """
    Encrypts the input string by rotating the alphabet.
    
    Parameters:
    s (str): The input string to be encrypted.
    
    Returns:
    str: The encrypted string.
    """
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    encrypted = ''
    
    for char in s:
        if char in alphabet:
            idx = alphabet.index(char)
            new_idx = (idx + (2 * 2)) % len(alphabet)
            encrypted += alphabet[new_idx]
        else:
            encrypted += char
    
    return encrypted