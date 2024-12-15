def vowels_count(s):
    """
    Calculates the number of vowels in a word.
    
    Args:
    s (str): The input word.
    
    Returns:
    int: The number of vowels in the word.
    """
    vowels = 'aeiou'
    count = 0
    for char in s.lower():
        if char in vowels:
            count += 1
            
    if s[-1].lower() == 'y':
        count -= 1
        
    return count