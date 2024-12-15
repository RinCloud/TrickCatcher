def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        elif a < b:
            return b
        else:
            return a
    else:
        a_num = float(str(a).replace(",", "."))
        b_num = float(str(b).replace(",", "."))
        
        if a_num == b_num:
            return None
        elif a_num < b_num:
            return b
        else:
            return a