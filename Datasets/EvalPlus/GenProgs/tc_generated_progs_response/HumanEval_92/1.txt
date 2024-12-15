def any_int(x, y, z):
    if (isinstance(x, int) and isinstance(y, int) and isinstance(z, int)):
        if x==y+z or y==x+z or z==x+y:
            return True
    return False