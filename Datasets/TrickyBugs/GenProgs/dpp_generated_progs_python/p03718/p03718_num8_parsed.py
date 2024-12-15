from collections import deque

def minimum_leaves(H, W, pond):
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    
    def bfs():
        queue = deque([(sx, sy, 0)])
        visited = [[False]*W for _ in range(H)]
        visited[sx][sy] = True
        while queue:
            x, y, leaves = queue.popleft()
            if pond[x][y] == 'T':
                return leaves
            for dx, dy in directions:
                nx, ny = x + dx, y + dy
                if 0 <= nx < H and 0 <= ny < W and not visited[nx][ny] and (pond[nx][ny] == 'o' or pond[nx][ny] == 'T'):
                    visited[nx][ny] = True
                    queue.append((nx, ny, leaves + 1))
        return -1
    
    sx, sy = -1, -1
    for i in range(H):
        for j in range(W):
            if pond[i][j] == 'S':
                sx, sy = i, j
                break
    return bfs()

H, W = map(int, input().split())
pond = [list(input()) for _ in range(H)]
print(minimum_leaves(H, W, pond))