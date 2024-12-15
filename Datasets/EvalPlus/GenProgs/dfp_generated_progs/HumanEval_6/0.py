from typing import List
def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if len(stack) > 0:
                depths.append(len(stack))
                stack.pop()
            else:
                depths.append(0)
    return depths