def multiply(a, b):
    """Complete the function that takes two integers and returns 
    the product of their unit digits.
    
    Args:
    a (int): The first integer.
    b (int): The second integer.
    
    Returns:
    int: The product of the unit digits of a and b.
    
    Examples:
    multiply(148, 412) should return 16.
    multiply(19, 28) should return 72.
    multiply(2020, 1851) should return 0.
    multiply(14,-15) should return 20.
    """
    return abs(a % 10 * b % 10)