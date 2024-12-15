def unique(l: list):
    """
    Return a list of sorted unique elements from the input list.
    
    Args:
    l -- an input list
    
    Returns:
    a new list of sorted unique elements from the input list
    
    """
    return sorted(list(set(l)))