

def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2
    """
    largest = 1
    while n % 2 == 0:
        largest = 2
        n = n // 2
    # n is odd at this point.
    while n % 3 == 0:
        largest = 3
        n = n // 3
    while n % 5 == 0:
        largest = 5
        n = n // 5
    # n is not a multiple of 2, 3, or 5 at this point.
    while n % 6 == 0:
        largest = 6
        n = n // 6
    while n % 7 == 0:
        largest = 7
        n = n // 7
    while n % 9 == 0:
        largest = 9
        n = n // 9
    # n is not a multiple of 2, 3, 5, 6, 7, or 9 at this point.
    while n % 11 == 0:
        largest = 11
        n = n // 11
    while n % 13 == 0:
        largest = 13
        n = n // 13
    while n % 17 == 0:
        largest = 17
        n = n // 17
    while n % 19 == 0:
        largest = 19
        n = n // 19
    # n is not a multiple of 2, 3, 5, 6, 7, 9, 11, 13, 17, or 19 at this point.
    # If n is greater than 1, it is a prime greater than largest.
    if n > 1:
        return n
    return largest
