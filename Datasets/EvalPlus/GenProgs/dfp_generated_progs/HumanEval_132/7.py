def is_nested(string):
    stack = []
    for bracket in string:
        if bracket == '[':
            stack.append(bracket)
        elif bracket == ']':
            if len(stack) == 0:
                return False
            stack.pop()
    if len(stack) > 0:
        return True
    return False