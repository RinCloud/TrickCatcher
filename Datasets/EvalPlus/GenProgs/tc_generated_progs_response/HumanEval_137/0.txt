def compare_one(a, b):
    if type(a) == str:
        a = a.replace(",", ".")
    if type(b) == str:
        b = b.replace(",", ".")
    
    if a < b:
        return b
    elif a == b:
        return None
    else:
        return a