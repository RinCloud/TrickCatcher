def string_sequence(n: int) -> str:
    """
    Return a string containing space-delimited numbers starting from 0 upto n inclusive.
    Args:
    - n (int): the upper limit of the sequence
    Returns:
    - str: a string containing the sequence
    Example:
    >>> string_sequence(0)
    '0'
    >>> string_sequence(5)
    '0 1 2 3 4 5'
    """
    sequence = ' '.join(str(i) for i in range(n+1))
    return sequence