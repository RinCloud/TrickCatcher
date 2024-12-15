

def correct_bracketing(brackets: str):
    """ brackets is a string of "(" and ")".
    return True if every opening bracket has a corresponding closing bracket.

    >>> correct_bracketing("(")
    False
    >>> correct_bracketing("()")
    True
    >>> correct_bracketing("(()())")
    True
    >>> correct_bracketing(")(()")
    False
    """
    # TODO:
    # - return False if brackets is empty
    # - return False if brackets is an odd number of brackets
    # - return True if brackets is an even number of brackets,
    #   and the number of opening brackets is the same as the number of closing brackets

    if len(brackets) == 0:
        return False
    elif len(brackets) % 2 != 0:
        return False
    else:
        count = 0
        for bracket in brackets:
            if bracket == "(":
                count += 1
            elif bracket == ")":
                count -= 1
                if count < 0:
                    return False
        return count == 0


