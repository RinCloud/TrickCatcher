#CODE -

# function to calculate factorial modulo m
def factorial_modulo(n, m):
    factorial = 1
    for i in range(2, n + 1):
        factorial = (factorial * i) % m
    return factorial

# function to calculate modular inverse of a number x modulo m
def modular_inverse(x, m):
    return pow(x, m - 2, m)

# function to calculate number of strings, modulo m, that can result from applying operation on S between 0 and K times
def count_strings(S, K, m):
    n = len(S)
    count = 0
    for i in range(n):
        for j in range(i + 1, n):
            if S[i] == '0' and S[j] == '1':
                count += 1

    C = count + 1 # number of ways to choose a pair of indices (i, j)

    # calculate number of strings using combinatorial formula: (C+K) choose C modulo m
    numerator = factorial_modulo(C + K, m)
    denominator = (factorial_modulo(C, m) * factorial_modulo(K, m)) % m
    inverse_denominator = modular_inverse(denominator, m)

    result = (numerator * inverse_denominator) % m
    return result

# read input
S, K = input().split()
m = 998244353

# calculate and print the number of strings
print(count_strings(S, int(K), m))