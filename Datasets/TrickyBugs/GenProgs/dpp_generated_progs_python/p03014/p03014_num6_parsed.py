H, W = map(int, input().split())
grid = [input() for _ in range(H)]

max_lighted = 0
for i in range(H):
    for j in range(W):
        if grid[i][j] == '.':
            lighted = 1
            for k in range(i-1, -1, -1):
                if grid[k][j] == '#':
                    break
                lighted += 1
            for k in range(i+1, H):
                if grid[k][j] == '#':
                    break
                lighted += 1
            for k in range(j-1, -1, -1):
                if grid[i][k] == '#':
                    break
                lighted += 1
            for k in range(j+1, W):
                if grid[i][k] == '#':
                    break
                lighted += 1
            max_lighted = max(max_lighted, lighted)

print(max_lighted)