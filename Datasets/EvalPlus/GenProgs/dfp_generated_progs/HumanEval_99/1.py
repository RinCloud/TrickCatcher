def closest_integer(value):
    # convert value to float
    value = float(value)
    # round value away from zero
    if value >= 0:
        closest_int = int(value + 0.5)
    else:
        closest_int = int(value - 0.5)
    return closest_int