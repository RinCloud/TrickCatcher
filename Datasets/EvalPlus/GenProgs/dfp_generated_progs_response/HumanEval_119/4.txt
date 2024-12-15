def match_parens(lst):
    # Count the number of open parentheses in the first string and the number of close parentheses in the second string
    open_count = lst[0].count('(')
    close_count = lst[1].count(')')
    
    # If the number of open parentheses is greater than the number of close parentheses, return 'No'
    if open_count > close_count:
        return 'No'
    
    # Otherwise, return 'Yes'
    return 'Yes'