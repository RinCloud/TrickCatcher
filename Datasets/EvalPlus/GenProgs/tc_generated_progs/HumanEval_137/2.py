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
    if isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return b if b > a else (None if b == a else a)
    elif isinstance(a, str) and isinstance(b, str):
        a = float(a.replace(",", "."))
        b = float(b.replace(",", "."))
        return str(b) if b > a else (None if b == a else str(a))
    else:
        return None