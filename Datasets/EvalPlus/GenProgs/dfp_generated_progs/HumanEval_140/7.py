def fix_spaces(text):
    """
    Given a string text, replace all spaces in it with underscores, 
    and if a string has more than 2 consecutive spaces, 
    then replace all consecutive spaces with -
    Parameters:
    text (str): The input text string.
    Returns:
    str: The modified text string.
    Example:
    fix_spaces("Example") returns "Example"
    fix_spaces("Example 1") returns "Example_1"
    fix_spaces(" Example 2") returns "_Example_2"
    fix_spaces(" Example   3") returns "_Example-3"
    """
    if len(text) < 2:
        return text
    elif len(text) == 2:
        return text.replace(' ', '_')
    else:
        fixed_text = text.replace(' ', '_')
        for i in range(len(fixed_text)-2):
            if fixed_text[i:i+3] == '___':
                fixed_text = fixed_text[:i] + fixed_text[i:].replace(' ', '-')[:3] + fixed_text[i+3:]
        return fixed_text