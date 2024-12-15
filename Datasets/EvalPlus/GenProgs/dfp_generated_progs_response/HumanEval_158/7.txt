def find_max(words):
    """
    This function accepts a list of strings and returns the word with the maximum number of unique characters.
    
    Args:
    words: A list of strings.
    
    Returns:
    The word with the maximum number of unique characters. If multiple words have the same maximum number of unique characters, returns the one that comes first in lexicographical order.
    """
    max_count = 0
    max_word = ""
    
    for word in words:
        unique_chars = set(word)
        if len(unique_chars) > max_count:
            max_count = len(unique_chars)
            max_word = word
        elif len(unique_chars) == max_count and word < max_word:
            max_word = word
    
    return max_word