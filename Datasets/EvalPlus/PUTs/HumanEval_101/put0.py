
def words_string(s):
    """
    You will be given a string of words separated by commas or spaces. Your task is
    to split the string into words and return an array of the words.
    
    For example:
    words_string("Hi, my name is John") == ["Hi", "my", "name", "is", "John"]
    words_string("One, two, three, four, five, six") == ["One", "two", "three", "four", "five", "six"]
    """
    # Use the split() function in Python which splits a string into a list where each word is a list item.
    # The split() function splits a string into a list where each word is a list item. The words are determined by splitting at each occurrence of a white space.
    return s.replace(',', '').split()
