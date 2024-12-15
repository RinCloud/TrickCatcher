n = int(input())

p = list(map(int, input().split()))

pos = [(0, 0) for i in range(n * n)]

for i in range(n):
    for j in range(n):
        pos[p[i * n + j] - 1] = (i, j)

ans = 0

for i in range(n * n - 1):
    x1, y1 = pos[i]
    x2, y2 = pos[i + 1]
    if x1 > x2:
        x1, x2 = x2, x1
    ans += (x1 < x2 and y1 == y2)

print(ans)