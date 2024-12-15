from typing import List

def print_grid(H: int, W: int, grid: List[str]) -> None:
    # Function to print the modified grid with the number of adjacent bomb squares
    
    for i in range(H):
        for j in range(W):
            if grid[i][j] == ".":
                count = 0
                # Check all adjacent squares
                for dx in [-1, 0, 1]:
                    for dy in [-1, 0, 1]:
                        if dx == 0 and dy == 0:
                            continue
                        nx, ny = i + dx, j + dy
                        if 0 <= nx < H and 0 <= ny < W and grid[nx][ny] == "#":
                            count += 1
                # Replace empty square with count
                grid[i] = grid[i][:j] + str(count) + grid[i][j+1:]
    
    # Print the modified grid
    for line in grid:
        print(line)

# Read input
H, W = map(int, input().split())
grid = []
for _ in range(H):
    grid.append(input())

# Call the function to print the modified grid
print_grid(H, W, grid)