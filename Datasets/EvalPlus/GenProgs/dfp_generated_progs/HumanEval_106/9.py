def f(n):
    """ Returns a list of size n, where the value at index i is the factorial of i if i is even,
    or the sum of numbers from 1 to i if i is odd.
    
    Parameters:
    n (int): The size of the list
    
    Returns:
    list: A list of size n
    
    Example:
    >>> f(5)
    [1, 2, 6, 24, 15]
    """
    result = []
    for i in range(1, n+1):
        if i % 2 == 0:
            fact = 1
            for j in range(2, i+1):
                fact *= j
            result.append(fact)
        else:
            result.append(sum(range(1, i+1)))
    return result