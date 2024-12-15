def fizz_buzz(n: int):
    """
    Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13.
    
    Parameters:
    n (int): The upper limit of the range of numbers
    
    Returns:
    int: The number of times the digit 7 appears
    
    Examples:
    >>> fizz_buzz(50)
    0
    >>> fizz_buzz(78)
    2
    >>> fizz_buzz(79)
    3
    """
    count = 0
    for num in range(n):
        if num % 11 == 0 or num % 13 == 0:
            count += str(num).count("7")
    return count