import itertools

def check_symmetric(grid):
    h = len(grid)
    w = len(grid[0])
    for i in range(h):
        for j in range(w):
            if grid[i][j] != grid[h-1-i][w-1-j]:
                return False
    return True

def can_be_symmetric(h, w, grid):
    if h % 2 == 0 and w % 2 == 0:
        row_combinations = list(itertools.combinations(range(h), 2))
        col_combinations = list(itertools.combinations(range(w), 2))
        for i, j in row_combinations:
            for m, n in col_combinations:
                new_grid = [list(row) for row in grid]
                new_grid[i], new_grid[j] = new_grid[j], new_grid[i]
                for row in new_grid:
                    row[m], row[n] = row[n], row[m]
                if check_symmetric(new_grid):
                    return True
        return False
    elif h % 2 == 0:
        row_combinations = list(itertools.combinations(range(h), 2))
        for i, j in row_combinations:
            new_grid = [list(row) for row in grid]
            new_grid[i], new_grid[j] = new_grid[j], new_grid[i]
            if check_symmetric(new_grid):
                return True
        return False
    elif w % 2 == 0:
        col_combinations = list(itertools.combinations(range(w), 2))
        for m, n in col_combinations:
            new_grid = [list(row) for row in grid]
            for row in new_grid:
                row[m], row[n] = row[n], row[m]
            if check_symmetric(new_grid):
                return True
        return False
    else:
        return check_symmetric(grid)

# Getting input from the user
h, w = map(int, input().split())
grid = [list(input()) for _ in range(h)]

# Checking if the grid can be made symmetric
if can_be_symmetric(h, w, grid):
    print("YES")
else:
    print("NO")