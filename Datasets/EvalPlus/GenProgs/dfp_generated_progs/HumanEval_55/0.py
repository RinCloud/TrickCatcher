def fib(n: int):
    """
    Return n-th Fibonacci number.
    Parameters:
    n (int): The index of the Fibonacci number to be calculated.
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
        return "Please provide a positive integer."
    elif n == 1:
        return 1
    elif n == 2:
        return 1
    else:
        fib_prev = 1
        fib_curr = 1
        for i in range(n - 2):
            fib_next = fib_prev + fib_curr
            fib_prev = fib_curr
            fib_curr = fib_next
        return fib_curr