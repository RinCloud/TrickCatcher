def match_parens(lst):
    open_count = 0
    close_count = 0
    for s in lst:
        for char in s:
            if char == '(':
                open_count += 1
            elif char == ')':
                if open_count > 0:
                    open_count -= 1
                else:
                    return 'No'
    
    if open_count == 0:
        return 'Yes'
    else:
        return 'No'