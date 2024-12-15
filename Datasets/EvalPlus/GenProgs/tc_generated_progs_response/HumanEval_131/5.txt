def digits(n):
    """Given a positive integer n, return the product of the odd digits.
    Return 0 if all digits are even.
    For example:
    digits(1)  == 1
    digits(4)  == 0
    digits(235) == 15
    """
    product = 1
    is_odd_digit_exists = False
    for i in str(n):
        if int(i) % 2 == 1:
            product *= int(i)
            is_odd_digit_exists = True
    return product if is_odd_digit_exists else 0