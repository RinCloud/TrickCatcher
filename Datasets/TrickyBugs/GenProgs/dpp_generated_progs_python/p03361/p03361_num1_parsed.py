def can_achieve_objective(H, W, grid):
    for i in range(H):
        for j in range(W):
            if grid[i][j] == '#':
                if (i > 0 and grid[i-1][j] =='#') or (i < H-1 and grid[i+1][j] =='#') or \
                (j > 0 and grid[i][j-1] =='#') or (j < W-1 and grid[i][j+1] =='#'):
                    continue
                else:
                    return "No"
    return "Yes"

H, W = map(int, input().split())
grid = []
for _ in range(H):
    row = input().strip()
    grid.append(row)
    
print(can_achieve_objective(H, W, grid))
