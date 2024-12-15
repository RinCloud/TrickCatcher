def change_base(x: int, base: int):
    """Change numerical base of input number x to base.
    return string representation after the conversion.
    base numbers are less than 10.
    """
    result = ''
    while x > 0:
        result = str(x % base) + result
        x = x // base
    return result