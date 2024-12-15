def string_xor(a: str, b: str) -> str:
    """
    Perform binary XOR on two strings consisting only of 1s and 0s and return the result.
    
    Parameters:
    a (str): First string consisting only of 1s and 0s.
    b (str): Second string consisting only of 1s and 0s.
    
    Returns:
    str: Result of performing binary XOR on the two input strings.
    
    Examples:
    >>> string_xor('010', '110')
    '100'
    """
    return ''.join(str(int(x) ^ int(y)) for x, y in zip(a, b))