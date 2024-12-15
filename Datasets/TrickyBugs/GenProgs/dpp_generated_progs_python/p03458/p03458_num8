# PROGRAM:

from collections import defaultdict

N, K = map(int, input().split())
desires = []
colors = defaultdict(int)

for _ in range(N):
    x, y, c = input().split()
    x = int(x) % (2 * K)
    y = int(y) % (2 * K)
    if x >= K:
        x -= K
        y += K
    if y >= K:
        y -= K
        x += K
    desires.append((x, y, c))
    colors[(x, y, c)] += 1

ans = 0
for x in range(K):
    for y in range(K):
        ans = max(ans, colors[(x, y, 'B')] + colors[(x, y, 'W')])

print(ans)