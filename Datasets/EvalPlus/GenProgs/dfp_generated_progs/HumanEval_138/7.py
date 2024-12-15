def is_equal_to_sum_even(n):
    """
    Evaluate whether the given number n can be written as the sum of exactly 4 positive even numbers
    
    Parameters:
    n (int): The input number
    
    Returns:
    bool: True if n can be written as the sum of exactly 4 positive even numbers, False otherwise
    
    Examples:
    is_equal_to_sum_even(4) returns False
    is_equal_to_sum_even(6) returns False
    is_equal_to_sum_even(8) returns True
    """
    # check if the number is greater than or equal to 8
    if n >= 8:
        # iterate through all the combinations of 4 positive even numbers
        for i in range(2, n//2 + 1, 2):
            for j in range(2, n//2 + 1, 2):
                for k in range(2, n//2 + 1, 2):
                    for l in range(2, n//2 + 1, 2):
                        # check if the sum of the numbers is equal to n
                        if i + j + k + l == n:
                            return True
    return False