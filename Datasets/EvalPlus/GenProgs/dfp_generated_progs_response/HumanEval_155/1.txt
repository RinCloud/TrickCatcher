def even_odd_count(num):
    """
    Given an integer, return a tuple that has the number of even and odd digits respectively.
    
    Parameters:
    num (int): The input integer
    
    Returns:
    tuple: A tuple containing the count of even and odd digits respectively
    
    Example:
    even_odd_count(-12) ==> (1, 1)
    even_odd_count(123) ==> (1, 2)
    """
    num_str = str(abs(num))
    even_count = 0
    odd_count = 0
    
    for digit in num_str:
        if int(digit) % 2 == 0:
            even_count += 1
        else:
            odd_count += 1
    
    if num < 0:
        even_count = -even_count
    
    return (even_count, odd_count)