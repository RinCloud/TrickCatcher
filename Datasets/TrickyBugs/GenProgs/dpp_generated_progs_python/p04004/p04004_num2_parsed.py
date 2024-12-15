N, M, K = map(int, input().split())
mod = 10**9 + 7

def count_patterns(n, m, k):
    dp = [[[0] * 4 for _ in range(k + 1)] for _ in range(m + 1)]
    
    dp[0][0][3] = 1
    for i in range(m + 1):
        for j in range(k + 1):
            for k in range(4):
                if i > 0 and k != 1:
                    dp[i][j][1] = (dp[i][j][1] + dp[i-1][j][k]) % mod
                if j > 0 and k != 2:
                    dp[i][j][2] = (dp[i][j][2] + dp[i][j-1][k]) % mod
                if k != 3:
                    dp[i][j][3] = (dp[i][j][3] + dp[i][j][k]) % mod
    
    ans = 0
    for i in range(n + 1):
        for j in range(m + 1):
            for k in range(4):
                ans = (ans + dp[i][j][k]) % mod
    
    return ans

ans = count_patterns(N, M, K)
print(ans)