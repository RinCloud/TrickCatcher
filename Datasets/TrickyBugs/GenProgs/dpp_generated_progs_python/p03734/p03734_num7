from typing import List, Tuple

def maximize_value(N: int, W: int, items: List[Tuple[int, int]]) -> int:
    dp = [[0] * (W + 1) for _ in range(N + 1)]
    for i in range(1, N + 1):
        w, v = items[i - 1]
        for j in range(1, W + 1):
            dp[i][j] = max(dp[i][j], dp[i - 1][j])
            if j >= w:
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w] + v)
    return dp[N][W]

N, W = map(int, input().split())
items = []
for _ in range(N):
    w, v = map(int, input().split())
    items.append((w, v))

print(maximize_value(N, W, items))