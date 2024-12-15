from math import sqrt
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True
def is_multiply_prime(a):
    count = 0
    for i in range(2, int(sqrt(a)) + 1):
        if a % i == 0:
            if is_prime(i):
                count += 1
            if is_prime(a // i):
                count += 1
    return count == 2