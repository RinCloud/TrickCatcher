def is_multiply_prime(a):
    """
    Returns True if the given number is the multiplication of 3 prime numbers and False otherwise.
    
    Parameters:
    a (int): The number to check for being the multiplication of 3 prime numbers.
    
    Returns:
    bool: True if the given number is the multiplication of 3 prime numbers, False otherwise.
    """
    def is_prime(num):
        """
        Returns True if the given number is prime, False otherwise.
        
        Parameters:
        num (int): The number to check for being prime.
        
        Returns:
        bool: True if the given number is prime, False otherwise.
        """
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True
    count = 0
    for i in range(2, a//2 + 1):
        if is_prime(i) and a % i == 0:
            count += 1
            if count == 3:
                return True
    return False