def digits(n):
    """
    Given a positive integer n, return the product of the odd digits.
    Return 0 if all digits are even.
    
    Args:
    n : int : positive integer
    
    Returns:
    int : product of the odd digits
    
    Example:
    digits(1) -> 1
    digits(4) -> 0
    digits(235) -> 15
    """
    product = 1
    for digit in str(n):
        digit = int(digit)
        if digit % 2 != 0:
            product *= digit
    if product == 1:
        return 0
    return product