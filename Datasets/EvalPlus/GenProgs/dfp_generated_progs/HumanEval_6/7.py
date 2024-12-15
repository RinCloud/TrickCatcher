from typing import List
def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    depth = 0
    for char in paren_string:
        if char == '(':
            depth += 1
        elif char == ')':
            depths.append(depth)
            depth -= 1
    return depths