def is_equal_to_sum_even(n):
    """
    Evaluate whether the given number n can be written as the sum of exactly 4 positive even numbers
    
    Parameters:
    n (int): The number to be evaluated
    
    Returns:
    bool: True if n can be written as the sum of exactly 4 positive even numbers, False otherwise
    """
    if n % 2 != 0:
        return False
    half = n // 2
    if half % 2 == 0:
        return True
    elif half % 4 == 0 and (half+2) % 4 == 0:
        return True
    return False