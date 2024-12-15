def vowels_count(s):
    """
    This function takes a string representing a word as input
    and returns the number of vowels in the string.
    
    Args:
    s (str): A string representing a word.
    
    Returns:
    int: The number of vowels in the string.
    
    Example:
    >>> vowels_count("abcde")
    2
    >>> vowels_count("ACEDY")
    3
    """
    count = 0
    vowels = ['a', 'e', 'i', 'o', 'u']
    if s[-1].lower() == 'y':
        vowels.append('y')
    for char in s.lower():
        if char in vowels:
            count += 1
    return count