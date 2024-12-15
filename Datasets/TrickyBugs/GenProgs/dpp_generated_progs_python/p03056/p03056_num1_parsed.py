def grid_complexity(h, w, grid):
    # Initialize complexity to 0
    complexity = 0

    # Check if all squares are black or white
    if all(all(square == '#' for square in row) or all(square == '.' for square in row) for row in grid):
        complexity = 0
    else:
        # Divide the grid into two subgrids by a line parallel to one of the sides of the grid

        # Try vertical divisions
        for i in range(1, w):
            subgrid1 = [row[:i] for row in grid]
            subgrid2 = [row[i:] for row in grid]
            c1 = grid_complexity(h, i, subgrid1)
            c2 = grid_complexity(h, w - i, subgrid2)
            m = max(c1, c2)
            complexity = min(complexity, m) if complexity != 0 else m + 1

        # Try horizontal divisions
        for i in range(1, h):
            subgrid1 = grid[:i]
            subgrid2 = grid[i:]
            c1 = grid_complexity(i, w, subgrid1)
            c2 = grid_complexity(h - i, w, subgrid2)
            m = max(c1, c2)
            complexity = min(complexity, m) if complexity != 0 else m + 1

    return complexity


# Read input
h, w = map(int, input().split())
grid = [list(input()) for _ in range(h)]

# Calculate and print grid complexity
complexity = grid_complexity(h, w, grid)
print(complexity)
