def below_threshold(l: list, t: int):
    """
    Return True if all numbers in the list l are below threshold t.
    
    Parameters:
    l (list): A list of numbers.
    t (int): A threshold value.
    
    Returns:
    bool: True if all numbers in the list are below the threshold, False otherwise.
    """
    for num in l:
        if num >= t:
            return False
    return True