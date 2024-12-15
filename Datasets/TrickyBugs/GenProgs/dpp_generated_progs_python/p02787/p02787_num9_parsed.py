# Program:

def min_magic_points(H, N, spells):
    INF = float('inf')

    dp = [INF] * (H + 1)
    dp[0] = 0

    for i in range(1, H + 1):
        for j in range(N):
            A, B = spells[j]
            if i - A >= 0:
                dp[i] = min(dp[i], dp[i - A] + B)

    return dp[H]

H, N = map(int, input().split())
spells = []
for _ in range(N):
    A, B = map(int, input().split())
    spells.append((A, B))

result = min_magic_points(H, N, spells)
print(result)