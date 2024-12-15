def change_base(x: int, base: int):
    """Change numerical base of input number x to base.
    return string representation after the conversion.
    base numbers are less than 10.
    """
    digits = []
    
    # handling for the case when x is 0
    if x == 0:
        return '0'
    
    while x > 0:
        remainder = x % base
        digits.append(str(remainder))
        x = x // base
    
    digits.reverse()
    return ''.join(digits)