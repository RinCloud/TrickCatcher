def greatest_common_divisor(a: int, b: int) -> int:
    """
    Return the greatest common divisor of two integers a and b.
    
    Arguments:
    a -- an integer
    b -- an integer
    
    Returns:
    an integer, the greatest common divisor of a and b
    """
    while b != 0:
        a, b = b, a % b
    return a