def triangle_area(a, b, c):
    '''
    Given the lengths of the three sides of a triangle. Return the area of
    the triangle rounded to 2 decimal points if the three sides form a valid triangle. 
    Otherwise return -1
    
    Parameters:
    a (float): The length of side a.
    b (float): The length of side b.
    c (float): The length of side c.
    
    Returns:
    float: The area of the triangle rounded to 2 decimal points if the three sides form a valid triangle.
    -1 if the three sides do not form a valid triangle.
    
    Example:
    triangle_area(3, 4, 5) --> 6.00
    triangle_area(1, 2, 10) --> -1
    '''
    # Check if the sides form a valid triangle
    if a + b > c and a + c > b and b + c > a:
        # Calculate the semi-perimeter
        s = (a + b + c) / 2
        
        # Use Heron's formula to calculate the area
        area = (s * (s - a) * (s - b) * (s - c)) ** 0.5
        
        # Round the area to 2 decimal points
        area = round(area, 2)
        
        return area
    else:
        return -1