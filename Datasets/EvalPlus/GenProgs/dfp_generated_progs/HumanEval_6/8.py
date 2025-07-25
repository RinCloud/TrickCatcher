def parse_nested_parens(paren_string: str) -> List[int]:
    """
    Splits the input string into groups of parentheses.
    For each group, counts the maximum level of nesting of parentheses and returns the list of these counts.
    Args:
    paren_string (str): Input string with nested parentheses groups separated by spaces.
    Returns:
    List[int]: List of maximum levels of nesting for each group of parentheses.
    """
    
    groups = paren_string.split(' ')  # split the string into groups of parentheses
    
    max_levels = []  # empty list to store the maximum levels
    
    for group in groups:
        level = 0  # initial level of nesting
        max_level = 0  # maximum level of nesting
        
        for character in group:
            if character == '(':
                level += 1
                max_level = max(max_level, level)
            elif character == ')':
                level -= 1
        
        max_levels.append(max_level)  # add the maximum level for the current group to the list
    
    return max_levels