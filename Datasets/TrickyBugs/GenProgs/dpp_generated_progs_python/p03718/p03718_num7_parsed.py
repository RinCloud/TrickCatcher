from collections import deque

# Function to check if the frog can reach the target leaf T after removing x leaves
def can_reach_target(grid, H, W, x):
    # Initialize a 2D matrix to mark the leaves that are removed
    removed = [[False for _ in range(W)] for _ in range(H)]
    
    # Start BFS from the source leaf S
    queue = deque([(sx, sy, 0)])
    visited = set([(sx, sy)])
    
    while queue:
        cx, cy, steps = queue.popleft()
        
        # Check if the frog reached the target leaf T
        if grid[cx][cy] == 'T':
            return True if steps <= x else False
        
        # Explore adjacent leaves
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = cx + dx, cy + dy
            
            # Check if the next leaf is within the pond and not removed
            if 0 <= nx < H and 0 <= ny < W and not removed[nx][ny]:
                # If the leaf is not empty, mark it as removed and add it to the queue
                if grid[nx][ny] in ('o', 'T'):
                    removed[nx][ny] = True
                    queue.append((nx, ny, steps + 1))
                    visited.add((nx, ny))
    
    return False

# Read the input pond dimensions
H, W = map(int, input().split())

# Read the pond grid
grid = [list(input()) for _ in range(H)]

# Find the coordinates of the source leaf S and the target leaf T
sx, sy = 0, 0
tx, ty = 0, 0
for i in range(H):
    for j in range(W):
        if grid[i][j] == 'S':
            sx, sy = i, j
        elif grid[i][j] == 'T':
            tx, ty = i, j

# Binary search to find the minimum number of leaves to remove
left = 0
right = H + W - 2
result = -1

while left <= right:
    mid = (left + right) // 2
    
    if can_reach_target(grid, H, W, mid):
        result = mid
        right = mid - 1
    else:
        left = mid + 1

print(result)