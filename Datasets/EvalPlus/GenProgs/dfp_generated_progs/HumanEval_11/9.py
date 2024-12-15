def string_xor(a: str, b: str) -> str:
    """ Input are two strings a and b consisting only of 1s and 0s.
    Perform binary XOR on these inputs and return result also as a string.
    >>> string_xor('010', '110')
    '100'
    """
    result = ''
    for i in range(len(a)):
        if a[i] == '1' and b[i] == '1':
            result += '0'
        elif a[i] == '1' or b[i] == '1':
            result += '1'
        else:
            result += '0'
    return result