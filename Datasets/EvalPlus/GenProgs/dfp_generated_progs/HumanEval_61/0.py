def correct_bracketing(brackets: str):
    """ 
    Check whether every opening bracket has a corresponding closing bracket.
    Args:
    brackets (str): A string of "(" and ")".
    Returns:
    bool: True if every opening bracket has a corresponding closing bracket, False otherwise.
    """
    stack = []
    for bracket in brackets:
        if bracket == '(':
            stack.append(bracket)
        elif bracket == ')':
            if len(stack) == 0:
                return False
            else:
                stack.pop()
    return len(stack) == 0