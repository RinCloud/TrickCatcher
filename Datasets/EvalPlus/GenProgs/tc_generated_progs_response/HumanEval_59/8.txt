def largest_prime_factor(n: int):
    largest = 1
    factor = 2
    while factor <= n:
        if n % factor == 0:
            largest = factor
            n = n // factor
        else:
            factor += 1
    return largest