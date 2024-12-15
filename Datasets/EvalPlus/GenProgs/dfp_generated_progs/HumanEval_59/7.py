def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    """
    
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
    return n