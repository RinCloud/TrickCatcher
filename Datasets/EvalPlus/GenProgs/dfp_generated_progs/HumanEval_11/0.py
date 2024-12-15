def string_xor(a: str, b: str) -> str:
    """
    Performs binary XOR on two strings of binary numbers and returns the result as a string.
    
    Args:
    a: A string consisting of binary numbers.
    b: A string consisting of binary numbers.
    
    Returns:
    The result of performing binary XOR on the input strings as a string.
    
    Examples:
    >>> string_xor('010', '110')
    '100'
    """
    xor_result = ''
    for i in range(len(a)):
        if a[i] == '0' and b[i] == '0':
            xor_result += '0'
        elif a[i] == '1' and b[i] == '0':
            xor_result += '1'
        elif a[i] == '0' and b[i] == '1':
            xor_result += '1'
        else:
            xor_result += '0'
    return xor_result