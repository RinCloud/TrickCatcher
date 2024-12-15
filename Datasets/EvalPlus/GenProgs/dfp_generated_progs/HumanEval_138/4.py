def is_equal_to_sum_even(n):
    """Evaluate whether the given number n can be written as the sum of exactly 4 positive even numbers"""
    # If n is less than 8, it cannot be written as the sum of exactly 4 positive even numbers
    if n < 8:
        return False
    
    # If n is divisible by 4, it can be written as the sum of 4 positive even numbers
    if n % 4 == 0:
        return True
    
    # If n is not divisible by 4, it can be written as the sum of 4 positive even numbers if n - 8 is divisible by 4
    if (n - 8) % 4 == 0:
        return True
    
    # If none of the above conditions are met, n cannot be written as the sum of exactly 4 positive even numbers
    return False