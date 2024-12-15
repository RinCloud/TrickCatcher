def greatest_common_divisor(a: int, b: int) -> int:
    """
    Return a greatest common divisor of two integers a and b
    
    Parameters:
    a (int): The first integer
    b (int): The second integer
    
    Returns:
    int: The greatest common divisor of a and b
    """
    while b:
        a, b = b, a % b
    return a