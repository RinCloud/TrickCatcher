def closest_integer(value):
    number = float(value)
    integer = int(number)
    if number - integer >= 0.5:
        integer += 1
    elif number - integer <= -0.5:
        integer -= 1
    return integer