def tri(n):
    """Everyone knows Fibonacci sequence, it was studied deeply by mathematicians in 
    the last couple centuries. However, what people don't know is Tribonacci sequence.
    Tribonacci sequence is defined by the recurrence:
    tri(1) = 3
    tri(n) = 1 + n / 2, if n is even.
    tri(n) =  tri(n - 1) + tri(n - 2) + tri(n - 3), if n is odd.
    For example:
    tri(2) = 1 + (2 / 2) = 2
    tri(4) = 3
    tri(3) = tri(2) + tri(1) + tri(0)
           = 2 + 3 + 1 = 6
    You are given a non-negative integer number n, you have to a return a list of the 
    first n + 1 numbers of the Tribonacci sequence.
    Examples:
    tri(3) = [1, 3, 2, 6]
    """
    def tri_helper(n):
        if n == 0:
            return 1
        elif n == 1:
            return 3
        elif n == 2:
            return 2
        elif n % 2 == 0:
            return 1 + n / 2
        else:
            return tri_helper(n - 1) + tri_helper(n - 2) + tri_helper(n - 3)
    return [tri_helper(i) for i in range(n + 1)]