H, W = map(int, input().split())
grid = []
for _ in range(H):
    grid.append(list(input()))

dx = [-1, -1, -1, 0, 0, 1, 1, 1]
dy = [-1, 0, 1, -1, 1, -1, 0, 1]

for i in range(H):
    for j in range(W):
        if grid[i][j] == ".":
            count = 0
            for k in range(8):
                ni = i + dx[k]
                nj = j + dy[k]
                if 0 <= ni < H and 0 <= nj < W and grid[ni][nj] == "#":
                    count += 1
            grid[i][j] = str(count)

for row in grid:
    print("".join(row))