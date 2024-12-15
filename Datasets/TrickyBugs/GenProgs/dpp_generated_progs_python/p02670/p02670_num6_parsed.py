N = int(input())
P = list(map(int, input().split()))

# Initialize the grid with all zeros
grid = [[0] * N for _ in range(N)]

# Start in the top left corner
row = 0
col = 0

# Keep track of the viewers that have been visited
visited = set()

# Process each viewer in the order they leave
for p in P:
    # Mark the current viewer as visited
    visited.add(p)
    
    # Find the position of the current viewer in the grid
    r, c = divmod(p - 1, N)
    
    # Check if the current viewer is adjacent to the previous viewer
    if abs(r - row) + abs(c - col) == 1:
        # If so, update the grid to indicate that the previous viewer hates the current viewer
        grid[row][col] += 1
        grid[r][c] += 1
    
    # Update the current position in the grid
    row = r
    col = c

# Count the number of pairs of viewers where one viewer hates the other
ans = sum(grid[i][j] for i in range(N) for j in range(N) if grid[i][j] > 0)

print(ans)