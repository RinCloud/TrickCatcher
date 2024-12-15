def count_distinct_characters(string: str) -> int:
    """ Given a string, find out how many distinct characters (regardless of case) does it consist of
    >>> count_distinct_characters('xyzXYZ')
    3
    >>> count_distinct_characters('Jerry')
    4
    """
    # Create a set of unique characters
    unique_chars = set(string.lower())
    # Count the number of elements in the set
    return len(unique_chars)