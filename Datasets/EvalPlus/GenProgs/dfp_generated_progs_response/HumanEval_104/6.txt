def unique_digits(x):
    """Given a list of positive integers x, returns a sorted list of all elements that do not contain any even digit."""
    
    # Create an empty list to store the elements without even digits
    result = []
    
    # Loop through each element in the input list
    for num in x:
        # Convert the number to a string
        num_str = str(num)
        
        # Check if the number contains any even digit
        if any(int(digit) % 2 == 0 for digit in num_str):
            continue
        
        # If the number does not contain any even digit, add it to the result list
        result.append(num)
    
    # Sort the result list in increasing order
    result.sort()
    
    # Return the result list
    return result