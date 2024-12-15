def median(l: list):
    """Return median of elements in the list l.
    >>> median([3, 1, 2, 4, 5])
    3
    >>> median([-10, 4, 6, 1000, 10, 20])
    15.0
    """
    sorted_list = sorted(l)
    n = len(sorted_list)
    if n % 2 == 0:
        # if the length of the list is even, get the middle two elements and find the average
        mid1 = sorted_list[n//2]
        mid2 = sorted_list[n//2 - 1]
        median = (mid1 + mid2) / 2
    else:
        # if the length of the list is odd, get the middle element
        median = sorted_list[n//2]
    return median