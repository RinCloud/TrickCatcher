def circular_shift(x, shift):
    # Convert the integer to a string
    x_str = str(x)
    
    # Get the number of digits in the integer x
    num_digits = len(x_str)
    
    # If shift is greater than the number of digits, reverse the string and return
    if shift > num_digits:
        return x_str[::-1]
    
    # Calculate the new index of each digit after shifting
    new_indices = [(i + shift) % num_digits for i in range(num_digits)]
    
    # Rearrange the digits in the new order
    shifted_str = ''.join([x_str[i] for i in new_indices])
    
    return shifted_str