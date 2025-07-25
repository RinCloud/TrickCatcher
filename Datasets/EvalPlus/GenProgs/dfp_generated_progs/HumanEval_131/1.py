def digits(n):
    """Given a positive integer n, return the product of the odd digits.
    Return 0 if all digits are even.
    For example:
    digits(1)  == 1
    digits(4)  == 0
    digits(235) == 15
    """
    product = 1
    has_odd_digit = False
    # loop through each digit of n
    while n > 0:
        digit = n % 10
        n = n // 10
        # check if digit is odd
        if digit % 2 == 1:
            product *= digit
            has_odd_digit = True
    # if there are no odd digits, return 0
    if not has_odd_digit:
        return 0
    return product