def right_angle_triangle(a, b, c):
    if not all(isinstance(side, int) for side in (a, b, c)):
        raise TypeError("All sides should be integers")
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2