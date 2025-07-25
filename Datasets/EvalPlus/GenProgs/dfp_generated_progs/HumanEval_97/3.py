def multiply(a, b):
    """Returns the product of the unit digits of two integers.
    
    Parameters:
    a (int): The first integer.
    b (int): The second integer.
    
    Returns:
    int: The product of the unit digits of a and b.
    """
    return (abs(a) % 10) * (abs(b) % 10)