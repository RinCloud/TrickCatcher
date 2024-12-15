def compare_one(a, b):
    if a == b:
        return None
    if isinstance(a, str) and isinstance(b, str):
        if a.replace(',', '.') < b.replace(',', '.'):
            return b
        else:
            return a
    if isinstance(a, int) and isinstance(b, int):
        if a < b:
            return b
        else:
            return a
    if isinstance(a, float) or isinstance(b, float):
        if float(a) < float(b):
            return b
        else:
            return a