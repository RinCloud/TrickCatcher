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
    
    max_even = -1
    if even:
        for num in range(y, x - 1, -1):
            if num % 2 == 0:
                max_even = num
                break
    else:
        for num in range(y, x - 1, -1):
            if num % 2 == 0:
                max_even = num
                break
    return max_even