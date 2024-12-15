# Helper function to calculate modular exponentiation
def fast_pow(base, exp, mod):
    res = 1
    while exp > 0:
        if exp % 2 == 1:
            res = (res * base) % mod
        base = (base * base) % mod
        exp //= 2
    return res


# Read input
N, M, K = map(int, input().split())

# Calculate the total number of possible patterns
total_patterns = fast_pow(3, N + M + K, 1000000007)

# Calculate the number of patterns that lead to Alice's victory
victory_patterns = fast_pow(3, N, 1000000007)

# Print the answer modulo 10^9+7
print((victory_patterns * total_patterns) % 1000000007)