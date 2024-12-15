def is_simple_power(x, n):
    if x == 1:
        return True
    for i in range(2, x+1):
        if n ** i == x:
            return True
    return False