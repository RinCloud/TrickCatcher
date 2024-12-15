def is_nested(string):
    stack = []
    for bracket in string:
        if bracket == '[':
            stack.append(bracket)
        elif bracket == ']':
            if not stack or stack[-1] != '[':
                continue
            stack.pop()
    return len(stack) < len(string) - len(stack)