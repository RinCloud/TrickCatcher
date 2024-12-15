def is_simple_power(x, n):
    if x <= 0 or n <= 0:
        return False
    result = n ** int(x ** (1/n))
    return result == x