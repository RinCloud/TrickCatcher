
def x_or_y(n, x, y):
    """A simple program which should return the value of x if n is 
    a prime number and should return the value of y otherwise.

    Examples:
    for x_or_y(7, 34, 12) == 34
    for x_or_y(15, 8, 5) == 5
    
    """

    # TODO: Write your code here
    # if n is prime then return x
    # if n is not prime then return y

    if n < 0:
        return None

    if n == 1:
        return y
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return y
    return x

