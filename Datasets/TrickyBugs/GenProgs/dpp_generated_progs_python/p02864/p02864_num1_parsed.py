import sys

def solve(N, K, H):
    dp = [[sys.maxsize] * (N + 1) for _ in range(K + 1)]
    dp[0][0] = 0
    
    for i in range(1, N + 1):
        dp[0][i] = dp[0][i - 1] + H[i - 1]
    
    for i in range(1, K + 1):
        for j in range(1, N + 1):
            for k in range(j):
                dp[i][j] = min(dp[i][j], dp[i - 1][k] + max(0, H[j - 1] - H[k]))
    
    return dp[K][N]

N, K = map(int, input().split())
H = list(map(int, input().split()))

print(solve(N, K, H))