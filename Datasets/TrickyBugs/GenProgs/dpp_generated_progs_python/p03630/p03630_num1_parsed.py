def calculate_max_area(H, W, grid):
    row_count = [0] * H
    col_count = [0] * W

    for i in range(H):
        for j in range(W):
            if grid[i][j] == '#':
                row_count[i] += 1
                col_count[j] += 1

    max_area = 0
    for i in range(H):
        for j in range(W):
            if grid[i][j] == '#':
                max_area = max(max_area, row_count[i] + col_count[j] - 1)
            else:
                max_area = max(max_area, row_count[i] + col_count[j])

    return max_area

# Read input
H, W = map(int, input().split())
grid = []
for _ in range(H):
    grid.append(input())

# Calculate and print maximum possible area of Snuke's rectangle
print(calculate_max_area(H, W, grid))
