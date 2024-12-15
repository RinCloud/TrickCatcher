H, W = map(int, input().split())
grid = []
for _ in range(H):
    grid.append(input().strip())

count = 0
for r in range(1, H):
    for c in range(1, W):
        if grid[r][c] == '#' and (grid[r-1][c] == '.' or grid[r][c-1] == '.'):
            count += 1

print(count)