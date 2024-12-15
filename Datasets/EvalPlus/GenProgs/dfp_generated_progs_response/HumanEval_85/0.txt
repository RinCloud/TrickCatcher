def add(lst):
    """
    Given a non-empty list of integers lst, add the even elements that are at odd indices.
    
    Parameters:
    lst (list): A list of integers
    
    Returns:
    int: The sum of even elements at odd indices.
    
    Example:
    add([4, 2, 6, 7]) returns 2
    """
    sum_even = 0
    
    for i in range(1, len(lst), 2):
        if lst[i] % 2 == 0:
            sum_even += lst[i]
    
    return sum_even