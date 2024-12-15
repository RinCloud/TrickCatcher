def monotonic(l: list):
    """
    Return True is list elements are monotonically increasing or decreasing.
    
    Args:
    l (list): The input list of integers.
    
    Returns:
    bool: True if list elements are monotonically increasing or decreasing, False otherwise.
    
    Examples:
    >>> monotonic([1, 2, 4, 20])
    True
    >>> monotonic([1, 20, 4, 10])
    False
    >>> monotonic([4, 1, 0, -10])
    True
    """
    if all(l[i] <= l[i+1] for i in range(len(l)-1)):
        return True
    elif all(l[i] >= l[i+1] for i in range(len(l)-1)):
        return True
    else:
        return False