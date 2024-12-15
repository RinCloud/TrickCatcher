def choose_num(x, y):
    """This function takes two positive numbers x and y and returns the
    biggest even integer number that is in the range [x, y] inclusive. If 
    there's no such number, then the function should return -1.
    
    Parameters:
    x (int): The lower bound of the range.
    y (int): The upper bound of the range.
    
    Returns:
    int: The biggest even integer in the range [x, y], or -1 if there is no such number.
    """
    if x > y:
        return -1
    
    for num in range(y, x - 1, -1):
        if num % 2 == 0:
            return num
    
    return -1