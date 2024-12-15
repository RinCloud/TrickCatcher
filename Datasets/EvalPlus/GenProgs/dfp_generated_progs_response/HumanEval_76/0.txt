def is_simple_power(x, n):
    if x == 1:
        return True
    elif x < n:
        return False
    else:
        power = 0
        while n**power <= x:
            if n**power == x:
                return True
            power += 1
        return False