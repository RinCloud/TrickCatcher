def multiply(a, b):
    """Complete the function that takes two integers and returns 
    the product of their unit digits.
    Assume the input is always valid.
    Examples:
    multiply(148, 412) should return 24.
    multiply(19, 28) should return 72.
    multiply(2020, 1851) should return 0.
    multiply(14,-15) should return 0.
    """
    
    product = (abs(a) % 10) * (abs(b) % 10)
    return product if (a < 0 and b < 0) or (a >= 0 and b >= 0) else -product