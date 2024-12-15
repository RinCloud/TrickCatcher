import math
def is_prime(n):
    """Helper function to check if a number is prime."""
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True
def prime_length(string):
    """Check if the string length is a prime number."""
    return is_prime(len(string))