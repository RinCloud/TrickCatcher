def count_painting_ways(N, heights):
    MOD = 10**9 + 7
    dp = [[0] * (max(heights) + 2) for _ in range(N + 1)]
    dp[0][0] = 1
    for i in range(N):
        for j in range(heights[i] + 1):
            dp[i+1][j] += dp[i][j] * 2
            dp[i+1][j] %= MOD
            dp[i+1][j+1] += dp[i][j]
            dp[i+1][j+1] %= MOD
    return dp[N][heights[N-1]]