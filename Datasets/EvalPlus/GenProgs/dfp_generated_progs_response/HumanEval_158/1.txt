def find_max(words):
    """
    Accepts a list of strings and returns the word with the maximum number of unique characters.
    
    Args:
    words: A list of strings
    
    Returns:
    The word with the maximum number of unique characters. If multiple strings have the maximum number,
    return the one which comes first in lexicographical order.
    """
    max_characters = -1
    max_word = ""
    
    for word in words:
        unique_characters = len(set(word))
        if unique_characters > max_characters:
            max_characters = unique_characters
            max_word = word
        elif unique_characters == max_characters:
            if word < max_word:
                max_word = word
    
    return max_word