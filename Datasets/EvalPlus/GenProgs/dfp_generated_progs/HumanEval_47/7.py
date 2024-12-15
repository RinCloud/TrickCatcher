def median(l: list):
    """Return median of elements in the list l.
    >>> median([3, 1, 2, 4, 5])
    3
    >>> median([-10, 4, 6, 1000, 10, 20])
    15.0
    """
    sorted_l = sorted(l)
    n = len(sorted_l)
    if n % 2 == 0:
        median = (sorted_l[(n//2)-1] + sorted_l[n//2]) / 2
    else:
        median = sorted_l[n//2]
    return median