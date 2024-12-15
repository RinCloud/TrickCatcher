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
    
    mid = len(chars) // 2
    for i in range(mid):
        if chars[i] != chars[len(chars) - i - 1]:
            return False
    return True