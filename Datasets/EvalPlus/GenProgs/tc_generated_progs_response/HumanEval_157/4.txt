def right_angle_triangle(a, b, c):
    if not all(isinstance(x, int) for x in [a, b, c]):
        return False
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2