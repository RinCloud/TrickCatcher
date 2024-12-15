def even_odd_count(num):
    """
    Given an integer. return a tuple that has the number of even and odd digits respectively.
    Example:
        even_odd_count(-12) ==> (1, 1)
        even_odd_count(123) ==> (1, 2)
    """
    
    even_count = 0
    odd_count = 0
    
    # convert the number to a positive integer
    abs_num = abs(num)
    
    # convert integer to string
    num_str = str(abs_num)
    
    # iterate through each digit in the string
    for digit in num_str:
        # convert the digit back to an integer
        digit_int = int(digit)
        
        # check if the digit is even or odd
        if digit_int % 2 == 0:
            even_count += 1
        else:
            odd_count += 1
    
    # return the tuple of even and odd counts
    return (even_count, odd_count)