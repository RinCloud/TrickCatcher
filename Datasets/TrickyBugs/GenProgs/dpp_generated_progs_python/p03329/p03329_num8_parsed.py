def min_operations(N):
    dp = [float('inf')] * (N + 1)
    dp[0] = 0
    for i in range(1, N + 1):
        j = 1
        while j <= i:
            dp[i] = min(dp[i], dp[i - j] + 1)
            j *= 6
        j = 1
        while j <= i:
            dp[i] = min(dp[i], dp[i - j] + 1)
            j *= 9
    return dp[N]

N = int(input())
print(min_operations(N))