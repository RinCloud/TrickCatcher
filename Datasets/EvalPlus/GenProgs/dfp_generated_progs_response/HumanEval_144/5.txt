def simplify(x, n):
    x_numerator, x_denominator = map(int, x.split('/'))
    n_numerator, n_denominator = map(int, n.split('/'))
    
    product = x_numerator * n_numerator
    divisor = x_denominator * n_denominator
    
    if product % divisor == 0:
        return True
    else:
        return False