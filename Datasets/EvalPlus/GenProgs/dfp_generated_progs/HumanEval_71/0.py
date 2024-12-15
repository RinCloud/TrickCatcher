def triangle_area(a, b, c):
    # check if the three sides form a valid triangle
    if a+b > c and a+c > b and b+c > a:
        # calculate the semi-perimeter of the triangle
        s = (a + b + c) / 2
        # calculate the area of the triangle using Heron's formula
        area = (s * (s - a) * (s - b) * (s - c)) ** 0.5
        # round the area to 2 decimal places
        area = round(area, 2)
        return area
    else:
        return -1