def generate_integers(a, b):
    """
    Given two positive integers a and b, return the even digits between a
    and b, in ascending order.
    """
    if a > b:
        a, b = b, a
    evens = []
    for i in range(a, b+1):
        digits = [int(d) for d in str(i) if int(d) % 2 == 0]
        evens.extend(digits)
    return sorted(evens)