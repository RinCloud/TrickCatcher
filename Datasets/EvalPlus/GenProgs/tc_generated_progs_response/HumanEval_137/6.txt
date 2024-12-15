def compare_one(a, b):
    if type(a) != type(b):
        return a if str(a) < str(b) else b
    else:
        if isinstance(a, (int, float)):
            return a if a > b else (b if b > a else None)
        elif isinstance(a, str):
            a = a.replace(",", ".") if "," in a else a
            b = b.replace(",", ".") if "," in b else b
            return a if float(a) > float(b) else (b if float(b) > float(a) else None)