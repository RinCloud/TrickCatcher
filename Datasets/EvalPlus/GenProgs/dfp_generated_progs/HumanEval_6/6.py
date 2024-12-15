from typing import List
def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []  # to store the depths of each group
    
    for group in paren_string.split():  # iterate over each group
        max_depth = 0  # to store the maximum depth of parentheses in each group
        depth = 0  # to store the current depth
        
        for char in group:  # iterate over each character in the group
            if char == '(':  # if it is an opening parenthesis
                depth += 1  # increment the current depth
                max_depth = max(max_depth, depth)  # update the maximum depth
            elif char == ')':  # if it is a closing parenthesis
                depth -= 1  # decrement the current depth
        
        depths.append(max_depth)  # add the maximum depth of parentheses in the group to the list
    
    return depths