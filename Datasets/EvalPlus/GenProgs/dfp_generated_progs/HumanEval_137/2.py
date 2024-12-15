def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, str):
        if "." in a or "," in a:
            a = float(a.replace(",", "."))
        if "." in b or "," in b:
            b = float(b.replace(",", "."))
    elif isinstance(a, str):
        if "." in a or "," in a:
            a = float(a.replace(",", "."))
    elif isinstance(b, str):
        if "." in b or "," in b:
            b = float(b.replace(",", "."))
    if a > b:
        return a
    elif b > a:
        return b
    else:
        return None