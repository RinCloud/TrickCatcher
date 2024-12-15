def vowels_count(s):
    """
    This function takes a string representing a word as input and returns the number of vowels in the string.
    
    Parameters:
    s (str): The input string
    
    Returns:
    count (int): The number of vowels in the string
    """
    count = 0
    vowels = ['a', 'e', 'i', 'o', 'u']
    
    for i in range(len(s)):
        if s[i] in vowels:
            count += 1
        elif i == len(s)-1 and s[i] == 'y':
            count += 1
    
    return count