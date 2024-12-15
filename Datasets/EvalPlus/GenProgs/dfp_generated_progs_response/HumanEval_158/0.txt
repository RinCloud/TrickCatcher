def find_max(words):
    """
    This function takes a list of strings as input and returns the word with the maximum number
    of unique characters. If multiple strings have the same maximum number of unique characters,
    the function returns the first one in lexicographical order.
    """
    max_unique_chars = 0
    max_unique_word = ""
    
    for word in words:
        unique_chars = set(word)
        if len(unique_chars) > max_unique_chars:
            max_unique_chars = len(unique_chars)
            max_unique_word = word
        elif len(unique_chars) == max_unique_chars and word < max_unique_word:
            max_unique_word = word
    
    return max_unique_word