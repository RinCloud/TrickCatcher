def median(l: list):
    """Return median of elements in the list l."""
    l.sort()
    n = len(l)
    if n % 2 == 0:
        return (l[(n//2)-1] + l[n//2])/2
    else:
        return l[n//2]