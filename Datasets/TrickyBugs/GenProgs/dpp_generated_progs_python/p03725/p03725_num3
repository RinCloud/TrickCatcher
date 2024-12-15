from collections import deque

def solve(H, W, K, A):
    inf = float('inf')
    def bfs(si, sj):
        dist = [[inf] * W for _ in range(H)]
        dist[si][sj] = 0
        que = deque([(si, sj)])
        while que:
            i, j = que.popleft()
            cur_dist = dist[i][j]
            if cur_dist >= K:
                continue
            for di, dj in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                for k in range(1, K + 1):
                    ni, nj = i + di * k, j + dj * k
                    if ni < 0 or ni >= H or nj < 0 or nj >= W:
                        break
                    if A[ni][nj] == '#' or dist[ni][nj] <= cur_dist + 1:
                        break
                    if dist[ni][nj] == inf:
                        dist[ni][nj] = cur_dist + 1
                        que.append((ni, nj))
            for di, dj in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                ni, nj = i + di, j + dj
                if ni < 0 or ni >= H or nj < 0 or nj >= W:
                    continue
                if A[ni][nj] == '#' or dist[ni][nj] <= cur_dist:
                    continue
                dist[ni][nj] = cur_dist
                que.append((ni, nj))
        return dist

    for i in range(H):
        for j in range(W):
            if A[i][j] == 'S':
                si, sj = i, j
                break

    dist = bfs(si, sj)
    ans = inf
    for i in range(H):
        for j in range(W):
            if i in [0, H - 1] or j in [0, W - 1]:
                ans = min(ans, dist[i][j])
    return ans