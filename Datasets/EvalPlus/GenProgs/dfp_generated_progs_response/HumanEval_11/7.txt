def string_xor(a: str, b: str) -> str:
    """
    Perform binary XOR on two input strings a and b consisting only of 1s and 0s.
    
    Args:
    a: The first input string.
    b: The second input string.
    
    Returns:
    The binary XOR result as a string.
    
    Example:
    >>> string_xor('010', '110')
    '100'
    """
    xor_result = ""
    for i in range(len(a)):
        if a[i] != b[i]:
            xor_result += "1"
        else:
            xor_result += "0"
    return xor_result