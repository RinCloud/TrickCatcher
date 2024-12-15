def change_base(x: int, base: int):
    # Initializing an empty string to store the result
    result = ""
    
    # Loop until the input number is greater than 0
    while x > 0:
        # Calculating the remainder of x divided by the base
        remainder = x % base
        
        # Converting the remainder to string and appending it to the result
        result = str(remainder) + result
        
        # Updating the input number by performing integer division by the base
        x = x // base
    
    # Returning the result
    return result