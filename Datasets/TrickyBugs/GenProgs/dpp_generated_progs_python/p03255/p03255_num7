def minimum_energy(N, X, positions):
    dp = [[float('inf')] * (N + 1) for _ in range(N + 1)]
    dp[0][0] = 0
    
    for i in range(N):
        for j in range(i + 1):
            dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + (positions[i] - positions[j]) * (j + 1))
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + (positions[i] - positions[i - j - 1]) * j)
    
    min_energy = float('inf')
    for j in range(N + 1):
        min_energy = min(min_energy, dp[N][j] + (X + j) * (j - 1))
    
    return min_energy

N, X = map(int, input().split())
positions = list(map(int, input().split()))
print(minimum_energy(N, X, positions))