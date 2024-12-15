def order_by_points(nums):
    """
    This function sorts the given list of integers in ascending order
    according to the sum of their digits.
    
    Args:
    nums : list : List of integers
    
    Returns:
    list : Sorted list of integers according to the sum of their digits
    
    Examples:
    >>> order_by_points([1, 11, -1, -11, -12])
    [-1, -11, 1, -12, 11]
    
    >>> order_by_points([])
    []
    """
    return sorted(nums, key=lambda x: (sum(map(int, str(x))), nums.index(x)))