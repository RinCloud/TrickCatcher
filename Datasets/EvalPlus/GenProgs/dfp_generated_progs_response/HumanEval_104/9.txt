def unique_digits(x):
    """
    Given a list of positive integers x, returns a sorted list of all elements that don't contain any even digit.
    
    Parameters:
    x (list): A list of positive integers
    
    Returns:
    list: A sorted list of all elements that don't contain any even digit.
    """
    result = []
    for num in x:
        s = str(num)
        digits = [int(d) for d in s]
        even_digits = [d for d in digits if d % 2 == 0]
        if not even_digits:
            result.append(num)
    return sorted(result)