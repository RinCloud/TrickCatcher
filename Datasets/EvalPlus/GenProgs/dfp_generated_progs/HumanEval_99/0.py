def closest_integer(value):
    num = float(value)
    if num >= 0:
        return int(num + 0.5)
    else:
        return int(num - 0.5)