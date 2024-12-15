def compute_cost(N, M, K):
    MOD = 10**9 + 7
    factorial = [1]
    for i in range(1, N * M + 1):
        factorial.append((factorial[-1] * i) % MOD)
    
    # Compute binomial coefficient
    def binomial(n, k):
        return (factorial[n] * pow(factorial[k], MOD - 2, MOD) * pow(factorial[n-k], MOD - 2, MOD)) % MOD
    
    cost = 0
    for i in range(N):
        for j in range(M):
            # Compute number of arrangements with (i, j) as the first piece
            arrangements = binomial(N * M - 1, K - 1)
            
            # Compute the cost for this arrangement
            cost += (i * (N - i - 1) * M * arrangements) % MOD
            cost += (j * (M - j - 1) * N * arrangements) % MOD
            
            cost %= MOD
    
    return cost

# Read input from standard input
N, M, K = map(int, input().split())

# Compute and print the cost
print(compute_cost(N, M, K))