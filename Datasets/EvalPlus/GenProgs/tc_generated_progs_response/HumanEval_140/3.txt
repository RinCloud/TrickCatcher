def fix_spaces(text):
    """
    Given a string text, replace all spaces in it with underscores, 
    and if a string has more than 2 consecutive spaces, 
    then replace all consecutive spaces with - 
    
    fix_spaces("Example") == "Example"
    fix_spaces("Example 1") == "Example_1"
    fix_spaces(" Example 2") == "_Example_2"
    fix_spaces(" Example   3") == "_Example-3"
    """
    # Replace more than 2 consecutive spaces with -
    while '   ' in text:
        text = text.replace('   ', '-')
    # Replace single spaces with underscore
    text = text.replace(" ", "_")
    
    return text