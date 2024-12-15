MOD = 10**9 + 7

def num_ways(N, s):
    dp = [[0] * (len(s) + 1) for _ in range(N + 1)]
    
    dp[0][0] = 1
    
    for i in range(1, N + 1):
        for j in range(len(s) + 1):
            if j > 0 and s[j - 1] == '0':
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD
            if j < len(s) and s[j] == '1':
                dp[i][j] = (dp[i][j] + dp[i - 1][j + 1]) % MOD
    
    return dp[N][0]

N = int(input())
s = input().strip()
print(num_ways(N, s))