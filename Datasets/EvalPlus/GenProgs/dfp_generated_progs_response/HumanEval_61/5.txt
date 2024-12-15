def correct_bracketing(brackets: str):
    open_brackets = 0
    for bracket in brackets:
        if bracket == "(":
            open_brackets += 1
        elif bracket == ")":
            if open_brackets == 0:
                return False
            open_brackets -= 1
    if open_brackets == 0:
        return True
    else:
        return False