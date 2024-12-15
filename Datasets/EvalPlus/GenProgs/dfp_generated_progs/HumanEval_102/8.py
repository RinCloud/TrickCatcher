def choose_num(x, y):
    """This function takes two positive numbers x and y and returns the
    biggest even integer number that is in the range [x, y] inclusive. If 
    there's no such number, then the function should return -1.
    For example:
    choose_num(12, 15) = 14
    choose_num(13, 12) = -1
    
    Args:
    x (int): a positive number
    y (int): a positive number
    
    Returns:
    int: the biggest even integer number in the range [x, y] inclusive, or -1 if no such number exists
    """
    
    max_even = -1
    
    # Loop through each number in the range [x, y]
    for i in range(x, y+1):
        # Check if the number is even and greater than the current maximum even number found so far
        if i % 2 == 0 and i > max_even:
            max_even = i
            
    return max_even