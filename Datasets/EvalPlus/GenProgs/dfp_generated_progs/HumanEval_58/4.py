def common(l1: list, l2: list):
    """Return sorted unique common elements for two lists."""
    common_elements = []
    for num in l1:
        if num in l2 and num not in common_elements:
            common_elements.append(num)
    common_elements.sort()
    return common_elements