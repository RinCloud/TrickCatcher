def median(l: list):
    """
    Return median of elements in the list l.
    
    Parameters:
    l (list): A list of numbers
    
    Returns:
    float: The median value of the list
    
    """
    l.sort()
    n = len(l)
    
    if n % 2 == 1:
        return l[n//2]
    else:
        return (l[n//2 - 1] + l[n//2]) / 2