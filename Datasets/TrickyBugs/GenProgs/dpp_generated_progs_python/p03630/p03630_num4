def max_rectangle_area(h, w, grid):
    # Initialize variables
    max_area = 0
    rows = [0] * h
    cols = [0] * w

    # Count the number of black squares in each row and column
    for i in range(h):
        for j in range(w):
            if grid[i][j] == '#':
                rows[i] += 1
                cols[j] += 1

    # Calculate the maximum possible area
    for i in range(h):
        for j in range(w):
            area = (rows[i] + cols[j]) - (grid[i][j] == '#')
            max_area = max(max_area, area)

    # Return the maximum possible area
    return max_area


# Read input
h, w = map(int, input().split())
grid = []
for _ in range(h):
    grid.append(input())

# Calculate and print the maximum possible area
print(max_rectangle_area(h, w, grid))