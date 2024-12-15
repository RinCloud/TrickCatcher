def how_many_times(string: str, substring: str) -> int:
    """
    Find how many times a given substring can be found in the original string. Count overlapping cases.
    
    Args:
    string (str): The original string
    substring (str): The substring to count
    
    Returns:
    int: The number of times the substring is found in the original string
    """
    count = 0
    for i in range(len(string)-len(substring)+1):
        if string[i:i+len(substring)] == substring:
            count += 1
    return count