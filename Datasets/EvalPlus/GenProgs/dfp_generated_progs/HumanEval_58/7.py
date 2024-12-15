def common(l1: list, l2: list):
    """
    Return sorted unique common elements for two lists.
    Args:
    l1 (list): First list
    l2 (list): Second list
    Returns:
    list: Sorted unique common elements
    """
    # Find the common elements using set intersection
    common_elements = set(l1) & set(l2)
    # Sort the common elements
    sorted_common_elements = sorted(common_elements)
    return sorted_common_elements