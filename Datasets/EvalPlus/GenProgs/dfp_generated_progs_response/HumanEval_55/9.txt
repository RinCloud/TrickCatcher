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
    elif n == 1:
        return 1
    elif n == 2:
        return 1
    else:
        a = 1
        b = 1
        for _ in range(3, n+1):
            c = a + b
            a = b
            b = c
        return c