from typing import List
def separate_paren_groups(paren_string: str) -> List[str]:
    """Separate groups of nested parentheses and return a list of the separate groups.
    
    Args:
    - paren_string: a string containing multiple groups of nested parentheses
    
    Returns:
    - a list of separate groups
    
    Examples:
    
    >>> separate_paren_groups('( ) (( )) (( )( ))')
    ['()', '(())', '(()())']
    
    >>> separate_paren_groups('((( )))')
    ['((((()))))']
    
    >>> separate_paren_groups('(()) () (())')
    ['(())', '()', '(())']
    """
    # remove spaces from the input string
    paren_string = paren_string.replace(" ", "")
    
    # create an empty list to store the separate groups
    separate_groups = []
    
    # initialize a counter for the number of open parentheses
    open_paren_count = 0
    
    # initialize a starting index for each group
    start_index = 0
    
    # iterate over each character in the input string
    for i in range(len(paren_string)):
        # if the current character is an opening parenthesis, increment the counter
        if paren_string[i] == "(":
            open_paren_count += 1
        # if the current character is a closing parenthesis, decrement the counter
        elif paren_string[i] == ")":
            open_paren_count -= 1
            # if the counter becomes zero, it means we have found a complete group
            if open_paren_count == 0:
                # append the group to the list of separate groups
                separate_groups.append(paren_string[start_index:i + 1])
                # update the starting index for the next group
                start_index = i + 1
    
    # return the list of separate groups
    return separate_groups