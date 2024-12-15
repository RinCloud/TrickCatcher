def iscube(a):
    '''
    Function to check if an integer is a cube of some integer number.
    
    Parameters:
    a (int): The integer number to be checked.
    
    Returns:
    bool: True if the integer is a cube of some integer number, False otherwise.
    '''
    
    if a < 0:
        a = -a
    root = a ** (1/3)
    return int(root + 0.5) ** 3 == a