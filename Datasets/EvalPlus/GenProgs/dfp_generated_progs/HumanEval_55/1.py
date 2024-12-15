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
        return 'Invalid Input'
    if n == 1 or n == 2:
        return 1
    
    a, b = 1, 1
    for _ in range(3, n+1):
        a, b = b, a+b
    
    return b