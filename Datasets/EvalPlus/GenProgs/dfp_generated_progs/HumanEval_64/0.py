def vowels_count(s):
    """
    Returns the number of vowels in a given string.
    Parameters:
    s (str): The string to count vowels in.
    Returns:
    int: The number of vowels in the string.
    Examples:
    >>> vowels_count("abcde")
    2
    >>> vowels_count("ACEDY")
    3
    """
    vowels = ['a', 'e', 'i', 'o', 'u']
    s = s.lower()
    count = 0
    for i in range(len(s)):
        if i == len(s) - 1 and s[i] == 'y':
            count += 1
        elif s[i] in vowels:
            count += 1
    return count