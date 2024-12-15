def f(n):
    """
    Implement the function f that takes n as a parameter,
    and returns a list of size n, such that the value of the element at index i is the factorial of i if i is even
    or the sum of numbers from 1 to i otherwise.
    i starts from 1.
    the factorial of i is the multiplication of the numbers from 1 to i (1 * 2 * ... * i).
    
    :param n: size of the output list
    :return: list of size n
    
    Examples:
    >>> f(5)
    [1, 2, 6, 24, 15]
    """
    result = []
    for i in range(1, n+1):
        if i % 2 == 0:
            # calculate factorial
            fact = 1
            for num in range(1, i+1):
                fact *= num
            result.append(fact)
        else:
            # calculate sum
            total = sum(range(1, i+1))
            result.append(total)
    return result