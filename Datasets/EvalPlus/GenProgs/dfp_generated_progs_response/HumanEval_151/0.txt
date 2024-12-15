def double_the_difference(lst):
    # Initialize sum variable
    total = 0
    
    # Iterate over the list of numbers
    for num in lst:
        
        # Check if number is odd, positive and an integer
        if num % 2 != 0 and num > 0 and isinstance(num, int):
            
            # Add the square of the number to the total
            total += num ** 2
    
    # Return the total
    return total