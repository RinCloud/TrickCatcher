def solve(s):
    """
    You are given a string s.
    if s[i] is a letter, reverse its case from lower to upper or vise versa, 
    otherwise keep it as it is.
    If the string contains no letters, reverse the string.
    
    Parameters:
    s (str): A string s to be solved.
    
    Returns:
    str: The resulted string.
    
    Examples:
    >>> solve("1234")
    '4321'
    >>> solve("ab")
    'AB'
    >>> solve("#a@C")
    '#A@c'
    """
    new_string = ''
    has_letter = False
    
    for char in s:
        if char.isalpha():
            has_letter = True
            if char.islower():
                new_string += char.upper()
            else:
                new_string += char.lower()
        else:
            new_string += char
    
    if not has_letter:
        new_string = new_string[::-1]
    
    return new_string