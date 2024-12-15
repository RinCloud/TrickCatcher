def count_distinct_characters(string: str) -> int:
    """
    Count the number of distinct characters in a string.
    
    Args:
    string (str): The input string.
    
    Returns:
    int: The number of distinct characters.
    """
    
    # Convert the string to lowercase to ignore case sensitivity
    string = string.lower()
    
    # Create an empty set to store the distinct characters
    distinct_chars = set()
    
    # Iterate through each character in the string
    for char in string:
        # Add the character to the set
        distinct_chars.add(char)
    
    # Return the number of distinct characters
    return len(distinct_chars)