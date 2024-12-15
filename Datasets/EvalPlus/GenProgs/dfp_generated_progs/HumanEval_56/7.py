def correct_bracketing(brackets: str):
    """ brackets is a string of "<" and ">".
    return True if every opening bracket has a corresponding closing bracket.
    """
    stack = []
    for char in brackets:
        if char == "<":
            stack.append(char)
        elif char == ">":
            if not stack:
                return False
            stack.pop()
    return len(stack) == 0