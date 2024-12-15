def count_operations(grid):
    H = len(grid)
    W = len(grid[0])
    count = 0

    while True:
        for i in range(H):
            for j in range(W):
                if grid[i][j] == "#":
                    if i > 0 and grid[i-1][j] == ".":
                        grid[i-1][j] = "#"
                    if i < H-1 and grid[i+1][j] == ".":
                        grid[i+1][j] = "#"
                    if j > 0 and grid[i][j-1] == ".":
                        grid[i][j-1] = "#"
                    if j < W-1 and grid[i][j+1] == ".":
                        grid[i][j+1] = "#"
        
        if all(grid[i][j] == "#" for i in range(H) for j in range(W)):
            break

        count += 1
    
    return count

# Read input from standard input
H, W = map(int, input().split())
grid = []
for _ in range(H):
    row = list(input().strip())
    grid.append(row)

# Call the count_operations function and print the result
result = count_operations(grid)
print(result)
