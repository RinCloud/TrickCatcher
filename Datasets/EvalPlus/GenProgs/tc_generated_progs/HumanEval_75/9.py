def is_multiply_prime(a):
    if a < 100:
        for i in range(2, 10):
            if is_prime(i):
                for j in range(2, 10):
                    if is_prime(j):
                        for k in range(2, 10):
                            if is_prime(k):
                                if i * j * k == a:
                                    return True
        return False
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True