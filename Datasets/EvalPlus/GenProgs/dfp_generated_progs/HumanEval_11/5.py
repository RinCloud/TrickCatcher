def string_xor(a: str, b: str) -> str:
    """
    Input are two strings a and b consisting only of 1s and 0s.
    Perform binary XOR on these inputs and return result also as a string.
    
    Parameters:
    a (str): The first binary string.
    b (str): The second binary string.
    
    Returns:
    str: The resulting binary string after performing XOR operation on a and b.
    """
    result = ''
    for i in range(len(a)):
        if a[i] == b[i]:
            result += '0'
        else:
            result += '1'
    return result