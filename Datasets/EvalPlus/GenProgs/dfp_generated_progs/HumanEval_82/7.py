def prime_length(string):
    """
    This function takes a string as input and returns True if the length of the string is a prime number,
    and False otherwise.
    
    Parameters:
    string (str): A string
    
    Returns:
    bool: True if the length of the string is a prime number, False otherwise
    """
    
    def is_prime(n):
        if n <= 1:
            return False
        if n <= 3:
            return True
        if n % 2 == 0 or n % 3 == 0:
            return False
        i = 5
        while i * i <= n:
            if n % i == 0 or n % (i + 2) == 0:
                return False
            i += 6
        return True
    
    length = len(string)
    return is_prime(length)