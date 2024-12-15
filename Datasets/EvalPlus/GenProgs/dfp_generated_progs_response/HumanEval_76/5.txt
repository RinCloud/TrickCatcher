def is_simple_power(x, n):
    if x <= 0 or n <= 0:
        return False
    i = 0
    while n**i <= x:
        if n**i == x:
            return True
        i += 1
    return False