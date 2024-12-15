def largest_divisor(n: int) -> int:
    """
    For a given number n, find the largest number that divides n evenly, smaller than n
    
    Args:
    n: An integer representing the number
    
    Returns:
    An integer representing the largest divisor of n that is smaller than n
    """
    divisor = n - 1
    
    while divisor > 0:
        if n % divisor == 0:
            return divisor
        divisor -= 1
    
    return divisor