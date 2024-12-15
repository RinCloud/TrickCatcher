def greatest_common_divisor(a: int, b: int) -> int:
    """ Return a greatest common divisor of two integers a and b
    >>> greatest_common_divisor(3, 5)
    1
    >>> greatest_common_divisor(25, 15)
    5
    """
    # While b is not equal to zero
    while b != 0:
        # Set a to b
        a, b = b, a % b
    # Return a
    return a