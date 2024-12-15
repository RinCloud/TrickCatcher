def minimum_energy(N, X, positions):
    dp = [float('inf')] * (N + 1)
    dp[0] = 0
    for i in range(1, N + 1):
        dp[i] = X * i * (i + 1) // 2
        for j in range(i):
            dp[i] = min(dp[i], dp[j] + X * (i - j) * (i - j + 1) // 2 + abs(positions[i - 1] - positions[j]))
    return dp[N]

if __name__ == "__main__":
    N, X = map(int, input().split())
    positions = list(map(int, input().split()))
    print(minimum_energy(N, X, positions))