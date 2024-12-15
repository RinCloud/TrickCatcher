MOD = int(1e9) + 7

def count_sequences(N, K):
    # Check if N is even or odd
    if N % 2 == 0:
        return pow(K, N // 2, MOD)
    else:
        return (pow(K, N // 2, MOD) * pow(K, N // 2 + 1, MOD)) % MOD

# Read input
N, K = map(int, input().split())

# Count sequences
result = count_sequences(N, K)

# Print the result
print(result)
