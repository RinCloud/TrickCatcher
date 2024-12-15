def choose_num(x, y):
    """This function takes two positive numbers x and y and returns the
    biggest even integer number that is in the range [x, y] inclusive. If 
    there's no such number, then the function should return -1.
    For example:
    choose_num(12, 15) = 14
    choose_num(13, 12) = -1
    """
    # Initialize the maximum even number to -1
    max_even = -1
    
    # Iterate through all the numbers in the range [x, y]
    for num in range(x, y+1):
        # Check if the number is even and greater than the current max_even
        if num % 2 == 0 and num > max_even:
            # Update the max_even to the current number
            max_even = num
    
    # Return the maximum even number
    return max_even