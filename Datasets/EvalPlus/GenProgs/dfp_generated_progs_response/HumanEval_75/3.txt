def is_multiply_prime(a):
    """Returns true if the given number is the multiplication of 3 prime numbers and false otherwise."""
    
    def is_prime(n):
        """Returns true if the given number is prime and false otherwise."""
        if n < 2:
            return False
        for i in range(2, int(n**(0.5)) + 1):
            if n % i == 0:
                return False
        return True
    
    prime_count = 0
    for i in range(2, a+1):
        if a % i == 0 and is_prime(i):
            prime_count += 1
    return prime_count == 3