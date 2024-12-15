def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        else:
            return max(a, b)
    else:
        return max(a, b) if type(a) == str else max(b, a)