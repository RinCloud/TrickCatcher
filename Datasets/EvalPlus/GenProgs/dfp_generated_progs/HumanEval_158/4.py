def find_max(words):
    """
    Accepts a list of strings and returns the word with the maximum number of unique characters.
    
    Args:
    words (list): A list of strings
    
    Returns:
    str: The word with the maximum number of unique characters
    
    Examples:
    >>> find_max(["name", "of", "string"])
    'string'
    
    >>> find_max(["name", "enam", "game"])
    'enam'
    
    >>> find_max(["aaaaaaa", "bb" ,"cc"])
    'aaaaaaa'
    """
    
    def count_uniq_chars(word):
        """
        Returns the number of unique characters in a word.
        
        Args:
        word (str): A string
        
        Returns:
        int: The number of unique characters
        
        Example:
        >>> count_uniq_chars("name")
        4
        """
        return len(set(word))
    
    max_uniq_chars = 0
    max_word = ""
    
    for word in words:
        uniq_chars = count_uniq_chars(word)
        if uniq_chars > max_uniq_chars:
            max_uniq_chars = uniq_chars
            max_word = word
        elif uniq_chars == max_uniq_chars:
            if word < max_word:
                max_word = word
                
    return max_word