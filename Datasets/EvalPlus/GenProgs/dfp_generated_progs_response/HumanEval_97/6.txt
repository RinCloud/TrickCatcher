def multiply(a, b):
    """
    Takes two integers a and b, and returns the product of their unit digits.
    
    Parameters:
    a (int): The first integer.
    b (int): The second integer.
    
    Returns:
    int: The product of the unit digits of a and b.
    
    Examples:
    >>> multiply(148, 412)
    16
    >>> multiply(19, 28)
    72
    >>> multiply(2020, 1851)
    0
    >>> multiply(14, -15)
    20
    """
    return abs(a % 10 * b % 10)