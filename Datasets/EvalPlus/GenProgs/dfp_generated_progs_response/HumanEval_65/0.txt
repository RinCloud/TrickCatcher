def circular_shift(x, shift):
    x_str = str(x)
    if shift > len(x_str):
        x_str = x_str[::-1]
    else:
        x_str = x_str[-shift:] + x_str[:-shift]
    return x_str