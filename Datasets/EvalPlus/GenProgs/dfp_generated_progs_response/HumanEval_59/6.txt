def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2
    """
    
    # Initialize the largest_prime variable to store the largest prime factor
    largest_prime = 1
    
    # Check for 2 as a prime factor and divide n by 2 until it is no longer divisible by it
    while n % 2 == 0:
        largest_prime = 2
        n = n // 2
    
    # Check for odd prime factors from 3 to the square root of n
    i = 3
    while i * i <= n:
        while n % i == 0:
            largest_prime = i
            n = n // i
        i += 2
    
    # Check if n is a prime number itself (greater than 2)
    if n > 2:
        largest_prime = n
    
    return largest_prime