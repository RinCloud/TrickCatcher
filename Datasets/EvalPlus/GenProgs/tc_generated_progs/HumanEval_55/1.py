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
        return "Input should be a positive integer"
    elif n == 1 or n == 2:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)