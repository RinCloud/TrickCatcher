def compare_one(a, b):
    if a == b:
        return None
    elif isinstance(a, str) or isinstance(b, str):
        if isinstance(a, str):
            a = a.replace(",", ".")
        if isinstance(b, str):
            b = b.replace(",", ".")
    if a < b:
        return b
    else:
        return a