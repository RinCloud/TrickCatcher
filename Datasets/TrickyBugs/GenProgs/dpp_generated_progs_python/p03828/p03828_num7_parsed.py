import math

MOD = int(1e9) + 7

def count_divisors(N):
    divisors = 1

    prime_factors = [0] * (N + 1)
    for i in range(2, N + 1):
        if prime_factors[i] == 0:
            for j in range(i, N + 1, i):
                prime_factors[j] += 1

    for i in range(2, N + 1):
        divisors *= (prime_factors[i] + 1)
        divisors %= MOD

    return divisors

N = int(input())
print(count_divisors(N * math.factorial(N)) % MOD)