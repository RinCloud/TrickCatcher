def circular_shift(x, shift):
    """
    Circular shift the digits of the integer x, shift the digits right by shift
    and return the result as a string.
    
    If shift > number of digits, return digits reversed.
    
    Args:
    x (int): The integer to be shifted.
    shift (int): The number of shifts to perform.
    
    Returns:
    str: The result of the circular shift as a string.
    """
    x_str = str(x)
    num_digits = len(x_str)
    
    if shift > num_digits:
        return x_str[::-1]
    
    shift %= num_digits
    
    return x_str[-shift:] + x_str[:-shift]