from typing import List
def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if stack and stack[-1] == "(":
                stack.pop()
                if not stack:
                    result.append(paren_string[:paren_string.index(char)+1])
    return result