def compare_one(a, b):
    if type(a) != type(b):
        return None
    if isinstance(a, int) or isinstance(a, float):
        return a if a > b else b
    if isinstance(a, str):
        a = a.replace(",", ".")
        b = b.replace(",", ".")
        return a if float(a) > float(b) else b