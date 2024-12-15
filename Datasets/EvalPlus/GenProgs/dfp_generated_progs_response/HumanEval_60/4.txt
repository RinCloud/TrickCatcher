def sum_to_n(n: int)-> int:
    """
    sum_to_n is a function that sums numbers from 1 to n.
    
    Parameters:
    n (int): The number up to which the sum will be calculated.
    
    Returns:
    int: The sum of the numbers from 1 to n.
    
    Examples:
    >>> sum_to_n(30)
    465
    >>> sum_to_n(100)
    5050
    >>> sum_to_n(5)
    15
    >>> sum_to_n(10)
    55
    >>> sum_to_n(1)
    1
    """
    return (n * (n + 1)) // 2