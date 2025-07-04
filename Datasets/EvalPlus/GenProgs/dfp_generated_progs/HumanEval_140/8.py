def fix_spaces(text):
    """
    Given a string text, replace all spaces in it with underscores, 
    and if a string has more than 2 consecutive spaces, 
    then replace all consecutive spaces with -
    Args:
    text: A string to be processed.
    Returns:
    The processed string with spaces replaced by underscores and 
    consecutive spaces replaced by -.
    Example:
    >>> fix_spaces("Example")
    'Example'
    >>> fix_spaces("Example 1")
    'Example_1'
    >>> fix_spaces(" Example 2")
    '_Example_2'
    >>> fix_spaces(" Example   3")
    '_Example-3'
    """    
    text = text.replace(" ", "_")  # replace spaces with underscores
    text = text.replace("__", "-")  # replace consecutive underscores with hyphen
    return text