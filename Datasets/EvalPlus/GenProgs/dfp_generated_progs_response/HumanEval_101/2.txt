def words_string(s):
    """
    Given a string of words separated by commas or spaces, split the string into words and return an array of the words.
    
    Parameters:
    s (str): A string of words separated by commas or spaces
    
    Returns:
    list: A list of words
    
    Example:
    words_string("Hi, my name is John") returns ["Hi", "my", "name", "is", "John"]
    words_string("One, two, three, four, five, six") returns ["One", "two", "three", "four", "five", "six"]
    """
    words = s.replace(',', ' ').split()
    return words