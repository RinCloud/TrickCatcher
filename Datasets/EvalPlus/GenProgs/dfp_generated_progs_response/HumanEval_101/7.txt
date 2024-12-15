def words_string(s):
    """
    You will be given a string of words separated by commas or spaces. Your task is
    to split the string into words and return an array of the words.
    
    For example:
    words_string("Hi, my name is John") == ["Hi", "my", "name", "is", "John"]
    words_string("One, two, three, four, five, six") == ["One", "two", "three", "four", "five", "six"]
    """
    # split the string into words by using whitespaces and commas as separators
    words = s.split(" ") + s.split(",")
    
    # remove any empty strings from the list
    words = [word for word in words if word != ""]
    
    return words