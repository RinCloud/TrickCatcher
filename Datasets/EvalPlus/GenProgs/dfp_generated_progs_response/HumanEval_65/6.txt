def circular_shift(x, shift):
    """Circular shift the digits of the integer x, shift the digits right by shift
    and return the result as a string.
    If shift > number of digits, return digits reversed.
    
    Args:
    x (int): the integer to shift
    shift (int): the number of digits to shift
    
    Returns:
    str: the result of shifting the digits of x
    
    """
    if shift > 0:
        x_str = str(x)
        x_len = len(x_str)
        
        if shift >= x_len:
            return x_str[::-1]
        else:
            return x_str[-shift:] + x_str[:-shift]
        
    else:
        return str(x)