def compare_one(a, b):
    """
    Create a function that takes integers, floats, or strings representing
    real numbers, and returns the larger variable in its given variable type.
    Return None if the values are equal.
    Note: If a real number is represented as a string, the floating point might be . or ,
    compare_one(1, 2.5) ➞ 2.5
    compare_one(1, "2,3") ➞ "2,3"
    compare_one("5,1", "6") ➞ "6"
    compare_one("1", 1) ➞ None
    """
    if type(a) == str:
        if type(b) == str:
            if float(a.replace(",", ".")) > float(b.replace(",", ".")):
                return a
            elif float(a.replace(",", ".")) < float(b.replace(",", ".")):
                return b
            else:
                return None
        else:
            if float(a.replace(",", ".")) > b:
                return a
            elif float(a.replace(",", ".")) < b:
                return b
            else:
                return None
    else:
        if type(b) == str:
            if a > float(b.replace(",", ".")):
                return a
            elif a < float(b.replace(",", ".")):
                return b
            else:
                return None
        else:
            if a > b:
                return a
            elif a < b:
                return b
            else:
                return None