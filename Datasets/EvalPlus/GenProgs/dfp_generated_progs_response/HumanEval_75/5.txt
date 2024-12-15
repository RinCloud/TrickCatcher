def is_multiply_prime(a):
    primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43,
              47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
    factors = []
    for prime in primes:
        if a % prime == 0:
            factors.append(prime)
            a = a / prime
    if len(factors) == 3:
        return True
    else:
        return False