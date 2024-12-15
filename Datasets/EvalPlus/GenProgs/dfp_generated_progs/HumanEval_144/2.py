def simplify(x, n):
    x_num, x_denom = x.split("/")
    n_num, n_denom = n.split("/")
    
    x_num = int(x_num)
    x_denom = int(x_denom)
    n_num = int(n_num)
    n_denom = int(n_denom)
    result = x_num * n_num / (x_denom * n_denom)
    
    if result.is_integer():
        return True
    else:
        return False