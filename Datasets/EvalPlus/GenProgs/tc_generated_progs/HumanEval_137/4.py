def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        elif a < b:
            return b
        else:
            return a
    else:
        if float(a) == float(b):
            return None
        elif float(a) < float(b):
            return b
        else:
            return a