def compare_one(a, b):
    if type(a) != type(b):
        return max(a, b)
    elif a == b:
        return None
    elif isinstance(a, (int, float)):
        return max(a, b)
    elif isinstance(a, str):
        if isinstance(b, str):
            return max(a, b)
        else:
            try:
                return max(float(a.replace(',', '.')), b)
            except ValueError:
                return None