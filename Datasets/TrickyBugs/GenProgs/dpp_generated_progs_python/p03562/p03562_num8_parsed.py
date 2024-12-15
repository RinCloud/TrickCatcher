def solve(N, X, A):
    MOD = 998244353
    dp = [[0 for j in range(X + 1)] for i in range(N + 1)]
    dp[0][0] = 1

    for i in range(1, N + 1):
        for j in range(X + 1):
            dp[i][j] += dp[i - 1][j]
            dp[i][j] %= MOD

            if j >= A[i - 1]:
                dp[i][j] += dp[i][j - A[i - 1]]
                dp[i][j] %= MOD

    return dp[N][X]

# Read input
N, X = map(int, input().split())
A = []
for _ in range(N):
    A.append(int(input(), 2))
    
# Call function and print result
result = solve(N, X, A)
print(result)