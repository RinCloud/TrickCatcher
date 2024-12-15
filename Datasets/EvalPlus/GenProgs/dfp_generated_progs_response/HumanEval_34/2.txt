def unique(l: list):
    """
    Return sorted unique elements in a list
    
    Params:
    l: list - An input list
    
    Returns:
    list - A list of sorted unique elements
    """
    unique_elements = sorted(list(set(l)))
    return unique_elements