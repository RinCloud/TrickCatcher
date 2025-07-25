def correct_bracketing(brackets: str):
    """ 
    Returns True if every opening bracket has a corresponding closing bracket.
    Parameters:
    brackets (str): A string of "<" and ">".
    Returns:
    bool: True if every opening bracket has a corresponding closing bracket, False otherwise.
    """
    stack = []
    for bracket in brackets:
        if bracket == "<":
            stack.append(bracket)
        elif bracket == ">":
            if not stack:
                return False
            stack.pop()
    return len(stack) == 0