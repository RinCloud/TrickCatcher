def count_sequences(N, M):
    MOD = 10**9 + 7
    
    # Initialize the factorization of M
    factors = []
    for i in range(2, int(M ** 0.5) + 1):
        if M % i == 0:
            cnt = 0
            while M % i == 0:
                M //= i
                cnt += 1
            factors.append(cnt)
    if M > 1:
        factors.append(1)
    
    # Calculate the number of sequences
    ans = 1
    for factor in factors:
        ans = ans * comb(N + factor - 1, factor) % MOD
    
    return ans

# Helper function for calculating the binomial coefficient
def comb(n, k):
    if k > n - k:
        k = n - k
    numer = denom = 1
    for i in range(1, k + 1):
        numer = numer * (n - i + 1) % MOD
        denom = denom * i % MOD
    return numer * pow(denom, MOD - 2, MOD) % MOD

# Read input from STDIN
N, M = map(int, input().split())

# Print the result
print(count_sequences(N, M))