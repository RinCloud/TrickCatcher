def iscube(a):
    if a == 0:
        return True
    elif a < 0:
        return iscube(-a)
    else:
        root = round(a ** (1 / 3))
        return root ** 3 == a