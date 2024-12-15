def count_strings(S, K):
    n = len(S)
    mod = 998244353

    # calculate prefix sum of 1's
    prefix_sum = [0] * (n + 1)
    for i in range(1, n + 1):
        prefix_sum[i] = prefix_sum[i - 1] + int(S[i - 1])

    # initialize dp array
    dp = [[0] * (K + 1) for _ in range(n + 1)]
    dp[0][0] = 1

    # dynamic programming
    for i in range(1, n + 1):
        for j in range(K + 1):
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % mod
            
            cost = prefix_sum[i] - prefix_sum[i - 1]
            for k in range(1, i + 1):
                if cost <= j:
                    dp[i][j] = (dp[i][j] + dp[k - 1][j - cost]) % mod
                    
    return dp[n][K]

# read input
S, K = input().split()

# call function and print result
print(count_strings(S, int(K)))
