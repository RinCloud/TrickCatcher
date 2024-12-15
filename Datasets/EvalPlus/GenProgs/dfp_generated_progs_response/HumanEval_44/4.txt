def change_base(x: int, base: int):
    """
    Change numerical base of input number x to base.
    :param x: integer to convert
    :param base: base to convert to
    :return: string representation of the converted number
    """
    result = ""
    if x == 0:
        return "0"
    while x:
        remainder = x % base
        result = str(remainder) + result
        x = x // base
    return result