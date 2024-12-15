def cycpattern_check(a , b):
    """
    You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    
    Parameters:
    a (str): First word
    b (str): Second word
    
    Returns:
    bool: True if the second word or any of its rotations is a substring in the first word, False otherwise
    """
    for i in range(len(b)):
        if a.find(b[i:] + b[:i]) != -1:
            return True
    return False