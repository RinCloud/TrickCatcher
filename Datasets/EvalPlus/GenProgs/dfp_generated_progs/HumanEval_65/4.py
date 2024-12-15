def circular_shift(x, shift):
    x_str = str(x)
    num_digits = len(x_str)
    shift %= num_digits
    if shift == 0:
        return x_str
    
    shifted_str = x_str[-shift:] + x_str[:-shift]
    return shifted_str