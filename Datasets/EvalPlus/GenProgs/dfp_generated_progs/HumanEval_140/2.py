def fix_spaces(text):
    text = text.replace(" ", "_")
    consecutive_spaces = text.split("_")
    new_text = ""
    for i in consecutive_spaces:
        if len(i) > 2:
            i = "-" * len(i)
        new_text += i + "_"
    return new_text.strip("_")