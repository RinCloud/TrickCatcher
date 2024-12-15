def match_parens(lst):
    open_count = 0
    close_count = 0
    for i in lst:
        if i == '(':
            open_count += 1
        else:
            close_count += 1
        if close_count > open_count:
            return 'No'
    if open_count == close_count:
        return 'Yes'
    else:
        return 'No'