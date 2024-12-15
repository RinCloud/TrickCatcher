def largest_divisor(n: int) -> int:
    """
    Returns the largest divisor of a given number n, smaller than n
    
    Parameters:
    n (int): The number to find the largest divisor of
    
    Returns:
    int: The largest divisor of n
    
    Examples:
    >>> largest_divisor(15)
    5
    """
    divisor = n - 1
    while divisor > 0:
        if n % divisor == 0:
            return divisor
        divisor -= 1
    
    return -1