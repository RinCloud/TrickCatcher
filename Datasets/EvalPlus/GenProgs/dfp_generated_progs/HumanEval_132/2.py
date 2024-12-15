def is_nested(string):
    stack = []
    for char in string:
        if char == '[':
            stack.append(char)
        elif char == ']':
            if len(stack) > 0 and stack[-1] == '[':
                stack.pop()
            else:
                stack.append(char)
    return len(stack) < len(string) and len(stack) > 0