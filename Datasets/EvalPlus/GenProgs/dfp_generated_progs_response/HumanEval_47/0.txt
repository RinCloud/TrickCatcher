def median(l: list):
    """Return median of elements in the list l.
    >>> median([3, 1, 2, 4, 5])
    3
    >>> median([-10, 4, 6, 1000, 10, 20])
    15.0
    """
    length = len(l)
    sorted_list = sorted(l)
    
    if length % 2 == 0:
        median1 = sorted_list[length//2]
        median2 = sorted_list[length//2 - 1]
        median = (median1 + median2) / 2
        return median
    else:
        median = sorted_list[length//2]
        return median