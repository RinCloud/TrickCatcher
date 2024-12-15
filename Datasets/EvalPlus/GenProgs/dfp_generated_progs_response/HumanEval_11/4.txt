def string_xor(a: str, b: str) -> str:
    """
    Perform binary XOR on two input strings a and b consisting only of 1s and 0s.
    
    Parameters:
    a (str): first input string
    b (str): second input string
    
    Returns:
    str: result of XOR as a string
    
    Examples:
    >>> string_xor('010', '110')
    '100'
    """
    result = ''
    for i in range(len(a)):
        if a[i] != b[i]:
            result += '1'
        else:
            result += '0'
    return result