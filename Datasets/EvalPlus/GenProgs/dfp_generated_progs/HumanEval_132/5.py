def is_nested(string):
    stack = []
    for bracket in string:
        if bracket == '[':
            stack.append(bracket)
        else:
            if stack and stack[-1] == '[':
                stack.pop()
    if stack:
        return True
    return False