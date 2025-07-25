def correct_bracketing(brackets: str):
    """
    Check if the brackets in a string are correctly balanced.
    Args:
    brackets (str): A string of "<" and ">".
    Returns:
    bool: True if every opening bracket has a corresponding closing bracket.
          False otherwise.
    """
    stack = []
    for bracket in brackets:
        if bracket == "<":
            stack.append(bracket)
        elif bracket == ">":
            if len(stack) == 0:
                return False
            stack.pop()
    return len(stack) == 0