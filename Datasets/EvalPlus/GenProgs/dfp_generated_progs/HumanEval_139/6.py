def special_factorial(n):
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0
    For example:
    >>> special_factorial(4)
    288
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
    factorial = 1
    special_factorial = 1
    for i in range(1, n+1):
        factorial *= i
        special_factorial *= factorial
    
    return special_factorial