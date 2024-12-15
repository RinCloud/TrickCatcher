def any_int(x, y, z):
    if type(x) == int and type(y) == int and type(z) == int:
        if x == y + z or y == x + z or z == x + y:
            return True
        else:
            return False
    else:
        return False