def choose_num(x, y):
    """This function takes two positive numbers x and y and returns the
    biggest even integer number that is in the range [x, y] inclusive. If 
    there's no such number, then the function should return -1.
    For example:
    choose_num(12, 15) = 14
    choose_num(13, 12) = -1
    """
    
    even = False
    
    if x % 2 == 0 and y % 2 == 0:
        even = True
    
    result = -1  # Initialize result with -1
    
    while x <= y:
        if even:
            if x % 2 == 0:
                result = x  # Update result with the even number
            x += 1
        else:
            if y % 2 == 0:
                result = y  # Update result with the even number
            y -= 1
    
    return result