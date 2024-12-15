def is_simple_power(x, n):
    if x <= 0:
        return False
    if n == 1:
        return x == 1
    power = 0
    while n**power <= x:
        if n**power == x:
            return True
        power += 1
    return False