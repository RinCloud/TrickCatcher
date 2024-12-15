def correct_bracketing(brackets: str):
    """
    Returns True if every opening bracket has a corresponding closing bracket.
    Args:
    brackets (str): A string of "<" and ">".
    Returns:
    bool: True if the brackets are correctly balanced, False otherwise.
    Examples:
    >>> correct_bracketing("<")
    False
    >>> correct_bracketing("<>")
    True
    >>> correct_bracketing("<<><>>")
    True
    >>> correct_bracketing("><<>")
    False
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