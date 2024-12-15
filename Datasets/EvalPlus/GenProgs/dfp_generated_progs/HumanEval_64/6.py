def vowels_count(s):
    """
    Function to count the number of vowels in a given string.
    
    Args:
    s (str): A string representing a word.
    
    Returns:
    count (int): The number of vowels in the string.
    """
    count = 0
    vowels = ['a', 'e', 'i', 'o', 'u']
    s = s.lower()
    for char in s:
        if char in vowels:
            count += 1
    if s.endswith('y'):
        count += 1
    return count