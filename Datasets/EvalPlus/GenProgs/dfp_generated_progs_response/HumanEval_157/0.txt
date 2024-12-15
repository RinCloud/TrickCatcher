def right_angle_triangle(a, b, c):
    '''
    Given the lengths of the three sides of a triangle, returns True if the three
    sides form a right-angled triangle, False otherwise.
    A right-angled triangle is a triangle in which one angle is right angle or 
    90 degrees (i.e., a^2 + b^2 = c^2).
    
    Parameters:
    a (int): Length of side a of the triangle.
    b (int): Length of side b of the triangle.
    c (int): Length of side c of the triangle.
    
    Returns:
    bool: True if the triangle is a right-angled triangle, False otherwise.
    
    Examples:
    >>> right_angle_triangle(3, 4, 5)
    True
    >>> right_angle_triangle(1, 2, 3)
    False
    '''
    if a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2:
        return True
    else:
        return False