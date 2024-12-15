MOD = 10**9 + 7

def count_ways(N, s):
    # initialize dp array
    dp = [[0] * (len(s) + 1) for _ in range(N + 1)]
    dp[0][0] = 1
    
    for i in range(N):
        for j in range(len(s) + 1):
            dp[i+1][j] += dp[i][j] * 2 % MOD
            if j > 0 and s[j-1] == '1':
                dp[i+1][j] += dp[i][j-1]
            dp[i+1][j] %= MOD
    
    return dp[N][len(s)]

N = int(input())
s = input().strip()

result = count_ways(N, s)
print(result)