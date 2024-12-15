def derivative(xs: list):
    """
    Derivative of a polynomial with coefficients xs
    
    Arguments:
    xs -- list of coefficients
    
    Returns:
    list -- the derivative of the polynomial
    
    Example:
    >>> derivative([3, 1, 2, 4, 5])
    [1, 4, 12, 20]
    >>> derivative([1, 2, 3])
    [2, 6]
    """
    
    derivative_xs = []
    for i, coef in enumerate(xs):
        power = i
        derivative_coef = coef * power
        
        if power > 0:
            derivative_xs.append(derivative_coef)
            
    return derivative_xs