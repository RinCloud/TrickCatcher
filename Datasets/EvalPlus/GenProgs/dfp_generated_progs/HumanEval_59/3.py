import math
def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2
    """
    # Find all factors of n
    factors = []
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            factors.append(i)
            factors.append(n // i)
    # Find the largest prime factor
    largest_prime = 0
    for factor in factors:
        if is_prime(factor):
            largest_prime = max(largest_prime, factor)
    return largest_prime
def is_prime(n: int):
    """Return True if n is a prime number, False otherwise."""
    if n <= 1:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True