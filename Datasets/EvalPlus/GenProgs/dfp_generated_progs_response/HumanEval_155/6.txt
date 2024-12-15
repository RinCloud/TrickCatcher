def even_odd_count(num):
    """Given an integer, return a tuple that has the number of even and odd digits respectively.
    
    Args:
        num (int): The input integer
        
    Returns:
        tuple: A tuple containing the number of even and odd digits in the input integer
    
    Example:
        >>> even_odd_count(-12)
        (1, 1)
        >>> even_odd_count(123)
        (1, 2)
    """
    even_count = 0
    odd_count = 0
    
    num = abs(num)
    
    while num > 0:
        digit = num % 10
        if digit % 2 == 0:
            even_count += 1
        else:
            odd_count += 1
        num //= 10
    
    return even_count, odd_count