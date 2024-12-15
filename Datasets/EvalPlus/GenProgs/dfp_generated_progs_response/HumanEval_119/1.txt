def match_parens(lst):
    count = 0
    for s in lst:
        for c in s:
            if c == '(':
                count += 1
            else:
                count -= 1
            if count < 0:
                return 'No'
    if count == 0:
        return 'Yes'
    else:
        return 'No'