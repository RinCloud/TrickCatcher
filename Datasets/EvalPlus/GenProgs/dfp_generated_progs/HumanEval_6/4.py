from typing import List
def parse_nested_parens(paren_string: str) -> List[int]:
    res = []
    count = 0
    for char in paren_string:
        if char == '(':
            count += 1
        elif char == ')':
            count -= 1
        elif char == ' ':
            res.append(count)
    res.append(count)  # Add the count for the last group
    return res