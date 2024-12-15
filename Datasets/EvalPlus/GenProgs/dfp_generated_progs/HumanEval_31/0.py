def is_prime(n):
    """Return true if a given number is prime, and false otherwise.
    A prime number is a whole number greater than 1 that is only divisible by 1 and itself.
    Examples:
    >>> is_prime(6)
    False
    >>> is_prime(101)
    True
    >>> is_prime(11)
    True
    >>> is_prime(13441)
    True
    >>> is_prime(61)
    True
    >>> is_prime(4)
    False
    >>> is_prime(1)
    False
    """
    if n <= 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True