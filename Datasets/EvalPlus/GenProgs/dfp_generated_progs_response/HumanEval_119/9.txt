def match_parens(lst):
    open_brackets = 0
    for char in lst[0] + lst[1]:
        if char == "(":
            open_brackets += 1
        elif char == ")":
            if open_brackets == 0:
                return "No"
            open_brackets -= 1
    if open_brackets == 0:
        return "Yes"
    else:
        return "No"