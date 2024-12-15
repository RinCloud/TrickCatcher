from collections import deque

def bfs(h, w, k, grid):
    start = None
    
    # Find the starting position of Takahashi
    for i in range(h):
        for j in range(w):
            if grid[i][j] == "S":
                start = (i, j)
    
    # Initialize visited array
    visited = [[False] * w for _ in range(h)]
    
    # Initialize queue for BFS
    queue = deque([(start[0], start[1], 0)])
    
    while queue:
        x, y, casts = queue.popleft()
        
        # Mark current position as visited
        visited[x][y] = True
        
        # Check if current position has an exit
        if x == 0 or x == h-1 or y == 0 or y == w-1:
            return casts
        
        # Check all adjacent rooms
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy
            
            # Skip if the room is out of bounds or already visited
            if nx < 0 or nx >= h or ny < 0 or ny >= w or visited[nx][ny]:
                continue
            
            # If the room is unlocked, move to it
            if grid[nx][ny] == ".":
                queue.append((nx, ny, casts))
            
            # If the room is locked and Takahashi has casts remaining, unlock it
            elif grid[nx][ny] == "#" and casts < k:
                queue.append((nx, ny, casts+1))
    
    # If no path with an exit is found
    return -1


# Read input
h, w, k = map(int, input().split())
grid = [input() for _ in range(h)]

# Call BFS function
result = bfs(h, w, k, grid)

# Print the result
print(result)