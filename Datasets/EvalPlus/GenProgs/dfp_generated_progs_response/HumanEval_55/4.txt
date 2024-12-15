def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    21
    """
    if n <= 0:
        return None
    elif n <= 2:
        return 1
    else:
        a, b = 1, 1
        for _ in range(n-2):
            a, b = b, a + b
        return b