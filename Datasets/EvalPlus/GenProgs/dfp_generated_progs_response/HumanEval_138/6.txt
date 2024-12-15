def is_equal_to_sum_even(n):
    """Evaluate whether the given number n can be written as the sum of exactly 4 positive even numbers"""
    
    if n < 8:
        return False
    
    for a in range(2, n-6, 2):
        for b in range(2, n-4, 2):
            for c in range(2, n-2, 2):
                for d in range(2, n, 2):
                    if a + b + c + d == n:
                        return True
    return False