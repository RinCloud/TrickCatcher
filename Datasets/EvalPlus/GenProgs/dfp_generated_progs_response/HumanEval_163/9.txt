def generate_integers(a, b):
    """
    Given two positive integers a and b, return the even digits between a
    and b, in ascending order.
    For example:
    generate_integers(2, 8) => [2, 4, 6, 8]
    generate_integers(8, 2) => [2, 4, 6, 8]
    generate_integers(10, 14) => []
    """
    even_digits = []
    for num in range(a, b+1):
        num_str = str(num)
        for digit in num_str:
            if int(digit) % 2 == 0:
                even_digits.append(int(digit))
    return sorted(even_digits)