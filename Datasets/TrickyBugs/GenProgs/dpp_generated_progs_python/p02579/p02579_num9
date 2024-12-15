from collections import deque

# Read input
H, W = map(int, input().split())
C_h, C_w = map(int, input().split())
D_h, D_w = map(int, input().split())
S = [input() for _ in range(H)]

# Initialize distance array
dist = [[float('inf')]*W for _ in range(H)]
dist[C_h-1][C_w-1] = 0

# Define possible moves
moves = [(0, 1), (0, -1), (1, 0), (-1, 0)]

# Implement BFS to find minimum distance
queue = deque([(C_h-1, C_w-1)])

while queue:
    i, j = queue.popleft()

    # Move A: Walk to a road square that is vertically or horizontally adjacent
    for di, dj in moves:
        ni, nj = i + di, j + dj

        if 0 <= ni < H and 0 <= nj < W and S[ni][nj] == '.' and dist[ni][nj] > dist[i][j]:
            dist[ni][nj] = dist[i][j]
            queue.appendleft((ni, nj))

    # Move B: Use magic to warp to a road square in the 5x5 area
    for ni in range(i-2, i+3):
        for nj in range(j-2, j+3):
            if 0 <= ni < H and 0 <= nj < W and S[ni][nj] == '.' and dist[ni][nj] > dist[i][j] + 1:
                dist[ni][nj] = dist[i][j] + 1
                queue.append((ni, nj))

# Check if destination is reachable
if dist[D_h-1][D_w-1] == float('inf'):
    print(-1)
else:
    print(dist[D_h-1][D_w-1])