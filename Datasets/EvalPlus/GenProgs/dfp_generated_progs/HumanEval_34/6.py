def unique(l: list):
    """
    Return sorted unique elements in a list
    
    Parameters:
    l (list): A list of numbers
    
    Returns:
    list: A sorted list of unique elements from the input list
    """
    return sorted(list(set(l)))