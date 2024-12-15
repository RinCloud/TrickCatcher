def simplify(x, n):
    x_numerator, x_denominator = x.split('/')
    n_numerator, n_denominator = n.split('/')
    
    result = int(x_numerator) * int(n_numerator) % int(x_denominator) * int(n_denominator)
    
    if (result == 0):
        return True
    else:
        return False