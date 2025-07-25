def string_xor(a: str, b: str) -> str:
    """
    Returns the result of performing binary XOR on two binary strings.
    Parameters:
    a (str): The first binary string consisting only of 1s and 0s.
    b (str): The second binary string consisting only of 1s and 0s.
    Returns:
    str: The result of the XOR operation as a binary string.
    Example:
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