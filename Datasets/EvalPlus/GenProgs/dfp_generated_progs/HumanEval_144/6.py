def simplify(x, n):
    # split the strings into numerator and denominator
    x_num, x_den = map(int, x.split("/"))
    n_num, n_den = map(int, n.split("/"))
    # calculate the product x * n
    product_num = x_num * n_num
    product_den = x_den * n_den
    # check if the result is a whole number
    if product_num % product_den == 0:
        return True
    else:
        return False