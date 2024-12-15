def change_base(x: int, base: int):
    result = ""
    while x > 0:
        digit = x % base
        result = str(digit) + result
        x = x // base
    return result