def count_upper(s):
    """
    Given a string s, count the number of uppercase vowels in even indices.
    
    Args:
    s (str): The input string
    
    Returns:
    int: The count of uppercase vowels in even indices in the string
    """
    vowels = ['A', 'E', 'I', 'O', 'U']
    count = 0
    for i in range(0, len(s), 2):
        if s[i].isupper() and s[i] in vowels:
            count += 1
    return count