def add(lst):
    """
    Given a non-empty list of integers lst, add the even elements that are at odd indices.
    
    Parameters:
    lst (list): A non-empty list of integers.
    
    Returns:
    int: The sum of the even elements at odd indices.
    
    Examples:
    add([4, 2, 6, 7]) ==> 2
    """
    
    sum_even = 0
    
    for i in range(len(lst)):
        if i % 2 != 0 and lst[i] % 2 == 0:
            sum_even += lst[i]
    
    return sum_even