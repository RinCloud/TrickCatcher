import math

def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

def max_operation(N):
    count = 0
    while True:
        if is_prime(N):
            return count
        for p in range(2, int(math.sqrt(N)) + 1):
            if N % p == 0 and is_prime(p):
                N //= p
                count += 1
                break

N = int(input())
print(max_operation(N))