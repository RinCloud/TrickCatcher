def string_xor(a: str, b: str) -> str:
    """
    Perform binary XOR operation on two input strings.
    Parameters:
    a (str): The first binary string.
    b (str): The second binary string.
    Returns:
    str: The result of the binary XOR operation as a string.
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