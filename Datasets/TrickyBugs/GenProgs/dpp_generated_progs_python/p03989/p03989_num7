def count_permutations(N, K):
    MOD = 924844033

    # Initialize the DP array
    dp = [[0 for _ in range(N + 1)] for _ in range(N + 1)]
    dp[0][0] = 1

    # Calculate the number of permutations using dynamic programming
    for i in range(1, N + 1):
        for j in range(i + 1):
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD
            if j > 0:
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD
            if i - j > K:
                dp[i][j] = (dp[i][j] - dp[i - K - 1][j]) % MOD
            if j > 0 and i - j > K:
                dp[i][j] = (dp[i][j] - dp[i - K - 1][j - 1]) % MOD

    # Get the answer from the last column of the DP array
    answer = dp[N][N]
    return answer

# Main
N, K = map(int, input().split())
result = count_permutations(N, K)
print(result)