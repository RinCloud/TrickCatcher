def generate_integers(a, b):
    if a > b:
        return generate_integers(b, a)
    return [int(x) for x in range(a, b + 1) if int(x) % 2 == 0]