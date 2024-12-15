def correct_bracketing(brackets: str):
    """ brackets is a string of "<" and ">".
    return True if every opening bracket has a corresponding closing bracket."""
    
    stack = []
    
    for bracket in brackets:
        if bracket == "<":
            stack.append(bracket)
        elif bracket == ">":
            if len(stack) == 0:
                return False
            stack.pop()
    
    if len(stack) == 0:
        return True
    else:
        return False