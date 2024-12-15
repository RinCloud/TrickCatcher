def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, str):
        a = a.replace(',', '.')
        b = b.replace(',', '.')
    a_type = type(a).__name__
    b_type = type(b).__name__
    if a_type == 'str' and b_type == 'str':
        if a > b:
            return a
        elif b > a:
            return b
    elif a_type == 'str' and b_type in ['int', 'float']:
        return a
    elif a_type in ['int', 'float'] and b_type == 'str':
        return b
    else:
        if a > b:
            return a
        elif b > a:
            return b
    return None