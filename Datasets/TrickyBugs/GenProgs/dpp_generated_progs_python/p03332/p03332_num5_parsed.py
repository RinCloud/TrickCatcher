MOD = 998244353

def paint_tower(N, A, B, K):
    dp = [0] * (N+1)
    dp[0] = 1

    for i in range(1, N+1):
        dp[i] = (dp[i-1] * (B+1)) % MOD

    for i in range(1, N+1):
        for j in range(max(0, i-A), i):
            dp[i] = (dp[i] + dp[j]) % MOD

    return dp[N]

N, A, B, K = map(int, input().split())
count = paint_tower(N, A, B, K)
print(count)