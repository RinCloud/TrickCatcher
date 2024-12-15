MOD = 998244353

def count_painting_ways(N, A, B, K):
    dp = [0] * (K+1)
    dp[0] = 1

    # Calculate the number of ways to paint the layers
    for i in range(1, K+1):
        if i >= A:
            dp[i] += dp[i - A]
        if i >= B:
            dp[i] += dp[i - B]
        dp[i] %= MOD

    return dp[K]

# Read input
N, A, B, K = map(int, input().split())

# Calculate and print the number of painting ways modulo MOD
print(count_painting_ways(N, A, B, K))