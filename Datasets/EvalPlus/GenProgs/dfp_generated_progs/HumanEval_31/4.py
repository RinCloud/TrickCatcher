import math
def is_prime(n):
    """Return true if a given number is prime, and false otherwise.
    Parameters:
    n (int): A positive integer.
    Returns:
    bool: True if the number is prime, False otherwise.
    """
    if n <= 1:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True