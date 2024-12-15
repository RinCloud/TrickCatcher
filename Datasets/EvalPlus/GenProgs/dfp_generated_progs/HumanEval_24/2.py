def largest_divisor(n: int) -> int:
    """
    For a given number n, find the largest number that divides n evenly, smaller than n
    Parameters:
    n (int): The number to find the largest divisor of.
    Returns:
    int: The largest divisor of n.
    Examples:
    >>> largest_divisor(15)
    5
    """
    # Start from n-1 and check for divisibility
    for i in range(n-1, 0, -1):
        if n % i == 0:
            return i
    # If a divisor is not found, return 1 as the largest divisor
    return 1