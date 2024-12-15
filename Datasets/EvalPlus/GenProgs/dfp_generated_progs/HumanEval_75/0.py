def is_multiply_prime(a):
    primes = []
    factor = 2
    while len(primes) < 3:
        if a % factor == 0:
            primes.append(factor)
            a = a // factor
            factor = 2
        else:
            factor += 1
    if len(primes) == 3:
        return True
    else:
        return False
    return