from collections import deque

def find_minimum_casts(H, W, K, building):
    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]

    def bfs(sx, sy):
        dist = [[float('inf')] * (W + 2) for _ in range(H + 2)]
        dist[sx][sy] = 0
        queue = deque([(sx, sy)])

        while queue:
            x, y = queue.popleft()

            for i in range(4):
                nx = x + dx[i]
                ny = y + dy[i]

                if 1 <= nx <= H and 1 <= ny <= W and dist[nx][ny] == float('inf') and building[nx][ny] != '#':
                    dist[nx][ny] = dist[x][y] + 1
                    queue.append((nx, ny))

        return dist

    sx, sy = 0, 0
    for i in range(1, H + 1):
        for j in range(1, W + 1):
            if building[i][j] == 'S':
                sx, sy = i, j

    distances = bfs(sx, sy)
    min_casts = float('inf')

    for i in range(1, H + 1):
        for j in range(1, W + 1):
            if building[i][j] == '#':
                min_casts = min(min_casts, -(-distances[i][j] // K))

    return min_casts


H, W, K = map(int, input().split())
building = [['.'] * (W + 2)]

for _ in range(H):
    row = input().strip()
    building.append(['.'] + list(row) + ['.'])

building.append(['.'] * (W + 2))

result = find_minimum_casts(H, W, K, building)
print(result)