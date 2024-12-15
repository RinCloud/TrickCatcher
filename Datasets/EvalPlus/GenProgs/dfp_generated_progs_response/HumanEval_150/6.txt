def x_or_y(n, x, y):
    """
    A simple program to return x if n is prime, y otherwise.
    
    Arguments:
    n -- the input number (integer)
    x -- value to return if n is prime (integer)
    y -- value to return if n is not prime (integer)
    
    Returns:
    x if n is prime, y otherwise.
    """
    if n < 2:
        return y
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return y
    return x