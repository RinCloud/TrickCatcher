def min_energy_to_clean(N, X, x):
    import sys

    x = [0] + x
    dp = [[sys.maxsize] * (N + 1) for _ in range(N + 1)]
    dp[0][0] = 0

    for i in range(1, N + 1):
        for j in range(N + 1):
            if i > j:
                dp[i][j] = dp[i - 1][j]
            else:
                dp[i][j] = min(dp[i][j], dp[i - 1][j])

                k = max(j - i + 1, 0)
                dp[i][j] = min(dp[i][j], dp[i - 1][j - k] + (x[i] - x[i - k]) ** 2)

    ans = dp[N][N] * X
    return ans

N, X = map(int, input().split())
x = list(map(int, input().split()))

print(min_energy_to_clean(N, X, x))