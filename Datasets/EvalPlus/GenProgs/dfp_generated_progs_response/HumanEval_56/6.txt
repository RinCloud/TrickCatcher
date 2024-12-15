def correct_bracketing(brackets: str):
    stack = []
    for bracket in brackets:
        if bracket == "<":
            stack.append(bracket)
        elif bracket == ">" and len(stack) > 0:
            stack.pop()
        else:
            return False
    return len(stack) == 0