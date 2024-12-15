def cycpattern_check(a , b):
    for i in range(len(a)):
        if b in a:
            return True
        a = a[1:] + a[0]
    return False