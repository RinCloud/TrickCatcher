MOD = 10**9 + 7

def count_key_presses(N, s):
    dp = [[0] * (N+1) for _ in range(len(s)+1)]
    dp[0][0] = 1
    
    for i in range(len(s)):
        for j in range(N+1):
            dp[i+1][j] += dp[i][j]
            dp[i+1][j] %= MOD
            
            if s[i] == '0' and j < N:
                dp[i+1][j+1] += dp[i][j]
                dp[i+1][j+1] %= MOD
            
            if s[i] == '1':
                dp[i+1][j] += dp[i][j]
                dp[i+1][j] %= MOD
    
    return dp[-1][-1]

N = int(input())
s = input()

result = count_key_presses(N, s)
print(result)