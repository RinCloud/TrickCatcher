def digitSum(s):
    """
    Returns the sum of the ASCII codes of the uppercase characters in the given string
    
    Parameters:
    s (str): A string
    
    Returns:
    int: The sum of the ASCII codes of uppercase characters
    
    Examples:
    >>> digitSum("")
    0
    >>> digitSum("abAB")
    131
    >>> digitSum("abcCd")
    67
    >>> digitSum("helloE")
    69
    >>> digitSum("woArBld")
    131
    >>> digitSum("aAaaaXa")
    153
    """
    sum_ = 0
    for char in s:
        if char.isupper():
            sum_ += ord(char)
    return sum_