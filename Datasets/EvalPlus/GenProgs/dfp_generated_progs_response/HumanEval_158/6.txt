def find_max(words):
    """
    This function accepts a list of strings and returns the word with the 
    maximum number of unique characters. If multiple strings have the same
    maximum number of unique characters, the function returns the one that
    comes first in lexicographical order.
    
    Parameters:
    words (list): A list of strings
    
    Returns:
    str: The word with the maximum number of unique characters
    
    Example:
    >>> find_max(["name", "of", "string"])
    'string'
    >>> find_max(["name", "enam", "game"])
    'enam'
    >>> find_max(["aaaaaaa", "bb", "cc"])
    'aaaaaaa'
    """
    max_unique_chars = 0
    max_unique_word = ""
    
    for word in words:
        unique_chars = len(set(word))
        if unique_chars > max_unique_chars:
            max_unique_chars = unique_chars
            max_unique_word = word
        elif unique_chars == max_unique_chars and word < max_unique_word:
            max_unique_word = word
    
    return max_unique_word