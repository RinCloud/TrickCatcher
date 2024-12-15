def largest_prime_factor(n: int):
    """
    Return the largest prime factor of n.
    Parameters:
    n (int): The number to find the largest prime factor of.
    Returns:
    int: The largest prime factor of n.
    Assumptions:
    n is greater than 1 and is not a prime number.
    """
    factor = 2
    while factor * factor <= n:
        if n % factor:
            factor += 1
        else:
            n //= factor
    return n