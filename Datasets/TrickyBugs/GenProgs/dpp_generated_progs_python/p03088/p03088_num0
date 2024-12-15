MOD = 10**9+7

def count_strings(N):
    dp = [0] * (N + 1)
    dp[0] = 1

    for i in range(1, N + 1):
        dp[i] = dp[i - 1] * 4 % MOD

        if i >= 2:
            dp[i] += dp[i - 2] * 4 % MOD

        if i >= 3:
            dp[i] += dp[i - 3] * 4 % MOD

        if i >= 4:
            dp[i] += dp[i - 4] * 4 % MOD

        dp[i] %= MOD

    for i in range(2, N + 1):
        dp[N] -= dp[i - 2]
        dp[N] %= MOD

    return dp[N]

N = int(input())
print(count_strings(N))