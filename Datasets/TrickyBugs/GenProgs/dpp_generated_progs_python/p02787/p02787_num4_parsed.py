def minimum_magic_points(H, N, spells):
    INF = float('inf')
    dp = [INF] * (H + 1)
    dp[0] = 0

    for i in range(1, H + 1):
        for j in range(N):
            a, b = spells[j]
            if i - a >= 0:
                dp[i] = min(dp[i], dp[i - a] + b)

    return dp[H] if dp[H] != INF else -1


H, N = map(int, input().split())
spells = []
for _ in range(N):
    a, b = map(int, input().split())
    spells.append((a, b))

result = minimum_magic_points(H, N, spells)
print(result)