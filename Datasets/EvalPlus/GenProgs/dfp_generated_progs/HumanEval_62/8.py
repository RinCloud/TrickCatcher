def derivative(xs: list):
    """Return the derivative of a polynomial represented by the given coefficients.
    Args:
        xs (list): Coefficients of the polynomial.
    Returns:
        list: Coefficients of the derivative polynomial.
    Examples:
        >>> derivative([3, 1, 2, 4, 5])
        [1, 4, 12, 20]
        >>> derivative([1, 2, 3])
        [2, 6]
    """
    return [coef * i for i, coef in enumerate(xs)][1:]