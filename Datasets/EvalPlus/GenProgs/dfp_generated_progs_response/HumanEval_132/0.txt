def is_nested(string):
    stack = []
    for char in string:
        if char == '[':
            stack.append(char)
        elif char == ']':
            if stack and stack[-1] == '[':
                stack.pop()
            else:
                stack.append(char)
    return len(stack) != string.count('[') and len(stack) != string.count(']')