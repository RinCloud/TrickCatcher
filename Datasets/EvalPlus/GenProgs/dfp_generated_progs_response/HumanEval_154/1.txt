def cycpattern_check(a , b):
    """
    You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word.
    
    Parameters:
    a (str): The first word
    b (str): The second word
    
    Returns:
    bool: True if the second word or any of its rotations is a substring in the first word, False otherwise.
    """
    # Check if b is a substring of a
    if b in a:
        return True
    
    # Check if any rotation of b is a substring of a
    for i in range(len(b)):
        rotated_b = b[i:] + b[:i]
        if rotated_b in a:
            return True
    
    return False