def solution(lst):
    """
    Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions.
    Parameters:
    lst (list): A non-empty list of integers.
    
    Returns:
    int: The sum of all odd elements that are in even positions.
    """
    return sum(lst[i] for i in range(1, len(lst), 2) if lst[i] % 2 != 0)