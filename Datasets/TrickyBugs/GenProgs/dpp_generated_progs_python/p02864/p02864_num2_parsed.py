def min_operations(n, k, heights):
    if k >= n:
        return 0
    
    dp = [[float('inf')] * (k + 1) for _ in range(n)]
    dp[0][0] = heights[0]
    
    for i in range(1, n):
        total_height = 0
        for j in range(i - 1, -1, -1):
            total_height += heights[j + 1]
            for x in range(0, k + 1):
                dp[i][x] = min(dp[i][x], dp[j][x] + max(0, total_height - heights[j] - x))
    
    min_ops = float('inf')
    for x in range(k + 1):
        min_ops = min(min_ops, dp[n - 1][x])
    
    return min_ops

n, k = map(int, input().split())
heights = list(map(int, input().split()))

result = min_operations(n, k, heights)
print(result)
