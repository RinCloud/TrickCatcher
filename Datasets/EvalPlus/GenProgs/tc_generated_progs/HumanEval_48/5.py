def is_palindrome(text: str):
    """
    Checks if given string is a palindrome
    >>> is_palindrome('')
    True
    >>> is_palindrome('aba')
    True
    >>> is_palindrome('aaaaa')
    True
    >>> is_palindrome('zbcd')
    False
    """
    
    if not text:
        return True
    
    chars = text.lower().replace(' ', '')
    
    if len(chars) < 2:
        return True
    
    reversed_text = chars[::-1]
    return chars == reversed_text