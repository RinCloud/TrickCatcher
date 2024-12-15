def is_simple_power(x, n):
    if x == 1:
        return True
    if n == 1:
        return False
    while x % n == 0:
        x = x / n
    return x == 1