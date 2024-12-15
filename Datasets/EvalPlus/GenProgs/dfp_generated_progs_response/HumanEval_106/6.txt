def f(n):
    """
    Implement the function f that takes n as a parameter,
    and returns a list of size n, such that the value of the element at index i is the factorial of i if i is even
    or the sum of numbers from 1 to i otherwise.
    i starts from 1.
    
    Parameters:
    n (int): The size of the list
    
    Returns:
    list: A list of size n, where the value at index i is the factorial of i if i is even, or the sum of numbers from 1 to i otherwise.
    """
    result = []
    for i in range(1, n+1):
        if i % 2 == 0:
            fact = 1
            for j in range(1, i+1):
                fact = fact * j
            result.append(fact)
        else:
            result.append(sum(range(1, i+1)))
    return result