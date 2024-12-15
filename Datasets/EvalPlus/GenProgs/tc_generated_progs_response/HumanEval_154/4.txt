def cycpattern_check(a , b):
    for i in range(len(b)):
        if b in a:
            return True
        b = b[1:] + b[0]
    return False