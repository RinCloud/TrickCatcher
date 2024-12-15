# Given the constraints, the most efficient way for Takahashi to find an exit is to perform a breadth-first search (BFS) from the starting room. Each node in the graph represents a room, and there is an edge between two rooms if they are adjacent and one can be reached from the other within K moves (including unlocking locked rooms). The BFS will find the shortest path from the starting room to an exit.

# First, we need to parse the input and create a grid representation of the building. We'll use a 2D list for this.

H, W, K = map(int, input().split())
building = []
for _ in range(H):
    building.append(list(input()))
    
# Next, we need to find the starting room and store its coordinates.

start = None
for i in range(H):
    for j in range(W):
        if building[i][j] == 'S':
            start = (i, j)
            break
    if start:
        break

# Now, we can implement the BFS using a queue.

from collections import deque

# Define directions for moving to adjacent rooms.
directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

# Initialize the queue with the starting room and set its level to 0.
queue = deque([(start[0], start[1], 0)])
visited = set([(start[0], start[1])])

# Perform BFS until an exit is found or all reachable rooms have been explored.
while queue:
    x, y, level = queue.popleft()
    if building[x][y] == 'E':
        print(level)
        break
        
    # Explore adjacent rooms.
    for dx, dy in directions:
        nx = x + dx
        ny = y + dy
        
        if nx < 0 or nx >= H or ny < 0 or ny >= W:
            continue
        
        # Move to adjacent room if it is unlocked and hasn't been visited.
        if building[nx][ny] != '#' and (nx, ny) not in visited:
            queue.append((nx, ny, level + 1))
            visited.add((nx, ny))

# If no exit is found, print -1.
if not queue:
    print(-1)