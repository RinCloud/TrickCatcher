def common(l1, l2):
    """
    Return sorted unique common elements for two lists.
    
    Parameters:
    l1 (list): The first list.
    l2 (list): The second list.
    
    Returns:
    list: A list of sorted unique common elements found in both lists.
    """
    return sorted(list(set(l1) & set(l2)))