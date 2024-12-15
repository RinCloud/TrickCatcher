def count_upper(s):
    """
    Given a string s, count the number of uppercase vowels in even indices.
    
    Args:
    s (str): The input string
    
    Returns:
    int: The count of uppercase vowels in even indices of the string
    """    
    count = 0
    
    for i in range(len(s)):
        if i % 2 == 0 and s[i] in 'AEIOU':
            count += 1
            
    return count