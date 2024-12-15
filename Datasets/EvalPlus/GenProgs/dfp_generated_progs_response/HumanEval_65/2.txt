def circular_shift(x, shift):
    x = str(x)
    shift = shift % len(x)
    if shift == 0:
        return x
    else:
        return x[-shift:] + x[:-shift]