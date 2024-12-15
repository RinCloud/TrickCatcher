H, W = map(int, input().split())

grid = [list(input()) for _ in range(H)]

def dfs(i, j):
    if i < 0 or i >= H or j < 0 or j >= W or grid[i][j] == '.':
        return
    grid[i][j] = '.'
    dfs(i-1, j)
    dfs(i+1, j)
    dfs(i, j-1)
    dfs(i, j+1)

start = None
for i in range(H):
    for j in range(W):
        if grid[i][j] == '#':
            start = (i, j)
            break
    if start:
        break

dfs(start[0], start[1])

if any('#' in row for row in grid):
    print('No')
else:
    print('Yes')