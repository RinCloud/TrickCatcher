def largest_divisor(n: int) -> int:
    """
    For a given number n, find the largest number that divides n evenly, smaller than n
    
    Args:
    n: an integer representing the number
    
    Returns:
    an integer representing the largest divisor of n
    
    """
    
    if n == 0:
        return 0
    
    for i in range(n-1, 0, -1):
        if n % i == 0:
            return i
    
    return None