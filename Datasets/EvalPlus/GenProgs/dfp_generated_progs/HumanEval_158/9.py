def find_max(words):
    """
    Accepts a list of strings and returns the word with maximum number
    of unique characters. If multiple strings have the maximum number of unique
    characters, the function returns the one which comes first in lexicographical order.
    
    Args:
    words (list): A list of strings
    
    Returns:
    str: The string with the maximum number of unique characters
    
    Examples:
    >>> find_max(["name", "of", "string"])
    "string"
    >>> find_max(["name", "enam", "game"])
    "enam"
    >>> find_max(["aaaaaaa", "bb" ,"cc"])
    "aaaaaaa"
    """
    
    max_unique_char_count = 0
    max_unique_char_word = ""
    
    for word in words:
        unique_char_count = len(set(word))
        
        if unique_char_count > max_unique_char_count:
            max_unique_char_count = unique_char_count
            max_unique_char_word = word
        elif unique_char_count == max_unique_char_count:
            if word < max_unique_char_word:
                max_unique_char_word = word
    
    return max_unique_char_word