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
    if n == 1:
        return 0
    if n == 2:
        return 1
    
    fib_numbers = [0, 1]
    for i in range(2, n):
        fib_numbers.append(fib_numbers[i-1] + fib_numbers[i-2])
        
    return fib_numbers[n-1]