def digits(n):
    """
    Given a positive integer n, return the product of the odd digits.
    Return 0 if all digits are even.
    
    Parameters:
    n (int): A positive integer
    
    Returns:
    int: The product of the odd digits or 0 if all digits are even
    """
    product = 1
    while n > 0:
        digit = n % 10
        if digit % 2 != 0:
            product *= digit
        n //= 10
    if product == 1:
        return 0
    return product