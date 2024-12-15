def count_upper(s):
    """
    Given a string s, count the number of uppercase vowels in even indices.
    
    Args:
    s (str): The input string
    
    Returns:
    int: The number of uppercase vowels in even indices
    
    Examples:
    >>> count_upper('aBCdEf')
    1
    >>> count_upper('abcdefg')
    0
    >>> count_upper('dBBE')
    0
    """
    vowels = ['A', 'E', 'I', 'O', 'U']
    count = 0
    for i in range(0, len(s), 2):
        if s[i].upper() in vowels:
            count += 1
    return count