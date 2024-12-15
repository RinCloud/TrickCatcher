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
    
    # if both variables are equal, return None
    if a == b:
        return None
    # if both variables are strings, compare them as strings and return the larger one
    if isinstance(a, str) and isinstance(b, str):
        return a if a > b else b
    # if both variables are numbers, convert them to floats and return the larger one
    if isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return float(a) if float(a) > float(b) else float(b)
    # if one variable is a string and the other is a number, return the number
    if isinstance(a, str) and isinstance(b, (int, float)):
        return float(b)
    if isinstance(b, str) and isinstance(a, (int, float)):
        return float(a)