H, W = map(int, input().split())
C_h, C_w = map(int, input().split())
D_h, D_w = map(int, input().split())
S = [input() for _ in range(H)]

from collections import deque

INF = float('inf')
dist = [[INF] * W for _ in range(H)]
dist[C_h-1][C_w-1] = 0

queue = deque([(C_h-1, C_w-1)])

while queue:
    i, j = queue.popleft()
    for di, dj in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
        ni, nj = i + di, j + dj
        if not (0 <= ni < H and 0 <= nj < W):
            continue
        if S[ni][nj] == '#':
            continue
        if dist[ni][nj] <= dist[i][j]:
            continue
        dist[ni][nj] = dist[i][j]
        queue.appendleft((ni, nj))
    for di in range(-2, 3):
        for dj in range(-2, 3):
            ni, nj = i + di, j + dj
            if not (0 <= ni < H and 0 <= nj < W):
                continue
            if S[ni][nj] == '#':
                continue
            if dist[ni][nj] <= dist[i][j] + 1:
                continue
            dist[ni][nj] = dist[i][j] + 1
            queue.append((ni, nj))

ans = dist[D_h-1][D_w-1]
if ans == INF:
    ans = -1

print(ans)