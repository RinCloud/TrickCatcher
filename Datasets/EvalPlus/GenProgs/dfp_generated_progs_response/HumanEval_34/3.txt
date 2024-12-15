def unique(l: list):
    """Return sorted unique elements in a list
    >>> unique([5, 3, 5, 2, 3, 3, 9, 0, 123])
    [0, 2, 3, 5, 9, 123]
    """
    unique_list = []
    for i in l:
        if i not in unique_list:
            unique_list.append(i)
    unique_list.sort()
    return unique_list