def common(l1: list, l2: list):
    """Return sorted unique common elements for two lists."""
    common_elements = [x for x in l1 if x in l2]
    return sorted(set(common_elements))