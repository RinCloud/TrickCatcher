def compare_one(a, b):
    if type(a) != type(b):
        return None
    if type(a) == int or type(a) == float:
        return max(a, b)
    if type(a) == str:
        if "." in a:
            a = float(a.replace(",", "."))
        else:
            a = int(a.replace(",", ""))
        if "." in b:
            b = float(b.replace(",", "."))
        else:
            b = int(b.replace(",", ""))
        return max(a, b)