def vowels_count(s):
    """
    Takes a string as input and returns the number of vowels in the string.
    
    Args:
    s: A string representing a word
    
    Returns:
    The number of vowels in the string
    
    Example:
    >>> vowels_count("abcde")
    2
    >>> vowels_count("ACEDY")
    3
    """
    
    vowels = ['a', 'e', 'i', 'o', 'u']
    # Convert the string to lowercase
    s = s.lower()
    count = 0
    
    for char in s:
        if char in vowels:
            count += 1
    
    # Check if 'y' is at the end of the word
    if s[-1] == 'y':
        count += 1
    
    return count