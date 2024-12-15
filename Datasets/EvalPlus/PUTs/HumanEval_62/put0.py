

def derivative(xs: list):
    """ xs represent coefficients of a polynomial.
    xs[0] + xs[1] * x + xs[2] * x^2 + ....
     Return derivative of this polynomial in the same form.
    >>> derivative([3, 1, 2, 4, 5])
    [1, 4, 12, 20]
    >>> derivative([1, 2, 3])
    [2, 6]
    """
    # TODO: Your code here
    # Base Case
    if len(xs) == 1:
        return []
    # Recursive Case
    else:
        # Initializing the derivatives list
        derivatives = [0] * (len(xs) - 1)
        # Setting the first element to the derivative of the first term
        derivatives[0] = xs[1]
        # Setting the last element to the derivative of the last term
        derivatives[-1] = xs[-1] * len(xs)
        # Iterating over the list in the middle
        for i in range(1, len(xs) - 1):
            # Setting the current index to the derivative of the current term
            derivatives[i] = xs[i + 1] * (i + 1)
        return derivatives

