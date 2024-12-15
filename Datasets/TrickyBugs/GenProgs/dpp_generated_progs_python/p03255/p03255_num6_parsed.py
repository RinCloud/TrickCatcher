from collections import deque

def solve(N, X, trash_positions):
    inf = float('inf')
    dp = [inf] * (N + 1)
    dp[0] = 0
    trash_positions = [0] + trash_positions
    
    for i in range(N):
        dp[i+1] = min(dp[i+1], dp[i] + X)
        c = X
        for j in range(i, -1, -1):
            c += (trash_positions[j+1] - trash_positions[j]) * (j+2)
            if j > 0:
                dp[i+1] = min(dp[i+1], dp[j-1] + c)
    
    return dp[N]

N, X = map(int, input().split())
trash_positions = list(map(int, input().split()))

print(solve(N, X, trash_positions))