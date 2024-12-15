def closest_integer(value):
    number = float(value)
    if number >= 0:
        closest_int = int(number + 0.5)
    else:
        closest_int = int(number - 0.5)
    return closest_int