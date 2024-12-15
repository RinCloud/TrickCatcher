def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        elif type(a) == int or type(a) == float:
            return max(a, b)
        elif type(a) == str:
            # compare numbers represented as strings
            num_a = float(a.replace(',', '.'))
            num_b = float(b.replace(',', '.'))
            return str(max(num_a, num_b)).replace('.', ',')
    else:
        return None