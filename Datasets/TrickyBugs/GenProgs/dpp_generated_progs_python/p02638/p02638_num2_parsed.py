
N, K, P = map(int, input().split())

# Initialize the factorial and inverse factorial arrays
fact = [1] * (N+1)
inv = [1] * (N+1)

# Calculate factorials and inverse factorials modulo P
for i in range(1, N+1):
    fact[i] = (fact[i-1] * i) % P
    inv[i] = pow(fact[i], P-2, P)

# Calculate the number of valid graphs using dynamic programming
dp = [[0] * (K+1) for _ in range(N+1)]
dp[0][0] = 1

for i in range(1, N+1):
    for j in range(1, K+1):
        for k in range(i):
            for l in range(j+1):
                dp[i][j] = (dp[i][j] + ((dp[k][l] * fact[i-1]) % P * inv[i-k-1]) % P * fact[k*l] % P) % P

# Calculate the final answer as the sum of dp[N][j] for j = 0 to K
answer = sum(dp[N]) % P

print(answer)
