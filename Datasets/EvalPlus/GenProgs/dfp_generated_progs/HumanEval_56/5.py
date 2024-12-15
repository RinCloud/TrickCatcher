def correct_bracketing(brackets: str):
    """Return True if every opening bracket has a corresponding closing bracket."""
    stack = []
    for bracket in brackets:
        if bracket == '<':
            stack.append(bracket)
        elif bracket == '>':
            if len(stack) == 0:
                return False
            stack.pop()
    return len(stack) == 0