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
    result = 1
    for i in range(1, n+1):
        temp = 1
        for j in range(i, 0, -1):
            temp *= j
        result *= temp
    return result