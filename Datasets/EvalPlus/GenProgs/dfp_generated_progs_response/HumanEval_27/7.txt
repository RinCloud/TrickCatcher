def flip_case(string: str) -> str:
    """
    For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
    """
    flipped_string = ""
    for char in string:
        if char.islower():
            flipped_string += char.upper()
        else:
            flipped_string += char.lower()
    return flipped_string