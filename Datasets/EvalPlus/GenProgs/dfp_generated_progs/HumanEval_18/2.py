def how_many_times(string: str, substring: str) -> int:
    """
    Find how many times a given substring can be found in the original string. Count overlaping cases.
    
    Args:
    string: The original string
    substring: The substring to be searched
    
    Returns:
    The number of times the substring is found in the original string
    """
    count = 0
    if substring == '':
        return count
    for i in range(len(string)-len(substring)+1):
        if string[i:i+len(substring)] == substring:
            count += 1
    return count