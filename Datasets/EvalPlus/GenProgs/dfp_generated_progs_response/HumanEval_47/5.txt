def median(l: list):
    """Return median of elements in the list l.
    >>> median([3, 1, 2, 4, 5])
    3
    >>> median([-10, 4, 6, 1000, 10, 20])
    15.0
    """
    sorted_l = sorted(l)
    length = len(sorted_l)
    if length % 2 == 0:
        mid = int(length / 2)
        return (sorted_l[mid - 1] + sorted_l[mid]) / 2
    else:
        mid = int(length / 2)
        return sorted_l[mid]   