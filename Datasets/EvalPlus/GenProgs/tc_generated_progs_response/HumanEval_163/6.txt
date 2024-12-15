def generate_integers(a, b):
    if a > b:
        return generate_integers(b, a)
    return [x for x in range(a, b + 1) if x % 2 == 0 and any(digit in ['0', '2', '4', '6', '8'] for digit in str(x))]