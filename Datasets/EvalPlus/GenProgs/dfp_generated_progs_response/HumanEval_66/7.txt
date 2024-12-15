def digitSum(s):
    """
    Takes a string as input and returns the sum of the ASCII codes of the upper characters.
    
    Args:
    s (str): Input string.
    
    Returns:
    int: Sum of the ASCII codes of the upper characters.
    """
    return sum(ord(c) for c in s if c.isupper())