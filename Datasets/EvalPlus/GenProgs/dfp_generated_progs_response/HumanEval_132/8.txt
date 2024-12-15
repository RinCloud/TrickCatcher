def is_nested(string):
    stack = []
    nested = False
    for bracket in string:
        if bracket == '[':
            stack.append(bracket)
        elif bracket == ']':
            if stack and stack[-1] == '[':
                nested = True
                break
            elif stack:
                stack.pop()
    
    if nested:
        return True
    else:
        return False