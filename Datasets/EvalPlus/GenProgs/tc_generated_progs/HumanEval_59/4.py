def largest_prime_factor(n: int):
    largest = 2
    while n % 2 == 0:
        largest = 2
        n = n // 2
    factor = 3
    while factor * factor <= n:
        if n % factor == 0:
            n = n // factor
            largest = factor
        else:
            factor += 2
    if n > largest:
        return n
    return largest