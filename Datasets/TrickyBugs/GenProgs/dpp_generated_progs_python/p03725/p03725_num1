import sys
from collections import deque

H, W, K = map(int, sys.stdin.readline().split())
A = [list(sys.stdin.readline().rstrip()) for _ in range(H)]

# Find the starting position
for i in range(H):
    for j in range(W):
        if A[i][j] == 'S':
            start = (i, j)

# Initialize the queue and visited set
queue = deque([(start, 0)])  # (position, number of casts)
visited = set([start])

# Define the possible moves
moves = [(0, 1), (0, -1), (1, 0), (-1, 0)]

# BFS to find the minimum number of casts
while queue:
    (x, y), casts = queue.popleft()

    # Check if reached an exit
    if x == 0 or x == H - 1 or y == 0 or y == W - 1:
        print(casts)
        sys.exit()

    # Explore the adjacent rooms
    for dx, dy in moves:
        nx, ny = x + dx, y + dy

        # Skip if out of bounds or already visited
        if nx < 0 or nx >= H or ny < 0 or ny >= W or (nx, ny) in visited:
            continue

        # Skip if the room is locked
        if A[nx][ny] == '#':
            continue

        # Mark the room as visited and add to the queue
        visited.add((nx, ny))
        queue.append(((nx, ny), casts + 1))

print(-1)