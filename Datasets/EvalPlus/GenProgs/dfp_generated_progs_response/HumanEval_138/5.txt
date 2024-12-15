def is_equal_to_sum_even(n):
    # check if n is less than 4
    if n < 4:
        return False
    
    # check if n is even
    if n % 2 != 0:
        return False
    
    # check if n is divisible by 4
    if n % 4 == 0:
        return True
    
    # check if n-4 is divisible by 4
    if (n-4) % 4 == 0:
        return True
    
    # check if n-8 is divisible by 4
    if (n-8) % 4 == 0:
        return True
    
    # check if n-12 is divisible by 4
    if (n-12) % 4 == 0:
        return True
    
    return False