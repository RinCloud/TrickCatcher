def any_int(x, y, z):
    if all(isinstance(i, int) for i in [x, y, z]):
        return x == y + z or y == x + z or z == x + y
    return False