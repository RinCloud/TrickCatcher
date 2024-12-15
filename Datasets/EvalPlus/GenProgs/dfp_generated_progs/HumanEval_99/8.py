def closest_integer(value):
    num = float(value)
    return int(num) if int(num) == num else int(num + abs(num)/num)