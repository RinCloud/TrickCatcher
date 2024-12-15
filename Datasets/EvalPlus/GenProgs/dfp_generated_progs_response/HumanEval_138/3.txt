def is_equal_to_sum_even(n):
    """Evaluate whether the given number n can be written as the sum of exactly 4 positive even numbers
    
    Args:
    n (int): The number to check
    
    Returns:
    bool: True if n can be written as the sum of exactly 4 positive even numbers, False otherwise
    """
    # Check if n is even and greater than or equal to 8
    if n % 2 == 0 and n >= 8:
        return True
    
    # Check all possible combinations of 4 positive even numbers
    for i in range(2, n//2 + 1, 2):
        for j in range(2, n//2 + 1, 2):
            for k in range(2, n//2 + 1, 2):
                for l in range(2, n//2 + 1, 2):
                    if i + j + k + l == n:
                        return True
    
    # If no combination of 4 positive even numbers adds up to n, return False
    return False