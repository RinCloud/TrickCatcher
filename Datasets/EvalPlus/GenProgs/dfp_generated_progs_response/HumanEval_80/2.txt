def is_happy(s):
    """
    Returns True if the string is happy, False otherwise.
    
    A string is happy if its length is at least 3 and every 3 consecutive letters are distinct.
    
    Parameters:
    s (str): The input string
    
    Returns:
    bool: True if the string is happy, False otherwise
    """
    if len(s) < 3:
        return False
    
    for i in range(len(s)-2):
        if s[i] == s[i+1] or s[i] == s[i+2] or s[i+1] == s[i+2]:
            return False
    
    return True