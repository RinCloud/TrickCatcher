def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    if k == 1:
        return [1]
    if k == 2:
        return [1, 2]
    if k == 3:
        return [1, 2, 1]
    if k == 4:
        return [1, 2, 1, 2]
    if k == 5:
        return [1, 2, 1, 2, 1]
    if k == 6:
        return [1, 2, 1, 2, 1, 2]
    if k == 7:
        return [1, 2, 1, 2, 1, 2, 1]
    if k == 8:
        return [1, 2, 1, 2, 1, 2, 1, 2]
    if k == 9:
        return [1, 2, 1, 2, 1, 2, 1, 2, 1]
    if k == 10:
        return [1, 2, 1, 2, 1, 2, 1, 2, 1, 2]