from collections import deque

H, W = map(int, input().split())
C_h, C_w = map(int, input().split())
D_h, D_w = map(int, input().split())
S = [input() for _ in range(H)]

INF = float('inf')
dist = [[INF] * W for _ in range(H)]
dist[C_h - 1][C_w - 1] = 0

queue = deque([(C_h - 1, C_w - 1)])
while queue:
    h, w = queue.popleft()
    for dh, dw in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
        nh, nw = h + dh, w + dw
        if 0 <= nh < H and 0 <= nw < W and S[nh][nw] == '.' and dist[nh][nw] == INF:
            dist[nh][nw] = dist[h][w]
            queue.appendleft((nh, nw))
    for dh in range(-2, 3):
        for dw in range(-2, 3):
            nh, nw = h + dh, w + dw
            if 0 <= nh < H and 0 <= nw < W and S[nh][nw] == '.' and dist[nh][nw] == INF:
                dist[nh][nw] = dist[h][w] + 1
                queue.append((nh, nw))

if dist[D_h - 1][D_w - 1] == INF:
    print(-1)
else:
    print(dist[D_h - 1][D_w - 1])