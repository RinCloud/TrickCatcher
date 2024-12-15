def cycpattern_check(a , b):
    for i in range(len(b)):
        if b in a:
            return True
        else:
            b = b[-1] + b[:-1]
    return False