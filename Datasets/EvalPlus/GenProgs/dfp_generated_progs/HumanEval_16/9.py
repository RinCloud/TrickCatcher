def count_distinct_characters(string: str) -> int:
    """
    Given a string, find out how many distinct characters (regardless of case) does it consist of
    Args:
    string (str): the input string
    Returns:
    int: the number of distinct characters in the string
    """
    char_set = set(string.lower()) # convert the string to lower case and store unique characters in a set
    return len(char_set) # return the number of unique characters in the set