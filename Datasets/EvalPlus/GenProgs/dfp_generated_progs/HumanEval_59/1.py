def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    """
    i = 2
    while i <= n:
        if n % i == 0:
            n = n / i
        else:
            i = i + 1
    return i