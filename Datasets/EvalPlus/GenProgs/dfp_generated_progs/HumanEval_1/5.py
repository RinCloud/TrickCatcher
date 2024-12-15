from typing import List
def separate_paren_groups(paren_string: str) -> List[str]:
    """Separate the groups of nested parentheses in a string."""
    
    # Remove any spaces from the input string
    paren_string = paren_string.replace(" ", "")
    
    # Initialize an empty list to store the separated groups
    separated_groups = []
    
    # Initialize a variable to keep track of the current group
    current_group = ""
    
    # Initialize a variable to keep track of the number of open parentheses
    open_paren_count = 0
    
    # Iterate through each character in the string
    for char in paren_string:
        # If the character is an open parenthesis, increment the open parenthesis count
        if char == "(":
            open_paren_count += 1
        # If the character is a closing parenthesis, decrement the open parenthesis count
        elif char == ")":
            open_paren_count -= 1
        
        # Add the current character to the current group
        current_group += char
        
        # If the open parenthesis count reaches zero, add the current group to the separated_groups list
        if open_paren_count == 0:
            separated_groups.append(current_group)
            current_group = ""
    
    return separated_groups