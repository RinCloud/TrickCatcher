def greatest_common_divisor(a: int, b: int) -> int:
    """
    Return a greatest common divisor of two integers a and b
    Parameters:
    a (int): First integer
    b (int): Second integer
    Returns:
    int: Greatest common divisor of a and b
    """
    while b != 0:
        a, b = b, a % b
    return a