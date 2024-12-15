def is_equal_to_sum_even(n):
    """Evaluate whether the given number n can be written as the sum of exactly 4 positive even numbers
    
    Args:
    n (int): The number to be evaluated
    
    Returns:
    bool: True if n can be written as the sum of 4 positive even numbers, False otherwise
    
    Example:
    >>> is_equal_to_sum_even(4)
    False
    
    >>> is_equal_to_sum_even(6)
    False
    
    >>> is_equal_to_sum_even(8)
    True
    """
    # Check if n can be divided by 4 and has a remainder of 0
    if n % 4 == 0:
        return True
    else:
        return False