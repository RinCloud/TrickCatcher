from typing import List
def parse_nested_parens(paren_string: str) -> List[int]:
    """
    Function to parse nested parentheses and determine the maximum level of nesting for each group.
    Args:
    paren_string: A string representing multiple groups of nested parentheses separated by spaces.
    Returns:
    A list of integers representing the maximum level of nesting for each group.
    Example:
    >>> parse_nested_parens('(()()) ((())) () ((())()())')
    [2, 3, 1, 3]
    """
    result = []
    for group in paren_string.split():
        stack = []
        max_level = 0
        curr_level = 0
        for char in group:
            if char == '(':
                stack.append(char)
                curr_level += 1
                max_level = max(max_level, curr_level)
            elif char == ')':
                if stack[-1] == '(':
                    stack.pop()
                    curr_level -= 1
                else:
                    raise ValueError("Incorrectly nested parentheses")
        if len(stack) > 0:
            raise ValueError("Incorrectly nested parentheses")
        result.append(max_level)
    return result