def count_distinct_characters(string: str) -> int:
    """
    Given a string, find out how many distinct characters (regardless of case) does it consist of
    
    Parameters:
    string (str): The input string
    
    Returns:
    int: The number of distinct characters in the string
    
    """
    string = string.lower()
    characters = set(string)
    return len(characters)