def count_subrectangles(H, W, N, painted_cells):
    grid = [[0] * W for _ in range(H)]

    for cell in painted_cells:
        row, col = cell
        grid[row - 1][col - 1] = 1

    counts = [0] * 10

    for i in range(H - 2):
        for j in range(W - 2):
            black_count = 0
            for x in range(i, i + 3):
                for y in range(j, j + 3):
                    if grid[x][y] == 1:
                        black_count += 1
            counts[black_count] += 1

    return counts


# Example usage

H, W, N = map(int, input().split())
painted_cells = [list(map(int, input().split())) for _ in range(N)]

result = count_subrectangles(H, W, N, painted_cells)

for count in result:
    print(count)