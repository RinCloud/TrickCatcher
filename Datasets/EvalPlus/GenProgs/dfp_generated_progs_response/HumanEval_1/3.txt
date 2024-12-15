def separate_paren_groups(paren_string: str) -> List[str]:
    """
    This function separates the groups of nested parentheses from a given string and returns them as a list of strings.
    
    Args:
    paren_string (str): A string containing multiple groups of nested parentheses
    
    Returns:
    List[str]: A list of strings containing the separated groups of nested parentheses
    
    Examples:
    >>> separate_paren_groups('( ) (( )) (( )( ))')
    ['()', '(())', '(()())']
    """
    
    # Ignore any spaces in the input string
    paren_string = paren_string.replace(" ", "")
    
    # Initialize an empty list to store the separated groups
    groups = []
    
    # Initialize a counter to keep track of balance of parentheses
    balance = 0
    
    # Initialize a variable to store the current group
    current_group = ''
    
    # Iterate over each character in the string
    for char in paren_string:
        
        # If an opening parentheses is encountered, increment the balance counter
        if char == '(':
            balance += 1
            
        # If a closing parentheses is encountered, decrement the balance counter
        elif char == ')':
            balance -= 1
            
        # Add the character to the current group
        current_group += char
        
        # If the balance counter becomes zero, add the current group to the list of groups
        if balance == 0:
            groups.append(current_group)
            current_group = ''
            
    # Return the list of separated groups
    return groups