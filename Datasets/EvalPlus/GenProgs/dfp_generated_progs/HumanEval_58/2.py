def common(l1: list, l2: list):
    """
    Return sorted unique common elements for two lists.
    Args:
    l1 (list): First list
    l2 (list): Second list
    Returns:
    list: Sorted unique common elements
    """
    common_elements = set(l1).intersection(set(l2))
    return sorted(list(common_elements))