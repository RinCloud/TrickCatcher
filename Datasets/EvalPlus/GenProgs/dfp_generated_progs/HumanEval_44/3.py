def change_base(x: int, base: int):
    result = ""
    while x > 0:
        remainder = x % base
        x = x // base
        result = str(remainder) + result
    return result