def find_complexity(H, W, grid):
    def check_complexity(grid):
        if not grid or len(grid) == 1 or len(grid[0]) == 1:
            return 0
        
        rows = len(grid)
        cols = len(grid[0])
        row_count = [0] * rows
        col_count = [0] * cols

        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == '#':
                    row_count[i] += 1
                    col_count[j] += 1

        if all(count == 0 or count == cols for count in row_count) or all(count == 0 or count == rows for count in col_count):
            return 0
        
        min_complexity = float('inf')
        
        for i in range(1, rows):
            subgrid1 = grid[:i]
            subgrid2 = grid[i:]
            c1 = check_complexity(subgrid1)
            c2 = check_complexity(subgrid2)
            max_c = max(c1, c2)
            if max_c < min_complexity:
                min_complexity = max_c
        
        for j in range(1, cols):
            subgrid1 = [row[:j] for row in grid]
            subgrid2 = [row[j:] for row in grid]
            c1 = check_complexity(subgrid1)
            c2 = check_complexity(subgrid2)
            max_c = max(c1, c2)
            if max_c < min_complexity:
                min_complexity = max_c

        return min_complexity + 1

    grid = [list(row) for row in grid.split()]

    return check_complexity(grid)

H, W = map(int, input().split())
grid = '\n'.join(input() for _ in range(H))

print(find_complexity(H, W, grid))
