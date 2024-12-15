def monotonic(l: list):
    """Return True is list elements are monotonically increasing or decreasing.
    """
    return l == sorted(l) or l == sorted(l, reverse=True)