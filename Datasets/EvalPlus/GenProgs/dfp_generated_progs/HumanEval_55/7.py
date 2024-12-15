def fib(n: int):
    """
    Return n-th Fibonacci number.
    
    Parameters:
    n (int): The position of the Fibonacci number to be calculated.
    
    Returns:
    int: The n-th Fibonacci number.
    
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
        for i in range(3, n+1):
            c = a + b
            a = b
            b = c
        return b