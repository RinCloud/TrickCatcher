def monotonic(l: list):
    """Return True is list elements are monotonically increasing or decreasing.
    
    Args:
    l (list): The input list of integers.
    
    Returns:
    bool: True if the list is monotonically increasing or decreasing, False otherwise.
    """
    # Check if the list is monotonically increasing
    if all(l[i] <= l[i+1] for i in range(len(l)-1)):
        return True
    # Check if the list is monotonically decreasing
    if all(l[i] >= l[i+1] for i in range(len(l)-1)):
        return True
    return False