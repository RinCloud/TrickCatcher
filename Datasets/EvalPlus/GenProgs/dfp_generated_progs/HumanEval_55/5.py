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
        return "Invalid input!"
    elif n == 1:
        return 1
    elif n == 2:
        return 1
    else:
        fib1 = 1
        fib2 = 1
        for _ in range(3, n+1):
            fib1, fib2 = fib2, fib1 + fib2
        return fib2