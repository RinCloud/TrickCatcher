def max_rectangle_area(H, W, grid):
    row_sum = [[0] * (W + 1) for _ in range(H + 1)]
    col_sum = [[0] * (W + 1) for _ in range(H + 1)]

    # Calculate the cumulative sum of black squares in each row and column
    for i in range(1, H + 1):
        for j in range(1, W + 1):
            if grid[i - 1][j - 1] == '#':
                row_sum[i][j] = row_sum[i][j - 1] + 1
                col_sum[i][j] = col_sum[i - 1][j] + 1
            else:
                row_sum[i][j] = row_sum[i][j - 1]
                col_sum[i][j] = col_sum[i - 1][j]

    max_area = 0

    # Find the maximum area rectangle
    for i in range(1, H + 1):
        for j in range(1, W + 1):
            for k in range(i, H + 1):
                for l in range(j, W + 1):
                    black_squares = row_sum[k][l] - row_sum[i - 1][l] - row_sum[k][j - 1] + row_sum[i - 1][j - 1]
                    area = (k - i + 1) * (l - j + 1)
                    if black_squares == area:
                        max_area = max(max_area, area)

    return max_area


# Read input
H, W = map(int, input().split())
grid = []
for _ in range(H):
    grid.append(input())

# Calculate and print the maximum possible area of Snuke's rectangle
print(max_rectangle_area(H, W, grid))
