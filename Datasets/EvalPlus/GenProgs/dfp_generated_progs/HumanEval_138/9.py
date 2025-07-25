def is_equal_to_sum_even(n):
    """
    Evaluate whether the given number n can be written as the sum of exactly 4 positive even numbers
    Args:
    n: an integer
    Returns:
    True if n can be written as the sum of exactly 4 positive even numbers, False otherwise
    Examples:
    >>> is_equal_to_sum_even(4)
    False
    >>> is_equal_to_sum_even(6)
    False
    >>> is_equal_to_sum_even(8)
    True
    """
    
    if n % 2 != 0:
        return False
    
    if n < 8:
        return False
    
    return True