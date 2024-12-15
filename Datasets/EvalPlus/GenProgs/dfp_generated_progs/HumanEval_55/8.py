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
        return "Input should be a positive integer."
    elif n <= 2:
        return n
    else:
        a = 1
        b = 1
        for _ in range(n-2):
            temp = a + b
            a = b
            b = temp
        return b