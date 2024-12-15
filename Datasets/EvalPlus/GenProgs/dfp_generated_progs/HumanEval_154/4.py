def cycpattern_check(a , b):
    # Generate all possible rotations of the second word
    rotations = [b[i:] + b[:i] for i in range(len(b))]
    
    # Check if any of the rotations is a substring in the first word
    for rotation in rotations:
        if rotation in a:
            return True
    
    return False