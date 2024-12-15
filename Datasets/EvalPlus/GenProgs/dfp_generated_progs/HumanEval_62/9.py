def derivative(xs: list):
    """Return the derivative of a polynomial represented by the given list of coefficients.
    Args:
    xs -- a list of coefficients, where xs[i] represents the coefficient of x^i term
    Returns:
    a list of coefficients representing the derivative of the given polynomial
    Examples:
    >>> derivative([3, 1, 2, 4, 5])
    [1, 4, 12, 20]
    >>> derivative([1, 2, 3])
    [2, 6]
    """
    derivative_xs = []
    for i in range(1, len(xs)):
        derivative_xs.append(i * xs[i])
    return derivative_xs