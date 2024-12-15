def digits(n):
    """
    Given a positive integer n, return the product of the odd digits.
    Return 0 if all digits are even.
    
    Args:
    n (int): a positive integer
    
    Returns:
    int: the product of the odd digits or 0 if all digits are even
    """
    product = 1
    for digit in str(n):
        if int(digit) % 2 != 0:
            product *= int(digit)
    if product == 1:
        return 0
    else:
        return product