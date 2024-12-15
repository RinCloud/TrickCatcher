MOD = 10**9 + 7

def count_ways(N, s):
    # Initializing the dp table
    dp = [[0] * (N+1) for _ in range(len(s)+1)]

    # Base case
    dp[0][0] = 1

    # Dynamic programming
    for i in range(1, len(s)+1):
        for j in range(N+1):
            dp[i][j] = dp[i-1][j]
            if s[i-1] == '0':
                dp[i][j] += dp[i-1][j-1] if j > 0 else 0
            else:
                dp[i][j] += dp[i-1][j] if j < N else 0
            dp[i][j] %= MOD

    return dp[-1][-1]

# Reading input
N = int(input())
s = input().strip()

# Counting the number of ways
result = count_ways(N, s)

# Printing the result
print(result)