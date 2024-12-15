def iscube(a):
    '''
    This function takes an integer a and returns True if the input is a cube of some integer number.
    
    Parameters:
    a (int): The input integer value
    
    Returns:
    bool: True if the input is a cube of some integer number, False otherwise
    
    Examples:
    >>> iscube(1)
    True
    >>> iscube(2)
    False
    >>> iscube(-1)
    True
    >>> iscube(64)
    True
    >>> iscube(0)
    True
    >>> iscube(180)
    False
    '''
    return a**(1/3) == int(a**(1/3))