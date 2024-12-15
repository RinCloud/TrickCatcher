def derivative(xs: list):
    """ Derivative of a polynomial
    xs represent coefficients of a polynomial.
    xs[0] + xs[1] * x + xs[2] * x^2 + ....
    Return derivative of this polynomial in the same form.
    """
    return [i * xs[i] for i in range(1, len(xs))]