def right_angle_triangle(a, b, c):
    """
    Given the lengths of the three sides of a triangle, checks if the
    triangle is a right-angled triangle.
    Parameters:
    a (float): length of side a
    b (float): length of side b
    c (float): length of side c
    Returns:
    bool: True if the triangle is a right-angled triangle, False otherwise
    """
    # Check if a^2 + b^2 = c^2 (Pythagorean theorem)
    if a**2 + b**2 == c**2:
        return True
    # Check if a^2 + c^2 = b^2 (Pythagorean theorem)
    elif a**2 + c**2 == b**2:
        return True
    # Check if b^2 + c^2 = a^2 (Pythagorean theorem)
    elif b**2 + c**2 == a**2:
        return True
    else:
        return False