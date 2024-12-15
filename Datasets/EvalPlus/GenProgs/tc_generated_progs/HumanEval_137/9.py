def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        elif a < b:
            return b
        else:
            return a
    else:
        if str(a).replace(",", ".") == str(b):
            return a
        elif str(b).replace(",", ".") == str(a):
            return b
        else:
            return None