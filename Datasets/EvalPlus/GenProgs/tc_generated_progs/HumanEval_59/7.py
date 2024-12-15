def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2
    """
    largest = 1
    factor = 2
    while factor <= n:
        if n % factor == 0:
            largest = factor
            n = n // factor
        else:
            factor += 1
    return largest