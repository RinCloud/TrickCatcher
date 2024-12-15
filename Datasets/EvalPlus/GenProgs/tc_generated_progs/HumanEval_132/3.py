def is_nested(string):
    brackets = 0
    while brackets < len(string) - 1:
        if string[brackets:brackets+2] == '[[':
            nested_bracket = string.find(']', brackets+2)
            if nested_bracket != -1:
                return True
            brackets += 1
        else:
            brackets += 1
    return False