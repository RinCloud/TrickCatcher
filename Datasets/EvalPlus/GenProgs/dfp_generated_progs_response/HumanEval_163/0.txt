def generate_integers(a, b):
    """
    Given two positive integers a and b, return the even digits between a
    and b, in ascending order.
    """
    even_digits = []
    for num in range(a, b+1):
        digits = [int(d) for d in str(num)]
        for digit in digits:
            if digit % 2 == 0:
                even_digits.append(digit)
    return sorted(even_digits)