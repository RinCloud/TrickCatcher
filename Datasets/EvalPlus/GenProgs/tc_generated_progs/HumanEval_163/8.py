def generate_integers(a, b):
    if a > b:
        return generate_integers(b, a)
    return [x for x in range(a, b + 1, 2) if set(int(digit) for digit in str(x)) <= {0, 2, 4, 6, 8}]