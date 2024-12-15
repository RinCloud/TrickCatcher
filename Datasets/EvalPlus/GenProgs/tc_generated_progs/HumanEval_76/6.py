def is_simple_power(x, n):
    if x == 1:
        return True
    if n == 1:
        return False
    if x % n == 0:
        return is_simple_power(x / n, n)
    elif x % n == 0 and x != n:
        return is_simple_power(n,  n)
    else:
        return False