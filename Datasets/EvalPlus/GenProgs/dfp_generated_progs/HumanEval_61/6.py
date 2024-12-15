def correct_bracketing(brackets: str):
    """ Check if every opening bracket has a corresponding closing bracket.
    Args:
    brackets (str): a string of "(" and ")".
    Returns:
    bool: True if every opening bracket has a corresponding closing bracket.
    Examples:
    >>> correct_bracketing("(")
    False
    >>> correct_bracketing("()")
    True
    >>> correct_bracketing("(()())")
    True
    >>> correct_bracketing(")(()")
    False
    """
    stack = []
    for bracket in brackets:
        if bracket == '(':
            stack.append(bracket)
        elif bracket == ')':
            if len(stack) == 0 or stack.pop() != '(':
                return False
    return len(stack) == 0