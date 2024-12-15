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
    text = text.replace(" ", "_") # Replace all spaces with underscores
    i = 0
    while i < len(text)-1:
        if text[i:i+3] == " " * 3: # Check for consecutive spaces
            j = i + 3
            while j < len(text) and text[j] == " ": # Find the end of consecutive spaces
                j += 1
            text = text[:i] + "-" + text[j:] # Replace consecutive spaces with -
            i = j # Skip to the next character after the replaced consecutive spaces
        else:
            i += 1
    return text