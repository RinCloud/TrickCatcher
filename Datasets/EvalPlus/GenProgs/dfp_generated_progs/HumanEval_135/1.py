def can_arrange(arr):
    """Returns the largest index of an element which is not greater than or equal to 
    the element immediately preceding it. If no such element exists then return -1.
    
    Args:
    arr: a list of unique elements
    
    Returns:
    int: largest index of an element which is not greater than or equal to the 
         element immediately preceding it, or -1 if no such element exists
    """
    max_index = -1
    for i in range(1, len(arr)):
        if arr[i] < arr[i-1]:
            max_index = i-1
    return max_index