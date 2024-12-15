H, W = map(int, input().split())

grid = []
for i in range(H):
    row = list(input())
    grid.append(row)

def is_good(grid):
    visited = [[False for _ in range(W)] for _ in range(H)]
    visited[0][0] = True

    stack = [(0, 0)]
    while stack:
        r, c = stack.pop()
        if r == H-1 and c == W-1:
            return True
        if r + 1 < H and grid[r+1][c] == '.' and not visited[r+1][c]:
            stack.append((r+1, c))
            visited[r+1][c] = True
        if c + 1 < W and grid[r][c+1] == '.' and not visited[r][c+1]:
            stack.append((r, c+1))
            visited[r][c+1] = True

    return False

operations = 0
while not is_good(grid):
    for r in range(H-1, -1, -1):
        for c in range(W-1, -1, -1):
            if grid[r][c] == '#':
                for i in range(r + 1):
                    for j in range(c + 1):
                        grid[i][j] = '#'
                operations += 1
                break

print(operations)