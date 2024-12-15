H, W = map(int, input().split())
C_h, C_w = map(int, input().split())
D_h, D_w = map(int, input().split())
S = [list(input().rstrip()) for _ in range(H)]

from collections import deque

def bfs():
    INF = float('inf')
    dist = [[INF]*W for _ in range(H)]
    dist[C_h-1][C_w-1] = 0
    queue = deque([(C_h-1, C_w-1)])
    while queue:
        i, j = queue.popleft()
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i+dx, j+dy
            if not (0 <= ni < H and 0 <= nj < W):
                continue
            if S[ni][nj] == '#':
                continue
            if dist[ni][nj] <= dist[i][j]:
                continue
            dist[ni][nj] = dist[i][j]
            queue.appendleft((ni, nj))
        for dx in range(-2, 3):
            for dy in range(-2, 3):
                ni, nj = i+dx, j+dy
                if not (0 <= ni < H and 0 <= nj < W):
                    continue
                if S[ni][nj] == '#':
                    continue
                if dist[ni][nj] <= dist[i][j]+1:
                    continue
                dist[ni][nj] = dist[i][j] + 1
                queue.append((ni, nj))
    return dist[D_h-1][D_w-1]

dist = bfs()
if dist == float('inf'):
    print(-1)
else:
    print(dist)