def string_sequence(n: int) -> str:
    """
    Return a string containing space-delimited numbers starting from 0 up to n inclusive.
    
    Args:
    n (int): The upper limit of the number sequence
    
    Returns:
    str: A space-delimited string containing the sequence of numbers
    
    Examples:
    >>> string_sequence(0)
    '0'
    >>> string_sequence(5)
    '0 1 2 3 4 5'
    """
    return ' '.join(str(i) for i in range(n + 1))