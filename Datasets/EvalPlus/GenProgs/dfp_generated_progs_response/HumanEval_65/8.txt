def circular_shift(x, shift):
    # convert x to string
    x_str = str(x)
    
    # calculate the number of digits
    num_digits = len(x_str)
    
    # calculate the effective shift by taking the modulus of shift with num_digits
    effective_shift = shift % num_digits
    
    if effective_shift == 0:
        # if effective shift is 0, return the original string
        return x_str
    elif effective_shift > num_digits:
        # if effective shift is greater than num_digits, return the reverse of the string
        return x_str[::-1]
    else:
        # shift the string using slicing and concatenate the parts
        shifted_str = x_str[-effective_shift:] + x_str[:-effective_shift]
        return shifted_str