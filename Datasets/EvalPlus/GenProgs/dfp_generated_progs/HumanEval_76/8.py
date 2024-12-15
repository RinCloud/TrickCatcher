def is_simple_power(x, n):
    if n**int(x**(1/n)) == x:
        return True
    else:
        return False