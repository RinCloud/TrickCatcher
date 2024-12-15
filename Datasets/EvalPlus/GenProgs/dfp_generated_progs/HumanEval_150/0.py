def x_or_y(n, x, y):
    """
    A simple program which should return the value of x if n is 
    a prime number and should return the value of y otherwise.
    
    Args:
    n: an integer which will be checked for primality
    x: an integer value
    y: an integer value
    
    Returns:
    x if n is prime, y otherwise.
    
    Examples:
    >>> x_or_y(7, 34, 12)
    34
    >>> x_or_y(15, 8, 5)
    5
    
    """
    def is_prime(n):
        """
        A function to check if the given number is prime or not.
        
        Args:
        n: an integer which will be checked for primality
        
        Returns:
        True if n is prime, False otherwise
        
        """
        if n <= 1:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
    if is_prime(n):
        return x
    return y