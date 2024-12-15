MOD = 10**9 + 7

def count_ways(N, s):
    # Initialize the dp table
    dp = [[0] * (N+1) for _ in range(len(s)+1)]
    
    # Base case
    dp[0][0] = 1
    
    # Compute the number of ways
    for i in range(1, len(s) + 1):
        for j in range(N + 1):
            if s[i-1] == '0':
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % MOD
            else:
                dp[i][j] = dp[i-1][j]
    
    return dp[len(s)][N]

N = int(input())
s = input()
print(count_ways(N, s))