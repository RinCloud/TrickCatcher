def solution(lst):
    """
    Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions.
    Parameters:
    lst (list): A list of integers
    Returns:
    int: The sum of all odd elements in even positions
    Examples:
    >>> solution([5, 8, 7, 1])
    12
    >>> solution([3, 3, 3, 3, 3])
    9
    >>> solution([30, 13, 24, 321])
    0
    """
    sum = 0
    for i in range(len(lst)):
        if i % 2 == 1 and lst[i] % 2 == 1:
            sum += lst[i]
    return sum