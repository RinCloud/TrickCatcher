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
        return "Input must be a positive integer."
    if n == 1 or n == 2:
        return 1
    a, b = 1, 1
    for _ in range(2, n):
        a, b = b, a + b
    
    return b