# Python program to check if the grid can be made symmetric

def is_grid_symmetric(grid):
    h = len(grid)
    w = len(grid[0])
    
    for i in range(h):
        for j in range(w):
            if grid[i][j] != grid[h-i-1][w-j-1]:
                return False
    return True

# Read input
h, w = map(int, input().split())

# Read the grid
grid = []
for _ in range(h):
    grid.append(input())

# Check if the grid can be made symmetric
if is_grid_symmetric(grid):
    print("YES")
else:
    print("NO")