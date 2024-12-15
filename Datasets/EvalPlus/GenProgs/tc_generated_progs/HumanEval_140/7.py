def fix_spaces(text):
    # Replace all spaces with underscores
    text = text.replace(" ", "_")
    
    # Replace more than 2 consecutive spaces with a single underscore
    while "__" in text:
        text = text.replace("__", "_")
    # Replace 2 consecutive spaces with a dash
    text = text.replace("_ ", "-")
    
    return text