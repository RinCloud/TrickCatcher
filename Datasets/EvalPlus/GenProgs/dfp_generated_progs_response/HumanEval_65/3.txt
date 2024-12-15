def circular_shift(x, shift):
    x_str = str(x)
    n_digits = len(x_str)
    if shift > n_digits:
        return x_str[::-1]
    else:
        return x_str[-shift:] + x_str[:-shift]