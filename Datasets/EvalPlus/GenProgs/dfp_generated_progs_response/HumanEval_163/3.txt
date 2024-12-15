def generate_integers(a, b):
    """
    Given two positive integers a and b, return the even digits between a
    and b, in ascending order.
    """
    result = []
    for i in range(a, b+1):
        for digit in str(i):
            if int(digit) % 2 == 0:
                result.append(int(digit))
    return result