def vowels_count(s):
    """
    Returns the number of vowels in a given word.
    Parameters:
    s (str): A string representing a word.
    Returns:
    int: The number of vowels in the word.
    Examples:
    >>> vowels_count("abcde")
    2
    >>> vowels_count("ACEDY")
    3
    """
    vowel_count = 0
    vowels = ['a', 'e', 'i', 'o', 'u', 'y']
    for letter in s.lower():
        if letter in vowels:
            vowel_count += 1
    if s[-1].lower() == 'y':
        vowel_count -= 1
    return vowel_count