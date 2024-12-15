def correct_bracketing(brackets: str):
    if not brackets:
        return False
    stack = []
    for bracket in brackets:
        if bracket == '<':
            stack.append('<')
        elif bracket == '>':
            if len(stack) == 0 or stack.pop()!= '<':
                return False
        else:
            return False
    return len(stack) == 0