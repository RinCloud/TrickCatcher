def is_multiply_prime(a):
    """This function checks if the given number is the multiplication of 3 prime numbers.
    Args:
    a (int): The number to be checked.
    Returns:
    bool: True if the number is the multiplication of 3 prime numbers, False otherwise.
    """
    def is_prime(n):
        """This function checks if the given number is prime.
        Args:
        n (int): The number to be checked.
        Returns:
        bool: True if the number is prime, False otherwise.
        """
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
    prime_count = 0
    for i in range(2, int(a**0.5) + 1):
        if a % i == 0 and is_prime(i):
            prime_count += 1
            if prime_count == 3:
                return True
    return False