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
    new_text = ""
    spaces_count = 0
    for char in text:
        if char == " ":
            spaces_count += 1
            if spaces_count > 2:
                new_text += "-"
        else:
            spaces_count = 0
            new_text += char
    return new_text.replace(" ", "_")