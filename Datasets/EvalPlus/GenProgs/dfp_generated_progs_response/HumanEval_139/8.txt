def special_factorial(n):
    """Calculate the special factorial of an integer.
    
    The special factorial is defined as the product of factorials starting from the given integer down to 1.
    
    Args:
        n (int): The given integer.
        
    Returns:
        int: The special factorial of the given integer.
    """
    result = 1
    for i in range(n, 0, -1):
        factorial = 1
        for j in range(i, 0, -1):
            factorial *= j
        result *= factorial
    return result