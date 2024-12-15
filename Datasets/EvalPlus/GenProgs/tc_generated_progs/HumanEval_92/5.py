def any_int(x, y, z):
    if ((x == y + z) or (y == x + z) or (z == x + y)) and all(isinstance(n, int) for n in (x, y, z)):
        return True
    else:
        return False