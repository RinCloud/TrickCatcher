def flip_case(string: str) -> str:
    """
    For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
    """
    result = ""
    for char in string:
        if char.isupper():
            result += char.lower()
        elif char.islower():
            result += char.upper()
        else:
            result += char
    return result