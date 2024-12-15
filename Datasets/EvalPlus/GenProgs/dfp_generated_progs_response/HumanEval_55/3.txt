def fib(n: int):
    """
    Return n-th Fibonacci number.
    
    Parameters:
    n (int): The position of the Fibonacci number to be returned.
    
    Returns:
    int: The n-th Fibonacci number.
    
    Examples:
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    21
    """
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib(n-1) + fib(n-2)