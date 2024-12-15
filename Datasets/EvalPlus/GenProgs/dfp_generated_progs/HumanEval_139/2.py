def special_factorial(n):
    """
    Calculate the special factorial of the given number n.
    Parameters:
    n (int): A positive integer for which the special factorial needs to be calculated.
    Returns:
    int: The special factorial of the given number n.
    Examples:
    >>> special_factorial(4)
    288
    """
    factorial = 1
    special_factorial_result = 1
    for i in range(1, n+1):
        factorial *= i
        special_factorial_result *= factorial
    return special_factorial_result