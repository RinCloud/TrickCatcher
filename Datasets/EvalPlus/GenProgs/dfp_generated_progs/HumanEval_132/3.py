def is_nested(string):
    stack = []
    count = 0
    for char in string:
        if char == "[":
            stack.append(char)
        elif char == "]" and stack:
            stack.pop()
            count += 1
    return count > 0 and len(stack) < count