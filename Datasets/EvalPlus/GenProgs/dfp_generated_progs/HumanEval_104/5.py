def unique_digits(x):
    """
    Given a list of positive integers x, return a sorted list of all elements that
    don't contain any even digits.
    
    Args:
    x (list): A list of positive integers.
    
    Returns:
    list: A sorted list of positive integers that don't contain any even digits.
    
    Examples:
    >>> unique_digits([15, 33, 1422, 1])
    [1, 15, 33]
    >>> unique_digits([152, 323, 1422, 10])
    []
    """
    # Initialize an empty list to store the results
    result = []
    
    # Loop through each element in the given list
    for num in x:
        # Convert the number to a string to iterate over each digit
        for digit in str(num):
            # If any of the digits are even, break the inner loop and move to the next number
            if int(digit) % 2 == 0:
                break
        else:
            # If the inner loop completes without breaking, all digits are odd
            result.append(num)
    
    # Sort the result list in increasing order and return it
    return sorted(result)